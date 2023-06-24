#include <QString>
#include <QPixmap>
#include <QImage>

//Пространство имён для более хорошой группировки методов
namespace ASCIIArtCreatorLib {
    //Стандартные наборы симболов для образования ASCII картинки
    const QVector<QString> formatOne = {"░", "█"};
    const QVector<QString> formatTwo = {"░", "▒", "▓", "█"};
    const QVector<QString> formatThree = {".", ",", ";", "+", "*", "?", "%", "$", "#", "@"};
    const QVector<QString> formatFour = {".", ",", ";", "+", "*", "?", "%", "$", "#", "@", "█"};
    //Методы для обработки картинок
    QString getCharByColor(const QColor, const QVector<QString>);
    QString makeArt(const QImage *, const QVector<QString>);
    QString makeArt(const QPixmap *, const QVector<QString>);
}

//Получение симбола, соотведствующегося цвету
//Принимает в качестве аргументов цвет и набор симболов
QString ASCIIArtCreatorLib::getCharByColor(const QColor color, const QVector<QString> formatArray)
{
    //Если набор пуст, то возвращает пустую строку
    if (formatArray.isEmpty())
        return "";
    //Код в несколько строчек
    /*
    int indx = float(formatArray.size()) / 256 * float(color.black());
    QString str = formatArray.at(indx);
    return str;
    */
    //Вовращает симбол
    //Подразумевается использование RGB или ARGB,
    //где каналу цвету соотведствует число от 0 до 255
    //В ходе вычыслений получаем индекс симбола, соотведствующегося оттенка серого
    return formatArray.at(float(formatArray.size()) / 256 * float(color.black()));
}

//Функция получения ASCII картинки
QString ASCIIArtCreatorLib::makeArt(const QImage *image, const QVector<QString> formatArray)
{
    //Объявление пустой картинки серого цвета
    QImage grayImg;
    //Если входящая картинка - чёрна-белая
    //то она безпреобразований инициализируется в переменную grayImg
    if (image->allGray())
        grayImg = *image;
    //иначе, если картинка цветная,
    //то в grayImg инициализируется чёрно-белая картника
    else
        grayImg = image->convertedTo(QImage::Format_Grayscale8);
    //Выходная строка
    QString outputArt = "";
    //Проход по матрицы картинки
    for (int y = 0; y < grayImg.height(); y++) {
        QString line = "";//Строка для формирования одной линии ASCII картинки
        for (int x = 0; x < grayImg.width(); x++) {
            //Формирование строки ASCII картинки
            line += getCharByColor(grayImg.pixelColor(x, y), formatArray);
        }
        //Линия добавляется в выходгую строку
        outputArt += (line + "\n");
    }
    //Возврат строки ASCII картинки
    return outputArt;
}

//Перегруженная версия makeArt(QImage, ...)
QString ASCIIArtCreatorLib::makeArt(const QPixmap *pixmap, const QVector<QString> formatArray)
{
    //Инициализация переменной типа QImage
    QImage image = pixmap->toImage();
    //Инициализация ASCII картинки
    QString str = makeArt(&image, formatArray);
    return str;
}
