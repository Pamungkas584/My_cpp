#include <iostream>
using namespace std;

//prototype
void kuadrat(int &);
void fungsi(int &);

int main(){

    int a = 5;
    cout << "Adress a :" << &a <<endl;
    cout << "nilai dari a:" << a <<endl;
    fungsi(a);
    
    kuadrat(a);
    cout << "\nAdress a :" << &a <<endl;
    cout << "nilai dari setelah kuadrat a:" << a <<endl;

    
    return 0;
}

void fungsi(int &b){ // &b dalam parameter adalah alias bukan variabel baru

    cout << "adress b  :" << &b <<endl;
    cout << "nilai b  :" << b <<endl;
}

void kuadrat(int &b){
    b = b * b;
}// karena mengakses memori langsung jadi tidak perlu return dan bisa pakai void