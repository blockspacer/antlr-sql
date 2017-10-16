#cmake file i wrote so this could be run anywhere
#still have to do regular cmake setup at least once for this version to work.
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

SET (CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/include/antlr4-runtime
                    ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/antlr4cpp_generated_src/antlrcpptest
)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/lib/)
file(GLOB SOURCES 
#set(SOURCES
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_src/*.cpp 
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/antlr4cpp_generated_src/antlrcpptest/*.cpp
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/*.o
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/atn/*.o
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/dfa/*.o
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/misc/*.o
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/support/*.o
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/tree/*.o
     #${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/lib/libantlr4-runtime.so.4.7
     #${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/include/antlr4-runtime
     ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/antlr4cpp_generated_src/antlrcpptest
)

add_executable(run ${SOURCES} )
target_link_libraries(run antlr4-runtime)


# What this cmake file basically does
#g++ -std=c++11 -I ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/include/antlr4-runtime 
#               -I ~/workspace/Project\ 3/Parser/c++_build/antlr4cpp_generated_src/antlrcpptest 
#               
#               ~/workspace/Project\ 3/Parser/c++_src/*.cpp 
#               ~/workspace/Project\ 3/Parser/c++_build/antlr4cpp_generated_src/antlrcpptest/*.cpp 
#               ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/*.o //Oops  
#               ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/libantlr4-runtime.so.4.7 
#               
#               -L ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/ 
#               -lantlr4-runtime -o test 
#               -Wl,-rpath ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/
#############################Older stuff##################################################################
#set(CMAKE_INSTALL_RPATH ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/lib/)
#${CMAKE_CURRENT_SOURCE_DIR}
#set(CMAKE_INSTALL_RPATH ${CMAKE_CURRENT_SOURCE_DIR}/c++_build/locals/antlr4cpp/lib/)
#SET(GCC_COVERAGE_LINK_FLAGS "-Wl -rpath")