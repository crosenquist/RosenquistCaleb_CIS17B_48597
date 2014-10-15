#ifndef MYWIDGET_H
#define MYWIDGET_H

class MyWidget : public QWidget
 {
     Q_OBJECT

 public:
     MyWidget();

 signals:
     void buttonClicked();

 private:
     QPushButton *myButton;
 };
#endif // MYWIDGET_H
