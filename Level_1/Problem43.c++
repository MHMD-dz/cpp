#include<iostream>
using namespace std ;

struct second_to{
    int minet ;
    int houer ;
    int day ;
    int seconde ;
};


int get_seconde(){
    int s ;
    cout << "Enter the secondes number : " ;
    cin >> s ;
    return s ;
}

second_to calcul( second_to sec){
    int temp , seconde ;
    seconde = get_seconde();
    sec.day = seconde / 86400 ;
    temp = seconde % 86400 ;
    sec.houer = temp / 3600 ;
    temp = temp % 3600 ;
    sec.minet = temp / 60 ;
    temp = temp % 60 ;
    sec.seconde = temp ;
    return sec ;
}

void write( second_to sec ){
    cout << "number of days is : " << sec.day << endl ;
    cout << "number of houer is : " << sec.houer << endl ;
    cout << "number of minet is : " << sec.minet << endl ;
    cout << "number of seconde is : " << sec.seconde << endl ;
}

int main(){
    second_to sec ;
    write(calcul(sec));
}