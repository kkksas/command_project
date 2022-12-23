TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11
SOURCES += main.cpp \
    Order.cpp \
    Owner.cpp \
    Salesman.cpp \
    User.cpp \
    Program.cpp \
    Order_list.cpp \
    Salesman_list.cpp \
    Storage.cpp \
    Flower.cpp \
    Summary.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Order.h \
    Owner.h \
    Salesman.h \
    User.h \
    Program.h \
    Flower.h \
    Order_list.h \
    Salesman_list.h \
    Storage.h \
    Summary.h

