#include <iostream>
int add_func(int number1, int number2){
    int result = number1 + number2;
    return result;
}

int subtract_func(int number1, int number2){
    int result = number1 - number2;
    return result;
}

int multiply_func(int number1, int number2){
    int result = number1 * number2;
    return result;
}

int devide_func(int number1, int number2){
    double result{0};
    if(number2 == 0){
        std::cerr << "ZeroDivision Error" << std::endl;
    }else{
         result = number1 / number2;
        
    }
return result;
}


int main(){
    int number1{0};
    int number2{0};
    std:: cout << "Enter numbers please:" << std::endl;
    std::cin >> number1 >> number2;

    std::cout << "Result for add: " << add_func(number1, number2) << std:: endl;
    std:: cout << "Result for subtract: " << subtract_func(number1,number2) << std::endl;
    std:: cout <<  "Result for multiply: " << multiply_func(number1, number2) << std:: endl;
    std:: cout << "Result for devide: " << devide_func(number1, number2) << std:: endl;

    return 0;
}