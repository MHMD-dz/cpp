#include<iostream>
#include<vector>

using namespace std ;

struct student {
    string first_name ;
    string last_name ;
    int group ;
    float avereg ;

};



int main(){
    student la_fac ;
    vector <student> vStud ;
    int number , i ;
    cout << "Enter how much of student you have: ";
    cin >> number ;
    for ( i = 0; i < number ; i++)
    {
        cout << "Enter the first name of student number (" << i+1 << "): " ;
        cin >> la_fac.first_name ;
        cout << "Enter the last name of student number (" << i+1 << "): " ;
        cin >> la_fac.last_name ;
        cout << "Enter the group number of student number (" << i+1 << "): " ;
        cin >> la_fac.group ;
        cout << "Enter the avereg of student number (" << i+1 << "): " ;
        cin >> la_fac.avereg ;
        vStud.push_back(la_fac) ;
    }
    i = 1 ;
    for ( student &numb : vStud )
    {
        cout << endl << endl ;
        cout << "----------------------------------" << endl;
        cout << "STUDENT NUMBER [" << i << "] : " << endl ;
        cout << "first name: " << numb.first_name << endl ;
        cout << "last name: " << numb.last_name << endl ;
        cout << "gruop number: " << numb.group << endl ;
        cout << "averge: " << numb.avereg << endl ;
        cout << "----------------------------------";
    }
    

}