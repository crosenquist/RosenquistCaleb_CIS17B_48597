#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QProgressBar>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window -> setWindowTitle("Enter Your Age");

    //Declaring Widgets
    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider   = new QSlider(Qt::Horizontal);
    QProgressBar *bar = new QProgressBar;
    QProgressBar *invertedBar = new QProgressBar;
    //invertedBar->setInvertedAppearance(1);

    //Ranges of Widgets
    spinBox     -> setRange(0,150);
    slider      -> setRange(0,150);
    bar         -> setRange(0,150);
    invertedBar -> setRange(0,150);

    //Slots and Signals
    //void invertValue();

    //SpinBox
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     bar, SLOT(setValue(int)));
    QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                     spinBox, SIGNAL(invertedValue()));
    //Slider
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spinBox, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     bar, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     invertedBar, SLOT(setValue(int)));

    spinBox -> setValue(35);

    //Layout
    QHBoxLayout *layout = new QHBoxLayout;
    layout -> addWidget(spinBox);
    layout -> addWidget(slider);
    layout -> addWidget(bar);
    layout -> addWidget(invertedBar);
    window -> setLayout(layout);

    window -> show();

    return app.exec();
}
