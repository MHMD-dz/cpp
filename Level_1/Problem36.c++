#include<iostream>
#include<string>
using namespace std ;

enum en_operator{ Plus , Subtract , Multiply , Divided } ;

struct calculator{
    float number1 ;
    float number2 ;
    en_operator oprater ;
};

void read_numbers(calculator &nambrs){
    cout << "Enter the first number : " ;
    cin >> nambrs.number1 ;
    cout << "Enter the second number : " ;
    cin >> nambrs.number2 ;
}

en_operator read_op(){
    char op ;
    cout << "enter the operation : " ;
    cin >> op ;
    switch (op){
    case '+' :
        return Plus ;
    case '-' :
        return Subtract ;
    case '*':
        return Multiply ;
    case '/':
        return Divided ;
    default:
    cout << "ERROR using default operation \"+\" " << endl;
        return Plus ;}
}

float clacul(calculator numbrs , en_operator opr ){
    switch ( opr ){
    case Plus :
        return numbrs.number1 + numbrs.number2 ;
    case Subtract :
        return numbrs.number1 - numbrs.number2 ;
    case Divided :
        return numbrs.number1 / numbrs.number2 ;
    case Multiply :
        return numbrs.number1 * numbrs.number2 ;
    default:
        return 0;
    }
}

void output(float resulu){
    cout << "the result is : " << resulu ;
}

int main(){
    calculator nbr ;
    read_numbers(nbr) ;
    output(clacul(nbr,read_op()));

}