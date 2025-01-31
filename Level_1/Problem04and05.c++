#include<iostream>
#include<string>
using namespace std ;

enum licence { have_licence = 1 , dont_have_licence = 0 };
enum hired { is_haired = 1 , not_hired = 0 };

struct cv{
    int age ;
    licence licenc ;
    bool have_recommendation ;
};

cv reading_the_info ( cv person ){
    int temp ;
    cout << "Enter your age : ";
    cin >> person.age ;
    cout << "Do you have licence \" enter 1 for yes or 0 for no \" : " ;
    cin >> temp ;
    cout << "Do you have recommendation \" enter 1 for yes or 0 for no \" : " ;
    cin >> person.have_recommendation ;
    person.licenc = (licence) temp ;
    return person ;
}

hired chacking ( cv person ){
    if (person.age >= 21 && person.licenc == licence::have_licence || person.have_recommendation ){
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