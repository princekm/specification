TEMPLATE = app
CONFIG +=  c++11
CONFIG -= app_bundle
CONFIG -= qt console


SOURCES += \
        andspecification.cpp \
        colorspecification.cpp \
        main.cpp \
        product.cpp \
        productfilter.cpp \
        weightspecification.cpp

HEADERS += \
    andspecification.h \
    andspecification_inl.h \
    colorspecification.h \
    filter.h \
    product.h \
    productfilter.h \
    specification.h \
    weightspecification.h
