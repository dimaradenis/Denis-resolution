#include <iostream>
using namespace std;

int main(){
    //operator sisa pembagian

    int a , hasil;
    cout<<"masukan nilai = ";
    cin>>a;
    hasil = a % 2;

    string jenis = hasil == 1 ? " Ganjil" : "Genap";

    cout<<"bilangan"<<a<<" termasuk bilangan "<<jenis;


}