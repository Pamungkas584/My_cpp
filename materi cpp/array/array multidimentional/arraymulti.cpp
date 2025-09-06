#include <iostream>
using namespace std;


void tampilkanarray(int *Ptrarray,int baris,int kolom){
    int index = 0;
    for(int i = 0;i < baris;i++){
        cout << "[ ";
        for(int k = 0; k < kolom;k++){
            cout << *(Ptrarray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }

}

int main(){


    // Membuat Array Multidimentional
    // int namaarray[baris][kolom]
    const int baris = 2; //Harus berupa const karena nilai yang di gunakan untuk mendeklarasikan jumlah kolom dan baris tidak boleh berubah
    const int kolom = 2;
    int array[baris][kolom] = {1,2,3,4};
    
    tampilkanarray(*array,baris,kolom);
    return 0;
}