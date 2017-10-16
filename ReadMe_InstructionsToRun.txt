TA Instructions
================================================================================
Unless you have your own way to run the c++ version,
unfortunetly with the way we have it set up if you wish to run it the same way 
as we did you will need to do some setup.

OPTIONS TO RUN
################################################################################

#V1:
(If you dont want to compile running this is easy!)
(However if you want to compile there is some setup)
(C++ version) HOWTO build & run (outside of cloud9):
================================================================================
Navigate to: Submission3/c++_build/
----------------------------------
If you just want to run it type :
./run" or "./run -f inputfile.txt"
----------------------------------

To compile:
delete everything in it.
run: "cmake .."
run: "make" 
NOTE: This may take awhile since you are building the libraries. Also you may 
      get an error after this last step but if this will only happen if this is 
      your first time running it.
run: "cmake .;make"
NOTE: This last step should compile it and generate your executable "antlr_test"
Then
"./run" or "./run -f inputfile.txt"

================================================================================

#V2:
(GOOD but have to go to cloud9 to test)
(C++ version) Link to a set up cloud9 where everything is set up to be run:
================================================================================
* https://ide.c9.io/bsh8y/csce_315
  - Navigate to: "csce_315/Project 3/Parser/c++_build"
  - run: "cmake .;make"
  - "./run" or "./run -f inputfile.txt"
================================================================================

#V3:
(FASTEST if you want to compile but run is slightly broken run)
(C++ easy run) 
================================================================================
This is a slightly broken version I wrote to to make it easier for the TA
to test our code. However the problem with this is that I kind of use a cheat
to access all of the libaray files we use in the normal compilation and run of
it. The problem is:
1. I havent tested this version extensively. So not sure what acutally works.
   - but it seems to work.
2. It always segfaults on "EXIT;" which doesnt happen in our normal version.
   - probably due to how i accesed everything or i forgot something.

How to run: 
Navigate to: ~/db_easy_run/
Run: "cmake .;make"
"./run" or "./run -f inputfile.txt"
===================================================================================

Manually running it : Doesnt work
g++ -std=c++11 -I ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/include/antlr4-runtime -I ~/workspace/Project\ 3/Parser/c++_build/antlr4cpp_generated_src/antlrcpptest ~/workspace/Project\ 3/Parser/c++_src/*.cpp ~/workspace/Project\ 3/Parser/c++_build/antlr4cpp_generated_src/antlrcpptest/*.cpp ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/src/antlr4cpp-build/runtime/CMakeFiles/antlr4_shared.dir/src/*.o  ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/libantlr4-runtime.so.4.7 -L ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/ -lantlr4-runtime -o test -Wl,-rpath ~/workspace/Project\ 3/Parser/c++_build/locals/antlr4cpp/lib/

