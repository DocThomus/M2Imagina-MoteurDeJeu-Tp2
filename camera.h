#ifndef CAMERA_H
#define CAMERA_H

#include <QtGui/QOpenGLFunctions>

class Camera {
public:
    Camera();
    updateCamera();
    zoom(float z);
    rotateX(float a);
    rotateY(float a);

private:
    float rotX = -45.0;
    float rotY = -45.0;
    float ss = 1.0f;


};

#endif // CAMERA_H
