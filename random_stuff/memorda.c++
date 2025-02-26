#include<iostream>

using namespace std ;

int main (){
    // declaring pointer
    int *ptr1 ;
    float *ptr2 ;

    // run timr pointer allocatr
    ptr1 = new int ;
    ptr2 = new float ;

    // givin theme value
    *ptr1 = 40 ;
    *ptr2 = 12.5 ;

    // output them 
    cout << *ptr1 << endl ;
    cout << *ptr2 << endl ;

    // run time deleting theme
    delete ptr1 ;
    delete ptr2 ;

    // output 
    cout << *ptr1 << endl ;
    cout << *ptr2 << endl ;

}