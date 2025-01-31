#include<iostream>
#include<string>
#include<math.h>
using namespace std ;

void read_AB (float &a , float &b ){
    cout << "Enter the valeu of A : ";
    cin >> a ;
    cout << "Enter the value of B : ";
    cin >> b ;
}

void read_r(float& r){
    cout << "Enter the value of half the QUTOR : " ;
    cin >> r ;
}

void read_d ( float &d ){
    cout << "enter the value of the diameter : ";
    cin >> d ;
}

float read_a (){
    float a ;
    cout << "Enter A : " ;
    cin >> a ;
    return a ; 
}

float calcul_rectangle ( float a , float b){
    return ( a * sqrt( pow( b , 2 ) - pow( a , 2) ) );
}

float calcul_tria_area( float a , float b){
    return ((0.5)*(a*b)) ;
}

float calcul_circle_area(float r){
    return (3.14159*pow(r,2));
}

float calcul_circle_ar( float d ){
    return ((3.14159*pow(d,2))/4);
}

float calcul_cr_ar_ins_squ(float a ){
    return ((3.14159*pow(a,2))/4);
}

void wright_rect ( float rectangle){
    cout << "The rectanglre area is : " << rectangle << endl ;
}

void wright_tria_ar ( float triangel_area){
    cout << "The rectanglre area is : " << triangel_area << endl;
}

void write_circle_ar ( float area ){
    cout << "The circle area is : " << area << endl;
}

int main(){
    // calculing rectangle area usin diagonal and side
    float A , B ;
    read_AB(A,B);
    wright_rect(calcul_rectangle(A,B));
    // calculing triangle area
    read_AB(A,B);
    wright_tria_ar(calcul_tria_area(A,B));
    // calculing the circle area
    float r ;
    read_r(r);
    write_circle_ar(calcul_circle_area(r));
    // calcul circle area by diameter
    float d ;
    read_d(d);
    write_circle_ar(calcul_circle_ar(d));
    // calcul circle area inscribed in a square
    write_circle_ar(calcul_cr_ar_ins_squ(read_a()));
}