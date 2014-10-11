#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QProgressBar>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("Enter you Age");

    QSpinBox *spinBox = new QSpinBox;
    QSlider  *slider  = new QSlider(Qt::Horizontal);
    QProgressBar *progressBar = new QProgressBar;
    spinBox -> setRange(0,5000);
    slider  -> setRange(0,5000);
    progressBar -> setRange(0,5000);

    //SpinBox Signals and Slots
    QObject::connect(spinBox,SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(spinBox,SIGNAL(valueChanged(int)),
                     progressBar, SLOT(setValue(int)));

    //Slider Signals and Slots
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox,SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     progressBar,SLOT(setValue(int)));

    //Progress Bar Signals and Slots
    QObject::connect(progressBar, SIGNAL(valueChanged(int)),
                     spinBox,SLOT(setValue(int)));
    QObject::connect(progressBar, SIGNAL(valueChanged(int)),
                     slider,SLOT(setValue(int)));

    spinBox -> setValue(0);

    QHBoxLayout *layout = new QHBoxLayout;
    layout -> addWidget(spinBox);
    layout -> addWidget(slider);
    layout -> addWidget(progressBar);
    window -> setLayout(layout);

    window -> show();

    return app.exec();
}
