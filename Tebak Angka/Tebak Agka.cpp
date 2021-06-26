#include <iostream>

int main(){
    
    int startDifficulity = 2;
    int maxDifficulity = 10;

    while (startDifficulity <= maxDifficulity){
        StartGame(startDifficulity);
        std::cin.clear();    //Clears the Failbit
        std::cin.ignore();   //Discards the Buffer
        ++startDifficulity;
    }
    std::cout << "Game Finished... Congrats!"; //After starting proram on statement above, print this output
    return 0; //Exit with no Error code

}

void StartGame(int startDifficulity){
       
}