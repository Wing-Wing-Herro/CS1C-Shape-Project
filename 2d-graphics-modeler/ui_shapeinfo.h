
#ifndef ui_shapeinfo_h
#define ui_shapeinfo_h


#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShapeInfo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *ShapeInfo)
    {
        if (ShapeInfo->objectName().isEmpty())
            ShapeInfo->setObjectName(QString::fromUtf8("ShapeInfo"));
        ShapeInfo->resize(703, 588);
        gridLayout = new QGridLayout(ShapeInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(ShapeInfo);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setMinimumSectionSize(18);

        verticalLayout->addWidget(treeWidget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ShapeInfo);

        QMetaObject::connectSlotsByName(ShapeInfo);
    } // setupUi

    void retranslateUi(QDialog *ShapeInfo)
    {
        ShapeInfo->setWindowTitle(QApplication::translate("ShapeInfo", "ShapeInfo", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ShapeInfo", "Shapes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShapeInfo: public Ui_ShapeInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif /* ui_shapeinfo_h */
