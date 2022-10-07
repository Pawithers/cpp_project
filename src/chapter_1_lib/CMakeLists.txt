list(APPEND COMP_SOURCES chap_1_functions.cpp)
list(APPEND COMP_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR})

# prepend the current path to all object files
list(TRANSFORM COMP_SOURCES PREPEND ${CMAKE_CURRENT_SOURCE_DIR}/)

# add variables to parent scope
set(COMP_INCLUDE_DIRS ${COMP_INCLUDE_DIRS} PARENT_SCOPE)
set(COMP_SOURCES ${COMP_SOURCES} PARENT_SCOPE)