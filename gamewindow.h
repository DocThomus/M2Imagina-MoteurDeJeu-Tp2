#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "openglwindow.h"
#include "camera.h"

struct point
{
    float x, y ,z;
};



class GameWindow : public OpenGLWindow
{
public:
    GameWindow(int fps);

    void initialize();
    void render();
    bool event(QEvent *event);

    void keyPressEvent(QKeyEvent *event);

    void displayTriangles();
    void displayLines();
    void displayTrianglesC();
    void displayPoints();
    void displayTrianglesTexture();

    void displayColor(float);

    void loadMap(QString localPath);

    void setCamera(Camera *c);

private:

    int m_frame;
    QImage m_image;
    point *p;

    int carte = 1;
    int etat = 0;

    Camera *camera;

    int fps = 60;
    QTimer *timer;

    bool autorotate = false;
};


#endif // GAMEWINDOW_H
