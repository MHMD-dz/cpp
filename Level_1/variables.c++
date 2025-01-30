#include<iostream>
#include<string>

int main(){

    // HOMEWORK 2

    // PART 1

    // declearing the variable
    int age , mo_salary , year_salary ;
    std::string my_name , my_contry , my_city ;
    char my_gender ;
    bool married ;

    // filling the variable
    age = 21 ;
    mo_salary = 2000 ;
    year_salary = mo_salary * 12 ;
    my_name = " MOHAMED " ;
    my_city = " ORAN " ;
    my_contry = " ALGERIA " ;
    my_gender = 'M' ;
    married = false ;

    // printing the result 
    std::cout << "*******************************" << std::endl ;
    std::cout << " name  : " << my_name << std::endl ;
    std::cout << " age  : " << age << std::endl ;
    std::cout << " city  : " << my_city << std::endl ;
    std::cout << " contry  : " << my_contry << std::endl ;
    std::cout << " monthly salary : " << mo_salary << std::endl ;
    std::cout << " yearly salary : " << year_salary << std::endl ;
    std::cout << " gender : " << my_gender << std::endl ;
    std::cout << " married : " << married << std::endl ;
    std::cout << "*******************************" << std::endl;


    // PART 2

    // declearing the variable and filling theme
    int n1 , n2 , n3 , some ;
    n1 = 20 ;
    n2 = 30 ;
    n3 = 10 ;
    some = n1 + n2 + n3 ;

    // printing 

    std::cout << "    " << n1 << std::endl ;
    std::cout << " +" << std::endl ;
    std::cout << "    " << n2 << std::endl ;
    std::cout << " +" << std::endl ;
    std::cout << "    " << n3 << std::endl ;
    std::cout << "______________"<< std::endl ;
    std::cout << " Totale = " << some << std::endl ;

}