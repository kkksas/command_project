TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Order.cpp \
    Owner.cpp \
    Salesman.cpp \
    User.cpp \
    Program.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Order.h \
    Owner.h \
    Salesman.h \
    User.h \
    Program.h \
    Flower.h

