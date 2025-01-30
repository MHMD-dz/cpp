#include<iostream>
#include<string>

int main(){

    // HOMEWORK

    // PART 1 

    // variables 
    int age , monthly_salary , yearly_salary ;
    std::string name , city , contry ;
    bool married ;
    char gender ;

    // input
    std::cout << " Enter your name " << std::endl ;
    std::cin >> name ;
    std::cout << " Enter your age " << std::endl ;
    std::cin >> age ;
    std::cout << " Enter your monthly salary " << std::endl ;
    std::cin >> monthly_salary ;
    std::cout << " Enter the city you live in  " << std::endl ;
    std::cin >> city ;
    std::cout << " Enter the contry you live in " << std::endl ;
    std::cin >> contry ;
    std::cout << " Enter your gender \" if ur male enter M or F for femmale \" " << std::endl ;
    std::cin >> gender ;
    std::cout << " Are you married \" if yes enter 1 and 0 for no \n" << std::endl ;
    std::cin >> married ;

    // output
    std::cout << "************************" << std::endl ;
    std::cout << "\tName : " << name << std::endl ;
    std::cout << "\tAge : " << age << std::endl ;
    std::cout << "\tCity : " << city << std::endl ;
    std::cout << "\tCountry : " << contry << std::endl ;
    std::cout << "\tMonthly salary : " << monthly_salary << " DA " << std::endl ;
    std::cout << "\tYearly salary : " << monthly_salary * 12 << " DA " << std::endl ;
    std::cout << "\tGender : " << gender << std::endl ;
    std::cout << "\tMarried : " << married << std::endl ;
    std::cout << "************************" << std::endl ;

    // PART 2

    //variables
    int number1 , number2 , number3 , some ;

    // input 
    std::cout <<  " Enter the first number : " ;
    std::cin >> number1 ;
    std::cout <<  " Enter the seconde number : " ;
    std::cin >> number2 ;
    std::cout <<  " Enter the therd number : " ;
    std::cin >> number3 ;

    //calcule
    some = number1 + number2 + number3 ;

    // output
    std::cout << "\t" << number1 << std::endl ;
    std::cout << "  +" << std::endl ;
    std::cout << "\t" << number2 << std::endl ;
    std::cout << "  +" << std::endl ;
    std::cout << "\t" << number3 << std::endl ;
    std::cout << "_______________" << std::endl ;
    std::cout <<  "\t" << some ;



}