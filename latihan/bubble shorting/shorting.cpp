#include <iostream>
using namespace std;
#include <array>

void swap(int &,int &);
bool compare(int &,int &);

int main(){
    
    const int e = 6;
    array < int , e > nilai;
    bool again;
    int phase = 1;

    for(int i = 0;i < e;i++){
        cout << "masukkan nilai ke " << i+1 << " : ";
        cin >> nilai[i];
    }


    do{
        again = false;
        for(int i = 0; i < (e-1) ;i++){
            again = compare(nilai[i],nilai[i+1]) or again;
        }
        
        cout << "Phase " << phase << " : {";
        for(int i = 0; i < e ; i++){
            cout << nilai[i] << " ";
        }
        cout << "}" << endl;

        phase++;
    }while(again);
    

    return 0;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

bool compare(int &c,int &d){
    if(c > d){
        swap(c,d);
        return true;
    }
    return false;
}