

set(command "/usr/local/bin/cmake;-Dmake=${make};-Dconfig=${config};-P;/home/ubuntu/workspace/Project 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download--impl.cmake")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/ubuntu/workspace/Project 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-out.log"
  ERROR_FILE "/home/ubuntu/workspace/Project 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/ubuntu/workspace/Project 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "antlr4cpp download command succeeded.  See also /home/ubuntu/workspace/Project 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-stamp/antlr4cpp-download-*.log")
  message(STATUS "${msg}")
endif()
