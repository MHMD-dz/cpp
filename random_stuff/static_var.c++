#include<iostream>

using namespace std ;

void func(){
    static int number = 1 ;
    cout << "\t" << number  << endl;
    number ++ ;
}


int main () {
    func();
    func();
    func();
    func();
}