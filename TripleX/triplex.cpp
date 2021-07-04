#include <iostream> //Preprocessor Directive is an instruction to the compiler and Used to inclue a library
#include <string>
using namespace std;

void PrintIntroduction (){

        
    cout << "╭╮╭╮╭╮╱╱╭╮" << endl;
    cout << "┃┃┃┃┃┃╱╱┃┃" << endl;
    cout << "┃┃┃┃┃┣━━┫┃╭━━┳━━┳╮╭┳━━╮" << endl;
    cout << "┃╰╯╰╯┃┃━┫┃┃╭━┫╭╮┃╰╯┃┃━┫" << endl;
    cout << "╰╮╭╮╭┫┃━┫╰┫╰━┫╰╯┃┃┃┃┃━┫" << endl;
    cout << "╱╰╯╰╯╰━━┻━┻━━┻━━┻┻┻┻━━╯" << endl;
    cout << "" << endl;

}

void PlayGame (){ //void is used to give behavior of function to give no return value

    std::cout << "Jadi, lu disuruh sama guru lu untuk ngerjain soal\n";
    //You can also seperate these 2 line with std::endl; instead of \n
    std::cout << "Terus harus bener semua, gmn cara lu nyelesainnya?" << std::endl;            //This side is an expression statements. Expressions can be int, String, etc.
    std::cout << "=============================================================" << std::endl;

    int CodeA = 10;
    int CodeB = 20;         //This is Declaration statements. Variable must be declared before we expressing it.
    int CodeC = 30;


    std::cout << "- Sebenernya ada 3 angka." << std::endl;

    int CodeTotalTambah = CodeA + CodeB + CodeC;
    long int CodeTotalKali = CodeA * CodeB * CodeC;

    std::cout << "- Angkanya kalau ditambahakan akan jadi: " << CodeTotalTambah;
    std::cout << "\n- Angkanya kalo dikalikan jadi: " << CodeTotalKali;
    std::cout << "\n- Angka untuk dikalikan: " << std::endl;

    //Get input variable
    int PlayerGuessA, PlayerGuessB, PlayerGuessC;

    //Put input to variable
    std::cin >> PlayerGuessA; //std::cin used to giving an user input. and the input will be sent to the variale
    std::cin >> PlayerGuessB; //FYI: You don't have to press enter after guessing 1 number, just press space and compiler will ignore those spaces.
    std::cin >> PlayerGuessC; //If you type some string into integer variable, it will converted to 0

    //Alternative:
    //Alternative : std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;



    if (GuessSum == CodeTotalTambah && GuessProduct == CodeTotalKali) {
        std::cout << "Benar, 100 untukmu!"; 
    } else {
        std::cout << "Salah! 0 untukmu!";
    }


}


//main() is used as the entry point of the program
int main(){  // '()' said to pass arguments into the function
    
    PrintIntroduction();
    PlayGame(); //To make main() execute our function, just type the function name inside main() following by "()" and semicolon

    return 0; //0 = Program has run succesfully while any other signal or error
}
//If it's exited congrats, you have been successfuly creating C++ program

/*  
    And this is a
    multiline
    command
    You can just simply
    put 2 /* on some 2 line and boom! the middle one is going to be multiline command
    just click enter and you can type freely
*/