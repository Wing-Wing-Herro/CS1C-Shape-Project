//
//  shapeinfo.hpp
//  2dproject
//
//  Created by Amin Parvizi on 7/16/20.
//  Copyright © 2020 Amin Parvizi. All rights reserved.
//

#ifndef shapeinfo_h
#define shapeinfo_h
#include <QDialog>
#include <QTreeWidget>
#include <QString>
#include <QPen>

#include "shapebuffer.h"


namespace Ui {
class ShapeInfo;
}

class ShapeInfo: public QDialog, public ShapeBuffer
{
    Q_OBJECT

public:
    enum SortType{ID,AREA,PERIM};
    explicit ShapeInfo(QWidget *parent = nullptr);
    explicit ShapeInfo(QWidget *parent = nullptr, SortType = ID);

    ~ShapeInfo();

private slots:
    QTreeWidgetItem* addTreeRoot(QString name);
    void addTreeChild(QTreeWidgetItem *parent, QString name);

private:
    Ui::ShapeInfo *ui;
    QBrush brush;
    QPen pen;
    QTreeWidgetItem *item;


};

#endif /* shapeinfo_h */
