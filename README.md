# Code-Generation
CS152 Project Phase 3
 > Authors: \< [Angela Su](https://github.com/Angela-Su) and [Westin Montano](https://github.com/westinm01)\>
>In the previous phases of the class project, we used the flex and bison tools to create a lexical analyzer and a parser for the "MINI-L" programming language. In this phase of the class project, we will take a syntactically-correct MINI-L program (a program that can be parsed without any syntax errors), verify that it has no semantic errors, and then generate its corresponding intermediate code. The generated code can then be executed to run the compiled MINI-L program.
>We should perform one-pass code generation and directly output the generated code. There is no need to build/traverse a syntax tree. However, we will need to maintain a symbol table during code generation.

>The intermediate code we will generate is called "MIL" code. 
>The output of our code generator will be a file containing the generated MIL code. If any semantic errors are encountered by the code generator, then appropriate error messages should be emitted and no other output should be produced.
