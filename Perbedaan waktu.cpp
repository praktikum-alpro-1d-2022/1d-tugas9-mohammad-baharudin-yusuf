#include <iostream>
#include <cmath>

using namespace std;
/* Perbedaan Waktu Tempat */
void hitung();
void input();
void tampil();

struct waktu{
    int j,m,d,lama,perbedaan;
};

waktu beda[3]; 

main(){
    input();
    hitung();
    tampil();
}

void hitung(){
    beda[0].lama=beda[1].d-beda[0].d;
    beda[1].lama=beda[1].m-beda[0].m;
    beda[2].lama=beda[1].j-beda[0].j;
}
void input (){
    for(int i=0,j=1; i<2; i++,j++){
        cout<<"Waktu tempat ke " << j <<endl;
        cout<<"Jam   = ";
        cin >> beda[i].j;
        cout<<"Menit = ";
        cin >> beda[i].m;
        cout<<"Detik = ";
        cin >> beda[i].d;
    }
}
void tampil(){
    cout<<"Perbedaan waktu : "<<endl;
    beda[2].lama = abs(beda[2].lama);
    beda[1].lama = abs(beda[1].lama);
    beda[0].lama = abs(beda[0].lama);
    cout<<"Jam   = "<<beda[2].lama<<endl;
    cout<<"Menit = "<<beda[1].lama<<endl;
    cout<<"Detik = "<<beda[0].lama<<endl;
    cout<<"Terdapat perbedaan waktu selama = "<<beda[2].lama<<" jam "<<beda[1].lama<<" menit "<<beda[0].lama<<" detik";
}