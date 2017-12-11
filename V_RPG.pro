QT += core
QT -= gui
QT += testlib

CONFIG += c++11

TARGET = testqt #V_RPG
CONFIG += console
CONFIG -= app_bundle
CONFIG += object_parallel_to_source

TEMPLATE = app

SOURCES += \
    source/main.cpp \
    source/stat/stat.cpp \
    source/stat/hiddenstat.cpp \
    source/stat/ev.cpp \
    source/stat/iv.cpp \
    source/enumeration/image.cpp \
    source/enumeration/namedenum.cpp \
    source/enumeration/symboledenum.cpp \
    source/enumeration/valuedenum.cpp \
    source/enumeration/type.cpp \
    source/enumeration/nature.cpp \
    source/enumeration/gender.cpp \
    source/enumeration/category.cpp \
    source/enumeration/priority.cpp \
    source/enumeration/stat.cpp \
    source/enumeration/statstage.cpp \
    source/enumeration/hiddenstat.cpp \
    source/effect/abstracteffect.cpp \
    source/pokemon/abstractpokemon.cpp \
    source/pokemon/ability.cpp \
    source/pokemon/move.cpp \
    source/pokemon/battlepokemon.cpp \
    source/battlefield/battlefield.cpp \
    source/battlefield/weather.cpp \
    source/battlefield/terrain.cpp \
    source/battlefield/side.cpp \
    source/testqt.cpp \
    source/status/abstractstatus.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += SRCDIR=\\\"$$PWD/\\\"

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
    docs/UML/status.dia \
    data/pokemon/001.json \
    data/pokemon/002.json \
    data/pokemon/003.json \
    data/pokemon/004.json \
    data/pokemon/005.json \
    data/pokemon/006.json \
    data/pokemon/007.json \
    data/pokemon/008.json \
    data/pokemon/009.json \
    data/pokemon/010.json \
    data/pokemon/011.json \
    data/pokemon/012.json \
    data/pokemon/013.json \
    data/pokemon/014.json \
    data/pokemon/015.json \
    data/pokemon/016.json \
    data/pokemon/017.json \
    data/pokemon/018.json \
    data/pokemon/019.json \
    data/pokemon/020.json \
    data/pokemon/021.json \
    data/pokemon/022.json \
    data/pokemon/023.json \
    data/pokemon/024.json \
    data/pokemon/025.json \
    data/pokemon/026.json \
    data/pokemon/027.json \
    data/pokemon/028.json \
    data/pokemon/029.json \
    data/pokemon/030.json \
    data/pokemon/031.json \
    data/pokemon/032.json \
    data/pokemon/033.json \
    data/pokemon/034.json \
    data/pokemon/035.json \
    data/pokemon/036.json \
    data/pokemon/037.json \
    data/pokemon/038.json \
    data/pokemon/039.json \
    data/pokemon/040.json \
    data/pokemon/041.json \
    data/pokemon/042.json \
    data/pokemon/043.json \
    data/pokemon/044.json \
    data/pokemon/045.json \
    data/pokemon/046.json \
    data/pokemon/047.json \
    data/pokemon/048.json \
    data/pokemon/049.json \
    data/pokemon/050.json \
    data/pokemon/051.json \
    data/pokemon/052.json \
    data/pokemon/053.json \
    data/pokemon/054.json \
    data/pokemon/055.json \
    data/pokemon/056.json \
    data/pokemon/057.json \
    data/pokemon/058.json \
    data/pokemon/059.json \
    data/pokemon/060.json \
    data/pokemon/061.json \
    data/pokemon/062.json \
    data/pokemon/063.json \
    data/pokemon/064.json \
    data/pokemon/065.json \
    data/pokemon/066.json \
    data/pokemon/067.json \
    data/pokemon/068.json \
    data/pokemon/069.json \
    data/pokemon/070.json \
    data/pokemon/071.json \
    data/pokemon/072.json \
    data/pokemon/073.json \
    data/pokemon/074.json \
    data/pokemon/075.json \
    data/pokemon/076.json \
    data/pokemon/077.json \
    data/pokemon/078.json \
    data/pokemon/079.json \
    data/pokemon/080.json \
    data/pokemon/081.json \
    data/pokemon/082.json \
    data/pokemon/083.json \
    data/pokemon/084.json \
    data/pokemon/085.json \
    data/pokemon/086.json \
    data/pokemon/087.json \
    data/pokemon/088.json \
    data/pokemon/089.json \
    data/pokemon/090.json \
    data/pokemon/091.json \
    data/pokemon/092.json \
    data/pokemon/093.json \
    data/pokemon/094.json \
    data/pokemon/095.json \
    data/pokemon/096.json \
    data/pokemon/097.json \
    data/pokemon/098.json \
    data/pokemon/099.json \
    data/pokemon/100.json \
    data/pokemon/101.json \
    data/pokemon/102.json \
    data/pokemon/103.json \
    data/pokemon/104.json \
    data/pokemon/105.json \
    data/pokemon/106.json \
    data/pokemon/107.json \
    data/pokemon/108.json \
    data/pokemon/109.json \
    data/pokemon/110.json \
    data/pokemon/111.json \
    data/pokemon/112.json \
    data/pokemon/113.json \
    data/pokemon/114.json \
    data/pokemon/115.json \
    data/pokemon/116.json \
    data/pokemon/117.json \
    data/pokemon/118.json \
    data/pokemon/119.json \
    data/pokemon/120.json \
    data/pokemon/121.json \
    data/pokemon/122.json \
    data/pokemon/123.json \
    data/pokemon/124.json \
    data/pokemon/125.json \
    data/pokemon/126.json \
    data/pokemon/127.json \
    data/pokemon/128.json \
    data/pokemon/129.json \
    data/pokemon/130.json \
    data/pokemon/131.json \
    data/pokemon/132.json \
    data/pokemon/133.json \
    data/pokemon/134.json \
    data/pokemon/135.json \
    data/pokemon/136.json \
    data/pokemon/137.json \
    data/pokemon/138.json \
    data/pokemon/139.json \
    data/pokemon/140.json \
    data/pokemon/141.json \
    data/pokemon/142.json \
    data/pokemon/143.json \
    data/pokemon/144.json \
    data/pokemon/145.json \
    data/pokemon/146.json \
    data/pokemon/147.json \
    data/pokemon/148.json \
    data/pokemon/149.json \
    data/pokemon/150.json \
    data/pokemon/151.json \
    data/pokemon/dlFiles/jquery-3.2.1.js \
    data/pokemon/dlFiles/dlPokemonJson.html \
    data/move/list_needed_moves.xlsx \
    data/move/dlFiles/jquery-3.2.1.js \
    data/move/dlFiles/dlPokemonJson.html \
    data/ability/list_ability.xlsx \
    data/ability/list_needed_moves.xlsx \
    data/move/list_needed_abilities.xlsx

HEADERS += \
    source/stat/stat.h \
    source/enumeration/category.h \
    source/enumeration/gender.h \
    source/enumeration/hiddenstat.h \
    source/enumeration/image.h \
    source/enumeration/namedenum.h \
    source/enumeration/nature.h \
    source/enumeration/priority.h \
    source/enumeration/stat.h \
    source/enumeration/statstage.h \
    source/enumeration/symboledenum.h \
    source/enumeration/type.h \
    source/enumeration/valuedenum.h \
    source/effect/abstracteffect.h \
    source/effect/pokemon/ability.h \
    source/effect/pokemon/item.h \
    source/effect/pokemon/weight.h \
    source/effect/pokemon/move.h \
    source/effect/pokemon/type.h \
    source/effect/pokemon/stat.h \
    source/effect/pokemon/abstracteffectonpkm.h \
    source/effect/battlefield/abstracteffectonbattlefield.h \
    source/effect/battlefield/side.h \
    source/effect/battlefield/terrain.h \
    source/effect/battlefield/weather.h \
    source/pokemon/abstractpokemon.h \
    source/pokemon/ability.h \
    source/pokemon/move.h \
    source/pokemon/battlepokemon.h \
    source/battlefield/battlefield.h \
    source/battlefield/weather.h \
    source/battlefield/terrain.h \
    source/battlefield/side.h \
    source/stat/hiddenstat.h \
    source/stat/ev.h \
    source/stat/iv.h \
    source/status/abstractstatus.h
