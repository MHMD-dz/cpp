#include<iostream>
#include<stdlib.h>

using namespace std ;


int main(){
    int i , j , A[100][100] ;
    for ( i = 0 ; i < 10 ; i++)
    {
        for ( j = 0; j < 10 ; j++)
        {
            A[i][j] = (i+1)*(j+1) ;
        }
        
    }

    for ( i = 0 ; i < 10 ; i++)
    {
        for ( j = 0; j < 10 ; j++)
        {
            printf("%02d \t" ,  A[i][j]) ;
        }
        cout << endl ;
    }
    
}