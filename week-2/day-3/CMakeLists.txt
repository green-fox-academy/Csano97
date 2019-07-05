cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH C:/SDL2_windows)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(EXECUTABLES "MiddleLines;ColoredBox;Diagonals;GoToCenter;HorizontalLine;CenteredSquare;FourRect;PositionSquare;CenteredBox;RainbowBox;PurpleSteps;Purples3d;ConnectTheDots;ProjectPyramid")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)