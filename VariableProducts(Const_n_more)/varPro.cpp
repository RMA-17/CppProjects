#include <iostream>

int main(){

    int Product_A = 50;
    int Product_B = 60000;
    const int Product_C = 70; //If you declare with 'const' on some variable, it won't change unless the initialized one

    Product_A = 30; //Variable can be changed during the runtime


    long int sum = Product_A * Product_B;
    
    Product_A = 50; //If you change the value of variable under the sum variable. The sum variable will no affected. Because code is always started to read from above


    std::cout << "Hasilnya adalah: " << sum << std::endl;
}