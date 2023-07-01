#include <QString>
#include <QPixmap>
#include <QImage>
#include <QMultiMap>

//Пространство имён для более хорошой группировки методов
namespace ASCIIArtCreatorLib {
    //Стандартные наборы симболов для образования ASCII картинки
    const QVector<QString> formatOne = {"░", "█"};
    const QVector<QString> formatTwo = {"░", "▒", "▓", "█"};
    const QVector<QString> formatThree = {".", ",", ";", "+", "*", "?", "%", "$", "#", "@"};
    const QVector<QString> formatFour = {".", ",", ";", "+", "*", "?", "%", "$", "#", "@", "█"};
    const QMultiMap<int, QString> brailleSymbols = {
        {0, "⠄" },
        {1, "⠁" },{2, "⠂" },{12, "⠃" },{3, "⠄" },{13, "⠅" },
        {23, "⠆" },{123, "⠇" },{4, "⠈" },{14, "⠉" },{24, "⠊" },{124, "⠋" },
        {34, "⠌" },{134, "⠍" },{234, "⠎" },{1234, "⠏" },{5, "⠐" },{15, "⠑" },
        {25, "⠒" },{125, "⠓" },{35, "⠔" },{135, "⠕" },{235, "⠖" },{1235, "⠗" },
        {45, "⠘" },{145, "⠙" },{245, "⠚" },{1245, "⠛" },{345, "⠜" },{1345, "⠝" },
        {2345, "⠞" },{12345, "⠟" },{6, "⠠" },{16, "⠡" },{26, "⠢" },{126, "⠣" },
        {36, "⠤" },{136, "⠥" },{236, "⠦" },{1236, "⠧" },{46, "⠨" },{146, "⠩" },
        {246, "⠪" },{1246, "⠫" },{346, "⠬" },{1346, "⠭" },{2346, "⠮" },{12346, "⠯" },
        {56, "⠰" },{156, "⠱" },{256, "⠲" },{1256, "⠳" },{356, "⠴" },{1356, "⠵" },
        {2356, "⠶" },{12356, "⠷" },{456, "⠸" },{1456, "⠹" },{2456, "⠺" },{12456, "⠻" },
        {3456, "⠼" },{13456, "⠽" },{23456, "⠾" },{123456, "⠿" },{7, "⡀" },{17, "⡁" },
        {27, "⡂" },{127, "⡃" },{37, "⡄" },{137, "⡅" },{237, "⡆" },
        {1237, "⡇" },{47, "⡈" },{147, "⡉" },{247, "⡊" },{1247, "⡋" },
        {347, "⡌" },{1347, "⡍" },{2347, "⡎" },{12347, "⡏" },{57, "⡐" },{157, "⡑" },
        {257, "⡒" },{1257, "⡓" },{357, "⡔" },{1357, "⡕" },{2357, "⡖" },{12357, "⡗" },{457, "⡘" },{1457, "⡙" },
        {2457, "⡚" },{12457, "⡛" },{3457, "⡜" },{13457, "⡝" },{23457, "⡞" },{123457, "⡟" },
        {67, "⡠" },{167, "⡡" },{267, "⡢" },{1267, "⡣" },{367, "⡤" },
        {1367, "⡥" },{2367, "⡦" },{12367, "⡧" },{467, "⡨" },{1467, "⡩" },{2467, "⡪" },
        {12467, "⡫" },{3467, "⡬" },{13467, "⡭" },{23467, "⡮" },{123467, "⡯" },{567, "⡰" },
        {1567, "⡱" },{2567, "⡲" },{12567, "⡳" },{3567, "⡴" },{13567, "⡵" },{23567, "⡶" },
        {123567, "⡷" },{4567, "⡸" },{14567, "⡹" },{24567, "⡺" },{124567, "⡻" },{34567, "⡼" },
        {134567, "⡽" },{234567, "⡾" },{1234567, "⡿" },{8, "⢀" },{18, "⢁" },{28, "⢂" },
        {128, "⢃" },{38, "⢄" },{138, "⢅" },{238, "⢆" },{1238, "⢇" },{48, "⢈" },
        {148, "⢉" },{248, "⢊" },{1248, "⢋" },{348, "⢌" },{1348, "⢍" },
        {2348, "⢎" },{12348, "⢏" },{58, "⢐" },{158, "⢑" },{258, "⢒" },
        {1258, "⢓" },{358, "⢔" },{1358, "⢕" },{2358, "⢖" },{12358, "⢗" },{458, "⢘" },
        {1458, "⢙" },{2458, "⢚" },{12458, "⢛" },{3458, "⢜" },{13458, "⢝" },{23458, "⢞" },
        {123458, "⢟" },{68, "⢠" },{168, "⢡" },{268, "⢢" },{1268, "⢣" },{368, "⢤" },
        {1368, "⢥" },{2368, "⢦" },{12368, "⢧" },{468, "⢨" },{1468, "⢩" },{2468, "⢪" },
        {12468, "⢫" },{3468, "⢬" },{13468, "⢭" },{23468, "⢮" },{123468, "⢯" },
        {568, "⢰" },{1568, "⢱" },{2568, "⢲" },{12568, "⢳" },{3568, "⢴" },{13568, "⢵" },
        {23568, "⢶" },{123568, "⢷" },{4568, "⢸" },{14568, "⢹" },{24568, "⢺" },
        {124568, "⢻" },{34568, "⢼" },{134568, "⢽" },{234568, "⢾" },{1234568, "⢿" },
        {78, "⣀" },{178, "⣁" },{278, "⣂" },{1278, "⣃" },{378, "⣄" },
        {1378, "⣅" },{2378, "⣆" },{12378, "⣇" },{478, "⣈" },{1478, "⣉" },
        {2478, "⣊" },{12478, "⣋" },{3478, "⣌" },{13478, "⣍" },{23478, "⣎" },{123478, "⣏" },
        {578, "⣐" },{1578, "⣑" },{2578, "⣒" },{12578, "⣓" },{3578, "⣔" },
        {13578, "⣕" },{23578, "⣖" },{123578, "⣗" },{4578, "⣘" },{14578, "⣙" },
        {24578, "⣚" },{124578, "⣛" },{34578, "⣜" },{134578, "⣝" },{234578, "⣞" },
        {1234578, "⣟" },{678, "⣠" },{1678, "⣡" },{2678, "⣢" },{12678, "⣣" },
        {3678, "⣤" },{13678, "⣥" },{23678, "⣦" },{123678, "⣧" },{4678, "⣨" },
        {14678, "⣩" },{24678, "⣪" },{124678, "⣫" },{34678, "⣬" },{134678, "⣭" },{234678, "⣮" },
        {1234678, "⣯" },{5678, "⣰" },{15678, "⣱" },{25678, "⣲" },{125678, "⣳" },
        {35678, "⣴" },{135678, "⣵" },{235678, "⣶" },{1235678, "⣷" },{45678, "⣸" },{145678, "⣹" },
        {245678, "⣺" },{1245678, "⣻" },{345678, "⣼" },{1345678, "⣽" },{2345678, "⣾" },{12345678, "⣿" }
        };
    //Методы для обработки картинок
    QString getCharByColor(const QColor, const QVector<QString>);
    QString makeArt(const QImage *, const QVector<QString>);
    QString makeArt(const QPixmap *, const QVector<QString>);

    QString makeArt(const QImage *, QMultiMap<int, QString>);
    QString getCharByColor(const QImage *, QMultiMap<int, QString>);
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

QString ASCIIArtCreatorLib::makeArt(const QImage *image, QMultiMap<int, QString> dict)
{
    if (image->height() % 4 != 0 && image->width() % 2 != 0)
        return "";
    QString outputStr = "";
    QImage monoImg;
    monoImg = image->convertedTo(QImage::Format_Mono);
    for (int y = 0; y < monoImg.height(); y += 4) {
        for (int x = 0; x < monoImg.width(); x += 2) {
            //QImage *extraImg = new QImage(2, 4, QImage::Format_Mono); //Слишком медленно
            QImage *extraImg = new QImage(2, 4, QImage::Format_ARGB32);
            for (int row = 0; row < 4; row++) {
                extraImg->setPixelColor(0, row, monoImg.pixelColor(x, y + row));
                extraImg->setPixelColor(1, row, monoImg.pixelColor(x + 1, y + row));
            }
            outputStr += ASCIIArtCreatorLib::getCharByColor(extraImg, dict);
            delete extraImg;
        }
        outputStr += "\n";
    }
    return outputStr;
}
QString ASCIIArtCreatorLib::getCharByColor(const QImage *image, QMultiMap<int, QString>)
{
     //if (image->format() != QImage::Format_Mono &&
    if (image->height() != 4 && image->width() != 2)
        return "";
    QString value = "";
    for (int y = 0; y < image->height(); y++) {
        if (y != image->height() - 1) {
            value += image->pixelColor(0, y).black() == 0 ? "" : QString::number(y + 1);
            value += image->pixelColor(1, y).black() == 0 ? "" : QString::number(y + 4);
        } else {
            value += image->pixelColor(0, y).black() == 0 ? "" : QString::number(7);
            value += image->pixelColor(1, y).black() == 0 ? "" : QString::number(8);
        }
    }
    QStringList list = value.split("");
    list.sort();
    value = "";
    for (int i = 0; i < list.count(); i++) {
        value += list.at(i);
    }
    return ASCIIArtCreatorLib::brailleSymbols.value(value.toInt(), "");
}
