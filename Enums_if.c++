#include<iostream>
#include<string>
using namespace std ;

// using enum for the color
enum en_consol_color { Blue = 1 , Green = 2	, Aqua = 3 ,
    Red = 4 , Purple = 5 , Yellow = 6 , White = 7 , Gray = 8 , Lblue = 9 , LGreen = 10 ,
    LAqua = 11 , LRed = 12 , LPurple = 13 , LYellow = 14 };

int main(){
    int cns_color ;
    en_consol_color encolor ;
    // output about the asking the user for the color
    cout << "Enter the color you want your console window to be : \n Enter the number beside the color to choose it : " << endl ;
    cout << " Blue(1) , Green (2) , Aqua (3) \n Red (4) , Purple (5) , Yellow (6) \n White (7) , Gray (8) , Light Blue (9) \n Light Green (10) "  ;
    cout << " Light Aqua (11) , Light Red (12) \n Light Purple (13) , Light Yellow (14) " << endl ;
    cin >> cns_color ;
    // tranforming the int to the enum value
    cns_color = (en_consol_color) cns_color ;
    if ( en_consol_color::Blue == cns_color){
        system(" color 1F");}
        else if ( en_consol_color::Green == cns_color){
        system(" color 2F");}
            else if ( en_consol_color::Aqua == cns_color){
            system(" color 3F");}
                else if ( en_consol_color::Red == cns_color){
                system(" color 4F");}
                    else if ( en_consol_color::Purple == cns_color){
                    system(" color 5F");}
                        else if ( en_consol_color::Yellow == cns_color){
                        system(" color 6F");}
                            else if ( en_consol_color::White == cns_color){
                            system(" color 7F");}
                                else if ( en_consol_color::Gray == cns_color){
                                system(" color 8F");}
                                    else if ( en_consol_color::Lblue == cns_color){
                                    system(" color 9F");}
                                        else if ( en_consol_color::LGreen == cns_color){
                                        system(" color AF");}
                                            else if ( en_consol_color::LAqua == cns_color){
                                            system(" color BF");}
                                                else if ( en_consol_color::LRed == cns_color){
                                                system(" color CF");}
                                                    else if ( en_consol_color::LPurple == cns_color){
                                                    system(" color DF");}
                                                        else if ( en_consol_color::LYellow == cns_color){
                                                        system(" color EF");}
}
