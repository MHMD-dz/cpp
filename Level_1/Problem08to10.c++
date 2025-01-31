#include<iostream>
#include<string>
using namespace std ;

void reading(float marks[]){
    int i ;
    for ( i = 0; i < 3; i++){
    cout << "Enter the mark number " << i+1 << " : " ;
    cin >> marks[i] ;
    }
}

bool chacking(int mark){
    if (mark >= 10 ){
        return true ;}
    else return false;
}

void result( bool passing){
    if (passing){
        cout << "Concratlition you pass";}
    else cout << "Better time next year ";
}

float the_marks_sum( float marks[]){
    int i ;
    float sum = 0;
    for ( i = 0; i < 3 ; i++){
    sum += marks[i];}
    return sum ;
}

float the_marks_averag( float sum){

    return (sum/3) ;
}

void wright_sum(float sum){
    cout << "The sum of the three marks are : " << sum << endl  ;
}

void wright_average(float avg){
    cout << "The average of the three marks are : " << avg  << endl;
}

int main(){
    float marks[2] ;
    reading(marks);
    wright_sum(the_marks_sum(marks));
    wright_average(the_marks_averag(the_marks_sum(marks)));
    result(chacking(the_marks_averag(the_marks_sum(marks))));
}