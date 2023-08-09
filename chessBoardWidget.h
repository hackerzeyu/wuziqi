#ifndef CHESSBOARDWIDGET_H
#define CHESSBOARDWIDGET_H

#include <QWidget>
#include <QVector>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class ChessBoardWidget : public QWidget
{
    Q_OBJECT

public:
    ChessBoardWidget(QWidget *parent = nullptr);
    ~ChessBoardWidget();
    void init();
    void initUI();
    void drawChessBoard();
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    bool GameJudge(QVector<QPoint> &chessPositions,QPoint &pos);
private:
    QVector<QPoint> whiteChessPositions;
    QVector<QPoint> blackChessPositions;

private:
    Ui::Widget *ui;
};
#endif // CHESSBOARDWIDGET_H
