cmake_minimum_required(VERSION 3.20)
project(PaperFold VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# ------------------------------------------------------------------------
# 📍 FIX: Yahan apna exact Qt MSVC installation path dein!
# (Apne system ke folder name ke hisaab se version number e.g. 6.7.2 / 6.8.0 badal lein)
# ------------------------------------------------------------------------
set(CMAKE_PREFIX_PATH "C:/Qt/6.8.0/msvc2022_64") 

# Agar aapne kisi alag drive mein install kiya hai (jaise D: ya F: drive):
# set(CMAKE_PREFIX_PATH "D:/Qt/6.8.0/msvc2022_64")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets OpenGLWidgets OpenGL)

file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.hpp")

add_executable(PaperFold ${SOURCES} ${HEADERS})

target_include_directories(PaperFold PRIVATE include)

target_link_libraries(PaperFold PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::OpenGLWidgets
    Qt6::OpenGL
)