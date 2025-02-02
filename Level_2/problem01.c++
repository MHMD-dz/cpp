#include<iostream>
#include<string>
using namespace std ;

void heade(){
    int i ;
    cout << "\t\t\tTHE MULTIPLICATION TABLE FROM 1 TO 10 " << endl << endl ;
    cout << "\t\t";
    for ( i = 1; i <= 10; i++){
        cout << i  << "\t" ;
    }
    cout << endl ;
    cout << "    __________________________________________________________________________________________" << endl ;
}
void side(int i){
    if (i < 10){
        cout << "     " << i << "\t"<< "  |     " ;}
        else cout << "    " << i << "\t"<< "  |    " ;
}
void multiplicationtable(){
    int i , j ;
    heade();
    
    
        for ( i = 1 ; i <= 10 ; i++){
            side(i) ;
            for ( j = 1 ; j <= 10; j++){
                //cout << "   " ;
                cout << i * j << "\t" ;
            }
            cout << endl ;
        }
       
}

int main(){
    multiplicationtable();
}