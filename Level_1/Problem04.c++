#include<iostream>
#include<string>
using namespace std ;

enum licence { have_licence = 1 , dont_have_licence = 0 };
enum hired { is_haired = 1 , not_hired = 0 };

struct cv{
    int age ;
    licence licenc ;
};

cv reading_the_info ( cv person ){
    int temp ;
    cout << "Enter your age : ";
    cin >> person.age ;
    cout << "Do you have licence \" enter 1 for yes or 0 for no \" : " ;
    cin >> temp ;
    person.licenc = (licence) temp ;
    return person ;
}

hired chacking ( cv person ){
    if (person.age >= 21 && person.licenc == licence::have_licence ){
        return hired::is_haired;}
    else{
        return hired::not_hired;
    }}

void result ( hired result){
    if ( result == hired::is_haired){
        cout << "concratletion you are hired " << endl ;
    }
    else{
        cout << "better time next chance " << endl ;
    }
}

int main(){
    cv persone ;
    result(chacking(reading_the_info(persone)));
}