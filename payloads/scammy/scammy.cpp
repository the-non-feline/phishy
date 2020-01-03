#include <QApplication>
#include <QWidget>
#include <QStackedLayout>
#include <QImage>
#include <QLabel>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    QWidget window;
	QStackedLayout layout;

    window.resize(700, 400);
    window.setWindowTitle("Simple example");

	window.setLayout(&layout);

	QImage banner;
	banner.load("./banner_warning.png");
	QLabel banner_label(&window);
	banner_label;

	window.show();

    return app.exec();
}
