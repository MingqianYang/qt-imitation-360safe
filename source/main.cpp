#include <QtGui>
#include "src/main_widget/main_widget.h"
//#include "main_widget.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);



//	QFont font("΢���ź�", 9);
//	app.setFont(font);

    MainWidget main_widget;
    main_widget.showWidget();

    return app.exec();
}
