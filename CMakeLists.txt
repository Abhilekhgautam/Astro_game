cmake_minimum_required(VERSION 3.21)
project(Astro_game)

set(CMAKE_CXX_STANDARD 14)
set(wxWidgets_ROOT_DIR </usr/include/wx-3.1.5>)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})
set(SOURCE_FILES src/myapp.cpp src/optionframe.cpp headers/settingDialog.h src/settingdialog.cpp)

add_executable(FirstC ${SOURCE_FILES})
target_link_libraries(FirstC ${wxWidgets_LIBRARIES})

