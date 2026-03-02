//library
#include <iostream>
using namespace std;

//deklarasi variable global 30
int r;

void input(){
    cout << "masukkan jari-jari = ";
    cin >> r;
}

float LuasLingkaran(float a){
        return 3.14159 *a*a;
}

void output (){
    cout << "Hasil :" << LuasLingkaran(r);

}

int main(){
    input();
    output();
}