#include<iostream>
#include<vector>

using namespace std ;

int main(){
    vector <int> hi ;
    int size , i , number ;
    cout << "Enter the size you want for the vector: " ;
    cin >> size ;

    for ( i = 0 ; i < size ; i++)
    {
        cout << "Enter the elemenr[" << i+1 << "] : " ;
        cin >> number ;
        hi.push_back(number) ;
    }
    // firste methode
    for ( i = 0 ; i < 3; i++)
    {
        cout << "Enter the place of the vector you want to print: " ;
        cin >> number ;
        cout << "hi[" << number << "] :"  << hi.at((number-1)) << endl ;
    }
    // seconde methode
    for ( i = 0 ; i < 3; i++)
    {
        cout << "Enter the place of the vector you want to print: " ;
        cin >> number ;
        cout << "hi[" << number << "] :"  << hi[(number-1)] << endl ;
    }
    

}