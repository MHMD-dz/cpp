#include<iostream>
#include<vector>

using namespace std ;

// HOMEWORK AS FUNCTION
void homework(){
    int element , i = 1 ;
    bool more ;
    vector <int> HI ;
    more = true ;
    while (more)
    {
        cout << "Enter the " << i << " element of the vector: ";
        cin >> element ;
        HI.push_back(element) ;
        cout << endl ;
        cout << "Do you want to enter another element: [1] for yes & [0] for no " << endl ;
        cin >> more ;
    }
    
    for ( int &number : HI )
    {
        cout << " (" << number << ") " ;
    }
}





int main(){
    // std::vector 
    int size , i , element ;
    vector <int> V ;

    cout << "Enter the size of the vector: ";
    cin >> size ;
    for ( i = 0 ; i < size ; i++)
    {
        cout << "Enter the " << i+1 << " element of the vector: ";
        cin >> element ;
        V.push_back(element) ;
    }
    
    


    for ( int &number : V )
    {
        cout << " (" << number << ") " ;
    }
    cout << endl ;
    homework();
}