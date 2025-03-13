#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n;       //deklarasi variable global a untuk menyimpan banyaknya elemen pada array

void input() { //prosedur untuk input
    int d;
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "<< endl;//output ke layar
        cin >> n;       //input dari pengguna
        if (n <=20)
        break;
    else{
        cout << "\nArray dapat mempunyai maksimal 20 elemen\n" << endl;
    }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen Array" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i <n; i++){
        cout << "data ke-" <<(i+1) << ";";
        cin >> arr [i];
    }
}