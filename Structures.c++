#include<iostream>
#include<string>

using namespace std ;


struct car{
    string car_brand ;
    string car_model ;
    int year ;
};

int main(){
    car my_care ;
    cout << "Enter the name of your dream car brande :" << endl ;
    cin >> my_care.car_brand ;
    cout << "Enter the name of your dream car model :" << endl ;
    cin >> my_care.car_model ;
    cout << "Enter the year of ur car :" << endl ;
    cin >> my_care.year ;

    cout << " yor future car is  " << my_care.car_brand << " " << my_care.car_model << " " << my_care.year << " \"IN SHAA ALLAH\"" ;

}