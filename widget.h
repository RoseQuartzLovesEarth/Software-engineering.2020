#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QtWidgets>
#include <QFile>
#include <QDir>

namespace Ui { class Widget; }
class Widget : public QWidget {
    Q_OBJECT
    Ui::Widget *ui;
public:
    Widget(QWidget *parent = 0);
    void updateActions();
private slots:
    void insertChild();
    bool insertColumn();
    void insertRow();
    bool removeColumn();
    void removeRow();
public slots:
    void updateActions(const QItemSelection &,const QItemSelection &);
};
#endif
