#include<iostream>

using namespace std ;

//  THE DECLARATION

int get_number();
int chacking_number();
void write_sum(int);




int main(){
    write_sum(chacking_number());
}


// THE DEFINITION

int get_number(){
    int n ;
    cout << "Enter a number that isn't -99 : " ;
    cin >> n ;
    return n ;
}

int chacking_number(){
    int sum = 0 , n = 0 ;

    while (n != (-99))
    {
        sum += n ;
        n = get_number() ;
    }
    
    return sum ;
    
}

void write_sum(int n){
    cout << "the sume is : " << n ;

}
