#include <iostream>
#include <string>


int main () {
//Task1
/*
std::string res = "Hello World!";
std:: cout << res << std::endl;
*/
//Task1_end

//Task2
/*
int integer_number = 21;
float float_number = 3.14F;
double double_number = 5.788797897979878;
char char_variable = 'W';
bool boolean_variable = true;
auto auto_variable = 12.34F;
*/
//Task2_end

//Task3
/*
//part1
int some_number{0};
std::cout << "Please type value for number : " << std ::endl;
std::cin >> some_number;

if(some_number > 0){
    std::cout << "Your typed number positive" << std:: endl;
}else if (some_number  < 0 )
{
    std::cout << "Your  typed number negative" << std:: endl;
}else{
    std::cout << "Typed number equal to zero" << std:: endl;
}




//part2
std:: cout << "The numbers from 1 to 34" << std:: endl;
for(int i = 1; i<= 34; ++i ){
std:: cout << i << " " << std::endl;
}

//part3
int grade{0};
std::cout << "Enter your number:" << std:: endl;
std:: cin >> grade;
char letter_base_in_grade;
if(grade > 0 && grade <= 100){
    switch (grade / 10)
    {
    case 10:
    case 9:
        letter_base_in_grade = 'A';
        break;
    case 8:
        letter_base_in_grade = 'B';
        break;
    case 7:
        letter_base_in_grade = 'C';
        break;
    case 6:
        letter_base_in_grade = 'D';
        break;
    case 5:
        letter_base_in_grade = 'E';
        break;

    }
    std::cout << "Your letter grade is " << letter_base_in_grade  << std::endl;
}else{
    std:: cout << "type a correct NUMBER";
}
//Task3_end
*/

//Task4


return 0;
}