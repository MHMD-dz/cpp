#include<iostream>
#include<string>
using namespace std ;

struct name{
    string first_name ;
    string second_name ;
    short age ;};

struct car{
    string car_brand ;
    string car_model ;
    int year ;};

struct finance{
    int monthly_salary ;
    int bank_accont_balance ;};
 
struct family{
    bool ismarreide ;
    bool have_children ;
    char gender ;};

struct living_place{
    string contry ;
    string city ;
    string addres ;
};

struct contacte{
    string phone_number ;
    string fax ;
    string email ;
};


struct citezen{
    name Name ;
    finance Finance ;
    family Family ;
    living_place home ;
    contacte Contacte ;

};
int main(){
    // lesson 27 
    car my_care ;
    cout << "Enter the name of your dream car brande :" << endl ;
    cin >> my_care.car_brand ;
    cout << "Enter the name of your dream car model :" << endl ;
    cin >> my_care.car_model ;
    cout << "Enter the year of ur car :" << endl ;
    cin >> my_care.year ;
    cout << " yor future car is  " << my_care.car_brand << " " << my_care.car_model << " " << my_care.year << " \"IN SHAA ALLAH\"" << endl ;

    // homework 
    // entering the info
    citezen mohamed ;
    cout << "Enter ur first than your secend name : " ;
    cin >> mohamed.Name.first_name >> mohamed.Name.second_name ;
    cout << "Enter ur age " ;
    cin >> mohamed.Name.age ;
    cout << "Enter your monthly salary : " ;
    cin >> mohamed.Finance.monthly_salary ;
    cout << "Enter your bance account balance : " ;
    cin >> mohamed.Finance.bank_accont_balance ;
    cout << "Enter your gender \" if male enter M and F for female \" : " ;
    cin >> mohamed.Family.gender ;
    cout << "are you marride \" if yes enter 1 otherwise enter 0 \" : " ;
    cin >> mohamed.Family.ismarreide ;
    cout << "do you have children \" if yes enter 1 otherwise enter 0 \" : " ;
    cin >> mohamed.Family.have_children;
    cout << "Enter the name of your contry : " ;
    cin >> mohamed.home.contry ;
    cout << "Enter the name of your city : " ;
    cin >> mohamed.home.city ;
    cout << "Enter yor addres : " ;
    cin >> mohamed.home.addres ;
    cout << "Enter your phone number : " ;
    cin >> mohamed.Contacte.phone_number ;
    cout << "Enter your fax : " ;
    cin >> mohamed.Contacte.fax ;
    cout << "Enter your email : " ;
    cin >> mohamed.Contacte.email ;

    // output
    cout << "*************************" << endl  ;
    cout << "Name : " << mohamed.Name.first_name << " " << mohamed.Name.second_name << endl ;
    cout << "Age : " << mohamed.Name.age << "years old " << endl ;
    cout << "Live in : " << mohamed.home.contry << " in city of : " << mohamed.home.city << " at the addres of : " << mohamed.home.addres << endl ;
    cout << "Monthly salary is : " << mohamed.Finance.monthly_salary << " and the yearly is " << 12 * mohamed.Finance.bank_accont_balance << endl ;
    cout << "Bank balanced : " << mohamed.Finance.bank_accont_balance << endl ;
    cout << "Email : " << mohamed.Contacte.email << " Fax : " << mohamed.Contacte.fax << " phone number " << mohamed.Contacte.phone_number << endl ;
      


}