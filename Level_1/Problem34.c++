#include<iostream>
#include<string>
using namespace std ;

int read_sales(){
    int sales ;
    cout << "Enter the total sales : ";
    cin >> sales ;
    return sales;
}

int tax_persentage(int sales){
    if (sales >= 1000000){
        return 1 ;}
        else if (sales >= 500000){
            return 2;}
            else if (sales >= 100000){
                return 3 ;}
                else if (sales >= 50000){
                    return 5;}
                    else{
                        return 0;}
                    
}

int calcu_taxt( int sales , float tax ){
    return ((tax/100)*(sales));
}

void write_tax(int tax){
    cout << "the commition is : " << tax ;
}


int main (){
    int sales ;
    sales = read_sales() ;
    cout << "commission percentage is " << tax_persentage( sales ) << "% " << endl ;
    write_tax( calcu_taxt( sales , tax_persentage( sales ) ) ) ;

}