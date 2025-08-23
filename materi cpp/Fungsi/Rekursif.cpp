#include <iostream>
using namespace std;

// fungsi iterasi 
int PangkatIterasi(int a , int b){
    int hasil = a;
    for(int i = 1; i < b ; i++){
        hasil = hasil * a;
    }
    return hasil;
}

// Fungsi Rekursif 
int PangkatRekursif(int a,int b){
    if(b == 1){
        return a;
    }else{
        return a * PangkatRekursif(a,(b-1)); 
    }
}


int main(){

    int angka,pangkat;
    cout << "angka : " ;
    cin >> angka;
    cout << "pangkat : ";
    cin >> pangkat;

    cout << "Hasil pangkat iterasi : " << PangkatIterasi(angka,pangkat) << endl;


    return 0;
}