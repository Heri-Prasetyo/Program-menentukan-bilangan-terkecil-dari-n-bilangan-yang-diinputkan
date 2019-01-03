#include<iostream>
using namespace std;

int main(){
int a1,a2,Terkecil;

cout<<"PROGRAM MENENTUKAN BILANGAN TERKECIL DARI N BUAH BILANGAN YANG DIINPUTKAN"<<endl;
cout<<"Masukan Bilangan Pertama : ";
cin>>a1;
cout<<"Masukan Bilangan Kedua   : ";
cin>>a2;
{
    if(a1<a2)
        Terkecil = a1;
    else
        Terkecil = a2;
    cout<<"Bilangan Terkecil Adalah = "<<Terkecil;
    cout<<endl;
}
return 0;



}
