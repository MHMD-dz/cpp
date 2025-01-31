#include<iostream>
#include<string>
#include<math.h>
using namespace std ;

int read_n(){
    int n ;
    cout << "Enter the value of N : " ;
    cin >> n ;
    return n ;
}

int read_m(){
    int m ;
    cout << "Enter the power : " ;
    cin >> m ;
    return m ;
}

void powerof1_2_3(int n){
    cout << "n power 2 is : " << pow(n,2) << endl ;
    cout << "n power 3 is : " << pow(n,3) << endl ;
    cout << "n power 4 is : " << pow(n,4) << endl ;
}

void n_power_m(int m ,int n){
    
    cout << n << " power " << m << " = " << pow(n,m);
}

int main(){
    // powerof1_2_3(read_n());
    n_power_m(read_m(),read_n());
}