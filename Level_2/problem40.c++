#include<iostream>
using namespace std;

void fill_the_array(int T[]) {
    T[0] = 10;
    T[1] = 10;
    T[2] = 10;
    T[3] = 50;
    T[4] = 50;
    T[5] = 70;
    T[6] = 70;
    T[7] = 70;
    T[8] = 70;
    T[9] = 90;
}

void write_the_array(int T[], int n) {
    int i;
    cout << "The elements of the array are: ";
    for (i = 0; i < n; i++) {
        cout << T[i] << "  ";
    }
    cout << endl;
}


bool is_present(int x, int T[], int n) {
    for (int i = 0; i < n; i++) {
        if (T[i] == x) {
            return true;
        }
    }
    return false; 
}

void distenc(int T[], int& n) {
    int A[100], calc = 0;

    for (int i = 0; i < n; i++) {
        if (!is_present(T[i], A, calc)) { 
            A[calc] = T[i];
            calc++;
        }
    }

    
    for (int i = 0; i < calc; i++) {
        T[i] = A[i];
    }

    n = calc; 
}

int main() {
    int T[100], n = 10;
    fill_the_array(T);
    write_the_array(T, n);
    distenc(T, n); 
    write_the_array(T, n);

    return 0;
}
