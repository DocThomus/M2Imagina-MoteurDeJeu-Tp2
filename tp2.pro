INCLUDEPATH += $$PWD
SOURCES += $$PWD/openglwindow.cpp \
    gamewindow.cpp \
    camera.cpp
HEADERS += $$PWD/openglwindow.h \
    gamewindow.h \
    camera.h

SOURCES += \
    main.cpp

target.path = .
INSTALLS += target

RESOURCES += \
    gestionnaire.qrc

QT += core gui opengl widgets

LIBS += -lopengl32

