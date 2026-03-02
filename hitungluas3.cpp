#include <iostream>
using namespace std;

int r;

void input(){
    cout << "masukkan jari-jari = ";
    cin >> r;
}
//implemetasi fungsi dan prosedur
float LuasLingkaran(float a){
        return 3.14159 *a*a;
}

void output (){
    cout << "Hasil :" << LuasLingkaran(r);

}

int main(){
}