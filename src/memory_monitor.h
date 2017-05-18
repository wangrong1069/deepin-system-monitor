#ifndef MemoryMONITOR_H
#define MemoryMONITOR_H

#include <QWidget>
#include <QVBoxLayout>
#include "top_process_view.h"

class MemoryMonitor : public QWidget
{
    Q_OBJECT
    
public:
    MemoryMonitor(QWidget *parent = 0);
    
public slots:
    void updateStatus(long uMemory, long tMemory, long uSwap, long tSwap);
    void updateTopStatus(QList<ListItem*> items);
    
protected:
    void paintEvent(QPaintEvent *event);
    QPointF getEndPointerCoordinate(double percent, int r);
    
    long usedMemory;
    long totalMemory;
    long usedSwap;
    long totalSwap;
    
    int memoryPercentRenderSize = 13;
    
    int titleRenderSize = 20;
    int pointerRenderPaddingX = 4;
    int pointerRenderPaddingY = 9;
    int pointerRadius = 3;
    
    int ringWidth = 6;
    
    int memoryRenderSize = 9;
    int memoryRenderPaddingX = 13;
    int memoryRenderPaddingY = 50;
    QString memoryColor = "#00C5C0";
    
    int swapRenderSize = 9;
    int swapRenderPaddingX = 13;
    int swapRenderPaddingY = 70;
    QString swapColor = "#FEDF19";
    
    int outsideRingRadius = 50;
    
    int insideRingRadius = 43;
    
    int ringCenterPointerX = 220;
    int ringCenterPointerY = 50;
    QString ringBackgroundColor = "#252525";
    
    int topAppsTitleRenderSize = 11;
    int topAppsTitleRenderOffsetY = 100;
    
    QVBoxLayout *layout;
    TopProcessView *topProcessView;
};

#endif    