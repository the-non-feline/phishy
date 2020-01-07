#include <string>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPixmap>
#include <QLabel>

using namespace std;

QLabel* displayImage(string imgpath) {
	QPixmap banner_pm;
	QString imgpath_qstr = QString::fromStdString(imgpath);
	banner_pm.load(imgpath_qstr);
	QLabel *banner_label = new QLabel();
	banner_label->setPixmap(banner_pm);
	
	return banner_label;
}

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);
	QWidget window;
	QVBoxLayout layout;
	layout.setSpacing(0);
	window.resize(500, 350);
	window.setWindowTitle("LCUSD Phishing Test - Info");
	window.setLayout(&layout);
	window.setFixedSize(window.size());

	// TODO: Manage layout arrangement

	layout.addWidget(displayImage("./lcusd_banner.jpg"));
	layout.addWidget(displayImage("./banner_warning.jpg"));

	window.show();

	return app.exec();
}
