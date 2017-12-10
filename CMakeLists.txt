cmake_minimum_required(VERSION 3.1)
project(cmake-qt5 CXX)

set(CMAKE_CXX_STANDARD 14)

# Qt
set(CMAKE_AUTOMOC ON) # for moc
set(CMAKE_AUTORCC ON) # for .qrc files
set(CMAKE_AUTOUIC ON) # for .ui files
find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(SOURCE_FILES main.cpp
                 mainwindow.h
                 mainwindow.cpp
                 mainwindow.ui)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets)
