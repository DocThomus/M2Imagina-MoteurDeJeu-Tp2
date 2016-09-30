#include "gamewindow.h"
#include "camera.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QScreen>

#include <QtCore/qmath.h>
#include <QMouseEvent>
#include <QKeyEvent>
#include <time.h>
#include <sys/time.h>
#include <iostream>

#include <QtCore>
#include <QtGui>
using namespace std;





int main(int argc, char **argv)
{
    srand(time(NULL));
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    Camera *camera = new Camera();

    GameWindow window120(120);
    window120.setTitle("120fps");
    window120.setCamera(camera);
    window120.setFormat(format);
    window120.resize(640, 480);
    window120.setPosition(0,0);
    window120.show();
    //window120.setAnimating(true);

    GameWindow window60(60);
    window60.setTitle("60fps");
    window60.setCamera(camera);
    window60.setFormat(format);
    window60.resize(640, 480);
    window60.setPosition(640,29);
    window60.show();
    //window60.setAnimating(true);

    GameWindow window30(30);
    window30.setTitle("30fps");
    window30.setCamera(camera);
    window30.setFormat(format);
    window30.resize(640, 480);
    window30.setPosition(0,480);
    window30.show();
    //window30.setAnimating(true);

    GameWindow window1(1);
    window1.setTitle("1fps");
    window1.setCamera(camera);
    window1.setFormat(format);
    window1.resize(640, 480);
    window1.setPosition(640,480);
    window1.show();
    //window1.setAnimating(true);

    return app.exec();
}



