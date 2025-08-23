#include <iostream>
using namespace std;

int main(){

    // for loop
    // for(inisialisasi ; condition ; increcement/decrecement){aksi}
    for (int i = 1; i <5 ; i++ ) {
        cout << i << " haii" << endl;
    }

    cout << "\n" << endl;

    //do while : aksi akan tetap di lakukan setidaknya satu kali meskipun tidak memenuhi syarat untuk loopin
    // do { aksi } while (condition);
    int a = 0;
    do {
        cout << a << " hallo" << endl;
        a++;
    } while(a < 4);

    return 0;
}