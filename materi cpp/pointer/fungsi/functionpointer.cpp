#include <iostream>
using namespace std;

//prototype
void kuadrat(int *);
void fungsi(int *);

int main(){

    int a = 5;
    cout << "Adress a :" << &a <<endl;
    cout << "nilai dari a:" << a <<endl;
    fungsi(&a);

    return 0;

}

void fungsi(int *b){

    cout << "adress b  :" << b <<endl;
    cout << "nilai b  :" << *b <<endl;
    
}