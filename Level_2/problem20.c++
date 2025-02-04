#include<iostream>
using namespace std ;

enum enchartype { small_letter = 1 , capital_letter = 2 , spisial_letter = 3 , number = 4 };

char random(int from , int to ){
    
    int  random ;
    random = (rand() % (to - from + 1) ) + from ;
    return char(random) ;
}

char getRandomcaracteur( enchartype hi){
    switch (hi)
    {
    case enchartype::capital_letter :
        return random(65 , 90);
    case enchartype::small_letter :
        return random(97 , 122);
    case enchartype::spisial_letter :
        return random(33 , 47);
    case enchartype::number :
        return random(48 , 57);
    
    default:
        return 0;
    }
}


int main(){
    srand(time(0));
    cout << getRandomcaracteur(enchartype::small_letter) << endl ;
    cout << getRandomcaracteur(enchartype::capital_letter) << endl ;
    cout << getRandomcaracteur(enchartype::spisial_letter) << endl ;
    cout << getRandomcaracteur(enchartype::number) << endl ;
}