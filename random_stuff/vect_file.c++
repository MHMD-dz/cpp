#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std ;

void from_file_to_vector( string file_name , vector <string> &hi){
    string line ;
    fstream file ;
    file.open( file_name , ios::in) ; // read mode

    if (file.is_open())
    {
        while (getline(file , line))
        {
            hi.push_back(line);
        }
        
        file.close() ;
    }
    
}

int main () {
    vector <string> hello ;
    from_file_to_vector("test.txt" , hello);
    for (string &hi : hello)
    {
        cout << hi << endl ;
    }
    
}