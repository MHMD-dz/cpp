#include<iostream>
#include<string>
using namespace std ;


int main(){
    int color ;
    cout << "Enter the color you want your console window to be : \n Enter the number beside the color to choose it : " << endl ;
    cout << " Blue(1) , Green (2) , Aqua (3) \n Red (4) , Purple (5) , Yellow (6) \n White (7) , Gray (8) , Light Blue (9) \n Light Green (10) "  ;
    cout << " Light Aqua (11) , Light Red (12) \n Light Purple (13) , Light Yellow (14) " << endl ;
    cin >> color ;
    switch ( color )
    {
    case 1 :
        system(" color 1F") ;
        break;
    case 2 :
        system(" color 2F") ;
        break;
    case 3 :
        system(" color 3F") ;
        break;
    case 4 :
        system(" color 4F") ;
        break;
    case 5 :
        system(" color 5F") ;
        break;
    case 6 :
        system(" color 6F") ;
        break;
    case 7 :
        system(" color 7F") ;
        break;
    case 8 :
        system(" color 8F") ;
        break;
    case 9 :
        system(" color 9F") ;
        break;
    case 10 :
        system(" color AF") ;
        break;    
    case 11 :
        system(" color BF") ;
        break;
    case 12 :
        system(" color CF") ;
        break;
    case 13 :
        system(" color DF") ;
        break;
    case 14 :
        system(" color EF") ;
        break;

    default:
        break;
    }
}