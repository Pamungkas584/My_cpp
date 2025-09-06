#include <iostream>
using namespace std;
#include <array>

int main(){
    // membuat array
    array< int, 5> nilai; //array < tipe data , ukuran array> nama array

    for(int i = 0; i <= nilai.size(); i++){
        nilai[i] = i;

        cout << "nilai[" << i << "] = " << nilai[i];
        cout << " adressnya adalahh : " << &nilai[i] << endl;
    }

    // mencari ukuran array 
    cout << "ukuran array : ";
    cout << nilai.size() << endl;
    
    // mencari adress awal array 
    cout << "adress awal array : ";
    cout << nilai.begin() << endl;

    // mencari adress akhir array 
    cout << "adress akhir array : ";
    cout << nilai.end() << endl;
    return 0;
}