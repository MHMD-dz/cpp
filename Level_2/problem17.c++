#include<iostream>
using namespace std ;

string get_code(string hi){
    string n ;
    cout << hi ;
    cin >> n ;
    return n ;
}

void pattern(string code){
    int i , j , x , comp =0;
    string t_code = "";
    for ( i = 65 ; i <= 90 ; i++)
    {
        for (j = 65 ; j <= 90; j++){
            
            for ( x = 65 ; x <= 90 ; x++)
            {
                comp++;
                t_code = string(1, char(i)) + string(1, char(j)) + string(1, char(x));
                cout << "Taiel : " << t_code << " [" << comp << "] : " << endl ;
                if (t_code == code )
                {
                    cout << endl << "the correct code is : " << t_code ; 
                    return;
                }
                
            }
            
        }
        

    }
    
}

int main(){
    pattern(get_code("Enter your code \" from 3 capital letter \" : "));
}