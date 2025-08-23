#include <iostream>
using namespace std;

int main() {
    
    int fibo;
    cout << "Masukkan angka fibo : " ;
    cin >> fibo;
    
    int loop = 0;
    int current = 0;
    int current_increse;
    int before = 0;

    do {
        cout << current << " ";
        
        current_increse = before;
        before = current;
        current += current_increse;


        if (current == 0) {
            current += 1;
        }
        loop++;

    }while(loop <= fibo );


    return 0;
}