#include<iostream>
#include<string>
using namespace std ;

int penny(){
    int m ;
    cout << "Enter how much penny you put in the piggy bank : ";
    cin >> m ;
    return m ;
}

int nickel(){
    int m ;
    cout << "Enter how much nickel you put in the piggy bank : ";
    cin >> m ;
    return m*5 ;
}

int dime(){
    int m ;
    cout << "Enter how much dime you put in the piggy bank : ";
    cin >> m ;
    return m*10 ;
}

int quarter(){
    int m ;
    cout << "Enter how much quarter you put in the piggy bank : ";
    cin >> m ;
    return m*25 ;
}

int dollar(){
    int m ;
    cout << "Enter how much dollar you put in the piggy bank : ";
    cin >> m ;
    return m*100 ;
}

int calcul_money(int p , int n ,int d ,int q ,int t ){
    return (p+n+d+q+t);
}


int main (){
    int money = calcul_money(penny(),nickel(),dime(), quarter(),dollar());
    cout << "you have : " << money << " pennies in the piggy bank" << endl ;
    money = static_cast<float>(money) ;
    cout << "you have : " << money/100.00 << " dollar in the piggy bank" << endl ;
}