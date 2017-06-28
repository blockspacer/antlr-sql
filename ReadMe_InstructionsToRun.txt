Unless you have your own way to run the c++ version,
unfortunetly with the way we have it set up if you wish to run it the same way 
as we did you will need to do some setup.

(JAVA version)
NOTE: We have a java version for ease of testing although our project will be in
      c++. We have c++ verson too, its just harder to get it running.

(C++ version) Link to a set up cloud9 where everything is set up to be run:
--------------------------------------------------------------------------------
* https://ide.c9.io/bsh8y/csce_315-cloned
  - Navigate to: "csce_315-cloned/Parser/c++_build"
  - run: "cmake .;make"
  - "./test_antlr"
--------------------------------------------------------------------------------

(C++ version) HOWTO build & run (outside of cloud9):
================================================================================
Navigate to: /c++_src/c++_build
run: "cmake .."
run: "make" 
NOTE: This may take awhile since you are building the libraries. Also you may 
      get an error after this last step but if this will only happen if this is 
      your first time running it.
run: "cmake .;make"
NOTE: This last step should compile it and generate your executable "antlr_test"

./antlr_test

================================================================================


If you just want to look at our files:
--------------------------------------------------------------------------------
* dml.g4 is our grammar at "/c++_src/dml.g4"
* main.cpp is at "/c++_src/main.cpp"
* A copy of our generated files is at "/c++_generated/"
  - This is just a copy of the files used. Not when linking.
--------------------------------------------------------------------------------  
  
JAVA VERION (For ease of testing)
================================================================================
* A java version is available for ease of use under "/Java_verion"
  - Just run javac Main.java, java Main
================================================================================
 