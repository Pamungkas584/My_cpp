#include <iostream>
using namespace std;

//prototype
int luas(int s);
int luas(int p,int l);

int main(){
    
    cout << "luas persegi dengan sisi 5 = " << luas(3) << endl; // akan menjalankan method yang memiliki satu argumen meskipun ada method yang sama dengan nama yang sama
    
    cout << "luas persegi panjang dengan panjang 4 dan lebar 5 adlah = " << luas(4,5) << endl; // akan menjalankan method yang memiliki 2 argumen meskipun ada method yang sama namun dengan jumlah argumen tidak sama dengan dua
    
    
    return 0;
}




int luas(int p, int l){

    return p*l;
}

int luas(int s){

    return s*s;
}