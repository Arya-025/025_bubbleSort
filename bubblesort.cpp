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
void bubblesortArray(){
    int pass = 1; //step 1

    do {
        for (int j= 0; j <= n-1-pass; j++){//step 2
            if (arr[j] > arr[j+1]) {//step 3
                int temp;
                arr[j] = arr[j];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1; //step 4
    }while (pass <= n-1);//step 5
}
void display (){
    cout << endl;
    cout << "====================" endl;
    cout << "Elemen Array yang telah tersusun" endl;
    cout << "====================" endl;
    cout << endl;
    for (int j = 0; j <n; j++){
        cout << arr[j];//menampilkan array
        if (j < n -1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n-1 << endl;
    cout << endl;
    cout << endl;
}
int main(){
    input ();

    bubblesortArray();
    display();

    system("pause");
    return 0;
}