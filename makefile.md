makefiles are used to automate teh building of software projects by specifying the dependencies and compilation rules. here a comprehensive guide to wrinte Makefiles for c, c++ and CUDA projects. 

**basic concepts**
1. Target: the file to be generated (usually an executable or ojcet file)

2. Depenencies: Files required to build the target. 
3. Recipe: Commands to execute to build the target from dependencies. 
4. Variables: Used to avoid repetition and maek the makefile configurable 

5. Pattern Rules: Generic rules that apply to multiple files 

*basic systax*
```makefile 
target: dependencies 
  recipe 
```

