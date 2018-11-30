#include <iostream>
using namespace std;

void nilai(int &a){
    a=8;
}
void nilai2(int &b){
    b=5;
}

int main(){
    int a=5;
    cout<<"Nilai awal          Nilai akhir"<<endl;
    cout <<"A="<<a<<"         =>      A=";
    nilai(a);
    cout<<a<<endl;
    int b=8;
    cout <<"B="<<a<<"         =>      B=";
    nilai2(b);
    cout<<b<<endl;
}
