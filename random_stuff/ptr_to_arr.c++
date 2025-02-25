#include<iostream>

using namespace std ;

int main (){
    int arr[5] , i ;
    int *ptr ;
    cout << "fill the array: " << endl << endl ;
    for ( i = 0; i < 5 ; i++)
    {
        cout << "arr[" << i+1 << "]: " ;
        cin >> arr[i] ;
    }
    ptr = arr ;
    cout << "the array element output using pointer: " << endl ;
    for ( i = 0; i < 5 ; i++)
    {
        cout << "arr[" << i+1 << "]: " << *(ptr + i) << endl;
    }
}