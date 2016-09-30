#include "camera.h"

Camera::Camera(){

}

Camera::updateCamera() {
    glScalef(ss,ss,ss);
    glRotatef(rotX,1.0f,0.0f,0.0f);
    glRotatef(rotY,0.0f,0.0f,1.0f);
}

Camera::zoom(float z) {
    ss += z;
}

Camera::rotateX(float a) {
    rotX += a;
}

Camera::rotateY(float a) {
    rotY += a;
}

