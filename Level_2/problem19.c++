#include<iostream>
#include <cstdlib>
using namespace std ;

int randomnumber(int from , int to){
    return(rand()%((to - from +1))+from);
}


int main(){
    srand(time(0));
    cout << randomnumber(1,10) << endl ;
    cout << randomnumber(11,20) << endl ;
    cout << randomnumber(21,30) << endl ;

}