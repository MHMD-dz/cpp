#include<iostream>
#include<vector>

using namespace std ;

int main(){
    // std::vector 
    vector <int> V = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 } ;


    for ( int number : V )
    {
        cout << " (" << number << ") " ;
    }
    

}