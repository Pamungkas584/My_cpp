#include <iostream>
using namespace std;
    



int main(){

    //mencari adress dari a
    int a = 5;
    int *aPtr = &a; // cara mngambil adress adalah dengan memberi tanda '&' sebelum penulisan variabel, variabel
    // variabel penyimpan pointer di mulai dengan tanda * di awalnya

    cout << "adress dari a adalah ";
    cout << aPtr << endl;

    // mendapat value dari adress
    cout << "value dari adress aPtr : " ;
    cout << *aPtr << endl; // dereference


    cin.get();
    return 0;
}