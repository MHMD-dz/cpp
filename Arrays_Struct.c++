#include<iostream>
#include<string>
using namespace std ;

struct person_info{
    string first_name ;
    string last_name ;
    int age ;
    string phone ;
};

void read_info( person_info arry[] , int n ){
    cout << "Enter the first name : " ;
    cin >> arry[n].first_name ;
    cout << "Enter the last name : " ;
    cin >> arry[n].last_name ;
    cout << "Enter the age : " ;
    cin >> arry[n].age ;
    cout << "Enter the phone number : " ;
    cin >> arry[n].phone ;
}

void wright_info( person_info arry[] , int n ){
    cout << "************************" << endl ;
    cout << "The first name is : " << arry[n].first_name << endl ;
    cout << "The last name is : " << arry[n].last_name << endl ;
    cout << "The age is : " << arry[n].age << " year old" << endl ;
    cout << "The phone number is : " << arry[n].phone << endl ;
    cout << "************************" << endl ;
}

int main(){
    person_info arr[5] ;
    read_info( arr , 0) ;
    read_info( arr , 1) ;
    wright_info ( arr , 0 ) ;
    wright_info ( arr , 1 ) ; 

}