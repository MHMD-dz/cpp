#include<iostream>
using namespace std ;

struct st_address{
   string street_name ;
   int zip_code ;
   string home_address ;  };

struct st_contact_info{
    string email ;
    string phone_number ;
    st_address address ;  };

enum en_gender { male , female } ;
enum en_maried { maried , singel } ;
enum en_fav_colore { blue , red , yallow , green } ;

struct person{
    string first_name ;
    string last_name ;
    st_contact_info contact ;
    en_fav_colore color ;
    en_gender gender ;
    en_maried maried_stat ;
};


int main(){
    person mohamed ;

    mohamed.first_name = "Mohamed" ;
    mohamed.last_name = "Benzineb" ;
    mohamed.contact.email = "xxxxxxxx@gmail.com" ;
    mohamed.contact.phone_number = "123456789" ;
    mohamed.contact.address.home_address = "i'm note puting that on githup" ;
    mohamed.contact.address.street_name = "kalamise" ;
    mohamed.contact.address.zip_code = "31081" ;
    mohamed.color = en_fav_colore::blue ;
    mohamed.gender = en_gender::male ;
    mohamed.maried_stat = en_maried::singel ;
    

}