#include<iostream>
using namespace std ;

void dynamicly_read(int T[] , int &n ){
    bool numb = true ;
    int haaa ;
    n = 0 ;
    while (numb)
    {
        cout << "Enter the number : " ;
        cin >> T[n] ;
        n++ ;
        cout << "do you want to enter anouther number \'[1] for yes and [0] for no : \' " ;
        cin >> haaa ;
        if (haaa == 0)
        {
            numb = false;
        }
        
    }
    
}

void write_the_array(int T[] , int n){
    int i ;
    cout << "the elemants of the array are : " ;
    for ( i = 0 ; i < n ; i++)
    {
        cout << T[i] << "  ";
    }
    cout << endl ;
}

int main (){
    int T[100] , n ;
    dynamicly_read(T,n);
    write_the_array(T,n);
}