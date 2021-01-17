#include <iostream>

using namespace std;

int main()
{
    int pilih;
    int n1,n2;
    char ulang;
    utama :
    cout<<"================"<<endl;
    cout<<"   calculator   "<<endl;
    cout<<"================"<<endl;
    cout<<"=1.perkalian   ="<<endl;
    cout<<"=2.pembagian   ="<<endl;
    cout<<"=3.pemjumlahan ="<<endl;
    cout<<"=4.pengurangan ="<<endl;
    cout<<"================"<<endl;
    cout<<"pilih menu anda (1/2/3/4) : "<<endl;
    cin >> pilih;

    switch(pilih){
case 1:
    cout<<"masukan nilai pertama : "<<endl;
    cin >> n1;
    cout<<"masukan nilai kedua : "<<endl;
    cin >>n2;
    cout<<"------------------------"<<endl;
    cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
    cout<<endl;
    cout<<"ingin malakukan lagi (y/n): "<<endl;
    cin >> ulang;

    if(ulang == 'y'){
        system("cls");
        goto utama;
    }
    else if(ulang == 'n'){
        cout<<"terima kasih"<<endl;
    }
    break;
case 2:
    cout<<"masukan nilai pertama : "<<endl;
    cin >> n1;
    cout<<"masukan nilai kedua : "<<endl;
    cin >>n2;
    cout<<"------------------------"<<endl;
    cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
    cout<<endl;
    cout<<"ingin malakukan lagi (y/n): "<<endl;
    cin >> ulang;

    if(ulang == 'y'){
        system("cls");
        goto utama;
    }
    else if(ulang == 'n'){
        cout<<"terima kasih"<<endl;
    }
    break;
case 3:
    cout<<"masukan nilai pertama : "<<endl;
    cin >> n1;
    cout<<"masukan nilai kedua : "<<endl;
    cin >>n2;
    cout<<"------------------------"<<endl;
    cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
    cout<<endl;
    cout<<"ingin malakukan lagi (y/n): "<<endl;
    cin >> ulang;

    if(ulang == 'y'){
        system("cls");
        goto utama;
    }
    else if(ulang == 'n'){
        cout<<"terima kasih"<<endl;
    }
    break;
case 4:
    cout<<"masukan nilai pertama : "<<endl;
    cin >> n1;
    cout<<"masukan nilai kedua : "<<endl;
    cin >>n2;
    cout<<"------------------------"<<endl;
    cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
    cout<<endl;
    cout<<"ingin malakukan lagi (y/n): "<<endl;
    cin >> ulang;

    if(ulang == 'y'){
        system("cls");
        goto utama;
    }
    else if(ulang == 'n'){
        cout<<"terima kasih"<<endl;
    }
    default:
    cout<<"terima kasih(*,*)"<<endl;
    }
    return 0;
}
