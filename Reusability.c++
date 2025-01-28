#include<iostream>
#include<string>
using namespace std ;

struct person_info {
    string first_name ;
    string last_name ;
    int age ;
    string phone_number ;
};

struct homwork_p {
    string first_name ;
    string last_name ;
    string city ;
    string contry ;
    int age ;
    int salary ;
    char gender ;
    bool married ;
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

void read_info_homeworh ( homwork_p &me ){
    cout << "Enter the first name : " ;
    cin >> me.first_name ;
    cout << "Enter the last name : " ;
    cin >> me.last_name ;
    cout << "Enter the age : " ;
    cin >> me.age ;
    cout << "Enter your city name : " ;
    cin >> me.city ;
    cout << "Enter your contry name : " ;
    cin >> me.contry ;
    cout << "Enter your monthly salary : " ;
    cin >> me.salary ;
    cout << "Enter your gender \" if male enter M and F for female \" : " ;
    cin >> me.gender ;
    cout << "are you married \" enter 1 for yes and 0 for no \" : " ;
    cin >> me.married ;
    cout << endl << endl ;
}

void wright_info( person_info &wrigthing ){
    cout << endl << endl ;
    cout << "The first name is : " << wrigthing.first_name << endl ;
    cout << "The last name is : " << wrigthing.last_name << endl ;
    cout << "The age is : " << wrigthing.age << endl ;
    cout << "The phone number is : " << wrigthing.phone_number << endl ;
    cout << endl << endl ;
}

void wright_info_homework( homwork_p &me ){
    cout << "*************************" << endl ;
    cout << " full name : " << me.first_name << "  " << me.last_name << endl ;
    cout << " age : " << me.age << " years old " << endl ;
    cout << " contry : " << me.contry << endl ;
    cout << " city : " << me.city << endl ;
    cout << " monthly salary : " << me.salary << endl ;
    cout << " yearly salary : " << me.salary * 12 << endl ;
    cout << " gender : " << me.gender << endl ;
    cout << " married : " << me.married << endl ;
    cout << "*************************" << endl ; 
}

int main(){

    person_info mohamed ;
    read_info ( mohamed ) ;
    wright_info ( mohamed ) ;

    // homework part 
    homwork_p me ;
    read_info_homeworh(me) ;
    wright_info_homework(me) ;

}