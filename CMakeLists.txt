cmake_minimum_required(VERSION 3.1)
project(cmake-qt5)

# Qt
set(CMAKE_AUTOMOC ON) # for moc
set(CMAKE_AUTORCC ON) # for .qrc files
set(CMAKE_AUTOUIC ON) # for .ui files
# Min version 5.7 for C++11 features in Qt Modules
find_package(Qt5 5.7 COMPONENTS Widgets REQUIRED)

set(SOURCE_FILES main.cpp
                 mainwindow.h
                 mainwindow.cpp
                 mainwindow.ui)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Widgets)
# Catch all to set C++14 requirement, can set individual features
target_compile_features(${CMAKE_PROJECT_NAME} PUBLIC cxx_std_14)
