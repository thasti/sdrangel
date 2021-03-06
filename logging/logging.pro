#--------------------------------------------------------
#
# Pro file for Android and Windows builds with Qt Creator
#
#--------------------------------------------------------

QT += core

TEMPLATE = lib
TARGET = logging

INCLUDEPATH += $$PWD
INCLUDEPATH += ../exports

QMAKE_CXXFLAGS += -std=c++11

macx {
    QMAKE_LFLAGS_SONAME = -Wl,-install_name,@rpath/
}

CONFIG(MSVC):DEFINES += logging_EXPORTS

CONFIG(Release):build_subdir = release
CONFIG(Debug):build_subdir = debug

# Enable very detailed debug messages when compiling the debug version
CONFIG(debug, debug|release) {
    DEFINES += SUPERVERBOSE
}

HEADERS += $$PWD/logglobal.h \
           $$PWD/logmessage.h \
           $$PWD/logger.h \
           $$PWD/filelogger.h \
           $$PWD/dualfilelogger.h \
           $$PWD/loggerwithfile.h

SOURCES += $$PWD/logmessage.cpp \
           $$PWD/logger.cpp \
           $$PWD/filelogger.cpp \
           $$PWD/dualfilelogger.cpp \
           $$PWD/loggerwithfile.cpp
           
