#include <iostream> //Preprocessor Directive is an instruction to the compiler and Used to inclue a library

//main() is used as the entry point of the program
int main(){  // '()' said to pass arguments into the function
    std::cout << "Jadi, lu disuruh sama guru lu untuk ngerjain soal\n";
    //You can also seperate these 2 line with std::endl; instead of \n
    std::cout << "Terus harus bener semua, gmn cara lu ngebenerin nya?";            //This side is an expression statements. Expressions can be int, String, etc.
    std::cout << std::endl;

    int a = 10;
    int b = 20;         //This is Declaration statements. Variable must be declared before we expressing it.
    int c = 30;

    int total = a + b + c;

    std::cout << total ;
    return 0; //0 = Program has run succesfully while any other signal or error
}
//If it's exited congrats, you have been successful creating C++ program