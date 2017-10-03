QT += core
QT -= gui

CONFIG += c++11

TARGET = V_RPG
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    source/main.cpp \
    source/enum/namedenum.cpp \
    source/enum/symboledenum.cpp \
    source/enum/image.cpp \
    source/enum/valuedenum.cpp \
    source/enum/gender.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DISTFILES += \
    README.md \
    docs/Stats.docx \
    docs/determination_of_stat.PNG \
    docs/move_priority.PNG \
    docs/nature_list.PNG \
    docs/type_chart.PNG \
    docs/Effect/weather_effect.xlsx \
    docs/Effect/status_effect.docx \
    docs/Effect/terrain_effect.docx \
    docs/Effect/volatile_status_effect.docx \
    docs/Effect/volatile_terrain_effect.docx \
    docs/Effect/weather_effect.docx \
    docs/UML/battlefield.dia \
    docs/UML/effect.dia \
    docs/UML/enum.dia \
    docs/UML/item.dia \
    docs/UML/pkm.dia \
    docs/UML/pkm_bot_uml.dia \
    docs/UML/stat.dia \
    docs/UML/status.dia

HEADERS += \
    source/enum/namedenum.h \
    source/enum/symboledenum.h \
    source/enum/image.h \
    source/enum/valuedenum.h \
    source/enum/gender.h
