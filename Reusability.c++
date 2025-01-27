#include<iostream>
#include<string>
using namespace std ;

struct person_info {
    string first_name ;
    string last_name ;
    int age ;
    string phone_number ;
};

void read_info ( person_info &reading ) {
    cout << "Enter the first name : " ;
    cin >> reading.first_name ;
    cout << "Enter the last name : " ;
    cin >> reading.last_name ;
    cout << "Enter the age : " ;
    cin >> reading.age ;
    cout << "Enter the phone number : " ;
    cin >> reading.phone_number ;
}

void wright_info( person_info &wrigthing ){
    cout << endl << endl ;
    cout << "The first name is : " << wrigthing.first_name << endl ;
    cout << "The last name is : " << wrigthing.last_name << endl ;
    cout << "The age is : " << wrigthing.age << endl ;
    cout << "The phone number is : " << wrigthing.phone_number << endl ;
}


int main(){

    person_info mohamed ;
    read_info ( mohamed ) ;
    wright_info ( mohamed ) ;
    
}