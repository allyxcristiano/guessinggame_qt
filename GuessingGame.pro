QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG -= app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    model\node.cpp \
    model\trait.cpp \
    model\animal.cpp \
    service/guessinggameservice.cpp \
    view/questionanimal.cpp \
    view/questionanimaltrait.cpp \
    implementation/guessinggamemessagesimplementation.cpp \

HEADERS += \
    model\node.h \
    model\trait.h \
    model\animal.h \
    service/guessinggameservice.h \
    view/questionanimal.h \
    view/questionanimaltrait.h \
    abstract/guessinggamemessagesabstract.h \
    implementation/guessinggamemessagesimplementation.h \

FORMS += \
    view/questionanimal.ui \
    view/questionanimaltrait.ui
