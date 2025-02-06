#include<iostream>
using namespace std;

void fill_the_array(int T[]) {
    T[0] = 20;
    T[1] = 20;
    T[2] = 30;
    T[3] = 30;
    T[4] = 20;
    T[5] = 20;
    
}

void write_the_array(int T[], int n) {
    int i;
    cout << "The elements of the array are: ";
    for (i = 0; i < n; i++) {
        cout << T[i] << "  ";
    }
    cout << endl;
}

void reverc_arr(int T[] , int A[] , int n ){
    int  i ;
    for ( i = 0; i < n; i++){
        A[i] = T[n-(i+1)] ;
    }
}

void chacking ( int T[] ,int A[] , int n ){
    int compt = 0 , i ;
    for ( i = 0; i < n ; i++)
    {
        if (T[i] != A[i])
        {
            compt ++ ;
        }
        
    }
    if (compt == 0)
    {
        cout << "The array is palindrom " ;
    }
    else cout << "The array is not palindrom " ;


}



int main(){
    int T[100] , A[100], n = 6 ;
    fill_the_array(T);
    write_the_array(T, n);
    reverc_arr(T,A,n);
    chacking(T,A,n) ;
}
