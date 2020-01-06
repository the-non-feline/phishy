#include <QApplication>
#include <QWidget>
#include <QStackedLayout>
#include <QImage>
#include <QPixmap>
#include <QLabel>

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);
	QWidget window;
	QStackedLayout layout;

	window.resize(700, 400);
	window.setWindowTitle("Simple example");

	window.setLayout(&layout);

	// QImage banner;
	// banner.load("./banner_warning.jpg");
	QLabel *banner_label = new QLabel();
	layout.addWidget(banner_label);
	QPixmap banner_pm;
	banner_pm.load("./banner_warning.jpg");
	banner_label->setPixmap(banner_pm);

	window.show();

	return app.exec();
}
