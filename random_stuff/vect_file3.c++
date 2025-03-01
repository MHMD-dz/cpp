#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std ;

void print_file_content( string file_name){
    string line ;
    fstream file ;
    file.open( file_name , ios::in) ; // read mode

    if (file.is_open())
    {
        while (getline(file , line))
        {
            
            cout << line << endl ;

        }
        
    }
    file.close() ;
}

void  from_vector_to_file( string file_name , vector <string> &hi){
    
    fstream file ;
    file.open( file_name, ios::out) ;

    if (file.is_open())
    {
       
        for ( string linee : hi )
        {
            file << linee << "\n" ;
        }
        file.close() ;
    }
    
}


void delete_record(string file_name , string deleted){
    vector <string> hi ;
    fstream file ;
    string line ;
    file.open( file_name , ios::in ) ;


    if (file.is_open())
    {

        while (getline(file,line))
            {
                if (line != deleted)
                {
                   hi.push_back(line) ;
                }
            }
    
        file.close() ;
    }
    from_vector_to_file(file_name , hi );
}





int main () {
    print_file_content("test2.txt");
    delete_record("test2.txt" , "abdelilah");
    cout <<"_________________________________" << endl ;
    print_file_content("test2.txt");

}