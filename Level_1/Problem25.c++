#include<iostream>
#include<string>
using namespace std ;

int read_age (){
    int age ;
    cout << "Enter an age : " << endl ;
    cin >> age ;
    return age ;
}

bool chaking_age( int age , int from , int to ){
    if (age <= 45 && age >= 18 )
    return true ;
    else return false ;
}

int read_until_age_between( int from , int to ){
    int age ;
do
{
    age = read_age();
} while (!chaking_age ( age , from , to));
return age ;
}

void write_age( int age) {
    cout << "The age " << age << " is correct" ;
}


int main(){
    write_age(read_until_age_between(18,45));

}