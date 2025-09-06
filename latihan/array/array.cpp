#include <iostream>
#include <array>
using namespace std;

int main(){

    array < int , 10> nilai;
    cout << nilai.size() << endl;
    for(int i = 1; i <= nilai.size(); i++){
        cout << "maahasiswa dengan nilai  ";
        if(i == 1){
            cout << "0-9 :" ;
        }
        else if(i == 9){
            cout << "90 - 100 : ";
        }else{
            
            cout << (i-1)*10 << " - " << ((i-1)*10) + 9 << " : ";
        }
        cin >> nilai[i-1];
    }
    
    for(int i =1; i <= 10;i++){
        cout << "nilai ke " << i << nilai[i] << endl;

    }


    return 0;
}