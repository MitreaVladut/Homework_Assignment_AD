# Homework_Assignment_AD
* Opening the executable located in `"Homework_Algorithm_Design\cmake-build-debug\Homework_Assignment_Alogithm_Design.exe"` by simply navigating to it in File Explorer or by using the Command Prompt.
* Compiling the code using `MinGW` compiler(or any other) which has to be installed locally(`https://www.mingw-w64.org/downloads/`);
  - After it is installed, you need to set a `System Variable Path` to the `"bin"` folder of MinGW.
  - To test whether the installation worked or not open Cmd and type `"gcc --version"`.
  - If it worked, navigate to the root folder("Homework_Algorithm_Design") and type `"gcc -o main.c lobsters.c datagenerator.c"`.
* Using CMake(`https://cmake.org/download/`)

`Note: If u want to see just a version of the code ( meaning the manual imput or randomly generated) you can put /* before the printf of the choices and */ after the scanf of the variable choices, than type choices = [number coresponding to you choice];`
`Note: For a better visualization, you can minimize the range of the randomly generated values in main.c at every rand().`
