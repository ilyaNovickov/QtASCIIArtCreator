#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QStyleFactory>
#include "asciiartcreatorlib.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Установка бегунка в значение размера шрифта
    ui->horizontalSlider->setValue(ui->plainTextEdit->font().pointSize());
    ui->fontSizeLabel->setText(QString("Font Size : %1").arg(ui->plainTextEdit->font().pointSize()));

    //Добавление элементов в ComboBox
    ui->comboBox->addItems(QStringList() << "Format №1"
                                         << "Format №2"
                                         << "Format №3"
                                         << "Format №4"
                                         << "Format \"Braille\"");
    //По умолчанию в ComboBox выбран второй набор
    ui->comboBox->setCurrentIndex(2);

    //Получение списка со стилями
    QStringList listofStyles = QStyleFactory::keys();
    //Проход по списку
    for (QString styleName : listofStyles) {
        //Инициализация переменной с QAction
        QAction *styleAction = qobject_cast<QAction *>( new QAction(this->ui->menuSettings) );
        //Установка во свойство Text названия стиля
        styleAction->setText(styleName);
        //Подключение сигнала к слоту установки стиля
        connect(styleAction, SIGNAL(triggered()), this, SLOT(setStyle()));
        //Добавление QAction в меню
        ui->menuSettings->addAction(styleAction);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Слот, выводящий информацию о программе
void MainWindow::on_actionAbout_program_triggered()
{
    QMessageBox::about(this, tr("About"), QString("ASCII Art Creator"));
}

//Слот, выводящий информацию о Qt
void MainWindow::on_actionAbout_Qt_triggered()
{
    qApp->aboutQt();
}

//Слот для изменения значений бегунка
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QFont font = ui->plainTextEdit->font();
    font.setPointSize(value);
    ui->plainTextEdit->setFont(font);
    ui->fontSizeLabel->setText(QString("Font Size : %1").arg(value));
}

//Слот для открытия картинки
void MainWindow::on_action_Open_triggered()
{
    //Получение имени открываемого файла
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Open File",
                                                    QDir::homePath(),
                                                    "bmp files (*.bmp);;jpeg files (*.jpeg, "
                                                    "*.jpg);;png files (*.png)");
    //Если файл не выбран, то выход из метода
    if (fileName.isEmpty())
        return;
    //Загрузка изображения в виджет
    ui->label->setPixmap(QPixmap(fileName));
}

//Слот для сохранения картинки
void MainWindow::on_action_Save_triggered()
{
    //Если в текстовом поле нет текста, то выход из метода
    if (ui->plainTextEdit->toPlainText().isEmpty())
        return;
    //Получение имени сохраняемого файла
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    "Save File",
                                                    QDir::currentPath(),
                                                    "txt files (*.txt)");
    //Если файла нет, то выход из метода
    if (fileName.isEmpty())
        return;
    //Иницлизация файла
    QFile file(fileName);
    //Открытие файла для чтение как текстового
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream textStream(&file);//Иницлизация текстового потока
        textStream << ui->plainTextEdit->toPlainText();//Запись текста из виджета в файл
        file.close();//Закрытие файла
    } else {//Если не удалось открыть файл, то вывод сообщения
        QMessageBox::critical(this, "Error", "Application couldn't save file");
    }
}

//Слот для копирования картинки
void MainWindow::on_action_Copy_triggered()
{
    ui->plainTextEdit->selectAll();//Выделить весь текс в текстовом поле
    ui->plainTextEdit->copy();//Скопировать текст
}

//Слот для вкл/выкл виджета с картинкой
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    //Если значение CheckBox - вкл, то убрать виджет с картинкой
    if (arg1 == Qt::Checked)
        ui->scrollArea->setVisible(false);
    else if (arg1 == Qt::Unchecked)//Иначе показать
        ui->scrollArea->setVisible(true);
}


//Слот создания ASCII картинки
void MainWindow::on_actionaction_Start_triggered()
{
    //Если картинки нет, то выход из метода
    if (ui->label->pixmap().isNull())
        return;
    //Если в текстовом поле есть текст, то очистить его
    if (!(ui->plainTextEdit->toPlainText().isNull()))
        ui->plainTextEdit->clear();
    //Иницализация изображения для обработки
    //Изображение принимает размер в зависимости от
    //значений SpineBox
    QImage *img = new QImage(ui->label->pixmap().toImage().scaled(ui->widthSpineBox->value(),
                                                                  ui->heightSpineBox->value()));
    //Вектор с форматом ASCII картинки
    QVector<QString> currentFormat;
    //Выбор формата в зависимости от combobox
    switch (ui->comboBox->currentIndex()) {
    case 0:
        currentFormat = ASCIIArtCreatorLib::formatOne;
        break;
    case 1:
        currentFormat = ASCIIArtCreatorLib::formatTwo;
        break;
    case 3:
        currentFormat = ASCIIArtCreatorLib::formatFour;
    case 4:
        //Вывод в текстовое поле изображения ASCII
        ui->plainTextEdit->setPlainText(ASCIIArtCreatorLib::makeBrialleArt(img, ui->invertColorCheckBox->isChecked()));
        delete img;//Очистка ресурсов
        return;//Выход из метода

    default:
    case 2:
        currentFormat = ASCIIArtCreatorLib::formatThree;
        break;
    }
    //Вывод в текстовое поле изображения ASCII
    ui->plainTextEdit->setPlainText(ASCIIArtCreatorLib::makeArt(img, currentFormat, ui->invertColorCheckBox->isChecked()));
    //Очистка ресурса
    delete img;
}

//Слот установки стиля
void MainWindow::setStyle()
{
    //Получение отправителя сигнала
    QAction *obj = qobject_cast<QAction *>(sender());
    //Если отправитель сигнала получен, то установка стиля, согласно свойству text
    if (obj != nullptr)
        QApplication::setStyle(obj->text());
}


