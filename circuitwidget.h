#ifndef CIRCUITWIDGET_H
#define CIRCUITWIDGET_H

#include <QWidget>
#include <QList>
#include <QLineF>
#include "segmentpiste.h"
#include "vehicule.h"
#include "circuit.h"
#include "vehiculethread.h"
#include <QTimer>
#include <QPainter>

class CircuitWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CircuitWidget(int _nbVoitures,QWidget *parent = nullptr);
    Circuit circuit;

    const int nbVoitures;
    //QVector<VehiculeThread> voituresThreads;
    VehiculeThread voiture1;
    VehiculeThread voiture2;
    VehiculeThread voiture3;
    VehiculeThread voiture4;
    VehiculeThread voiture5;
    VehiculeThread voiture6;

protected:
    void paintEvent(QPaintEvent *event) override;

    QList <SegmentPiste>  coteDroit;
    QList <SegmentPiste>  coteGauche;
    QTimer tictoc;

    void createCircuit();



    void updateLines(const QList <SegmentPiste> &cote,QVector<QLineF> &lines,int decalageY);
    void drawVehicule(Vehicule *vehicule, const QColor &color,QPainter &painter);

private slots:
    void maj();

public slots:
    void loadCircuit1();
    void loadCircuit2();
    void loadCircuit3();
    void loadCircuit4();

signals:
};

#endif // CIRCUITWIDGET_H
