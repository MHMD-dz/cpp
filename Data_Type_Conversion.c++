#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "43.22" , s , s1 , s2 ;
    int n1 = 20 , i , i2;
    double n2 = 33.5 , d ;
    float n3 = 55.23 , f ;
    // from string to integer
    i = stoi(str) ;
    cout << i << endl ;
    // from string to double
    d = stod(str) ;
    cout << d << endl ;
    // from string to float
    f = stof(str) ;
    cout << f << endl ;
    // from integer to string
    s = to_string(n1) ;
    cout << s << endl ;
    // from double to string
    s1 = to_string(n2) ;
    cout << s1 << endl ;
    // from float to string
    s2 = to_string(n3) ;
    cout << s2 << endl ;
    // frome float to integer
    i2 = int(n3) ;
    cout << i2 << endl ;

}