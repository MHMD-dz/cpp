#include<iostream>
using namespace std ;

string get_name(string hi){
    string n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

string encrypt(string name , short encryption_key){
    int i ;
    string crypt = "";
    for ( i = 0 ; i <= name.length()-1 ; i++){
        crypt += char(name[i] + encryption_key);

    }
    return crypt ;

}

string decrypt(string name , short encryption_key){
    int i ;
    string crypt = "";
    for ( i = 0 ; i <= name.length()-1 ; i++){
        crypt += char(name[i] - encryption_key);

    }
    return crypt ;

}

void write ( string syntax , string name){
    cout << syntax << name << endl ;
}


int main(){
    string name ;
    const short encryption_key = 2 ;
    name = get_name("Enter your name : ");
    write("the name before encrypt is : ",name);
    write("the name after encrypt is : ",encrypt(name,encryption_key));
    write("the name after decrypt is : ",decrypt(encrypt(name,encryption_key),encryption_key));
}