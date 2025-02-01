#include<iostream>
#include<string>
using namespace std ;

string get_pine(){
    string pine ;
    cout << "Enter your bank account pin : " ;
    cin >> pine ;
    return pine ;
}

bool chacking( string pine){
    int ipine ;
    ipine = stoi(pine) ;
    if ( ipine == 1234 ){
        return true;}
    else return false ;
}

void write (bool pine ){
    int i ;
    for ( i = 0 ; i < 3; i++){ 
    if (!pine){
        system("color 4F");
        cout << "wrong pine " << endl ;
        pine = chacking(get_pine());
        continue;}
    else 
    system("color 2F");
    cout << "your bank acount is 1000000 dollar " ;
    break;
} }

int main(){

    write(chacking(get_pine())) ;

}