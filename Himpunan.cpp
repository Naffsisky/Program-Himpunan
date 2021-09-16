#include <iostream>
#include <cstdlib>

using namespace std;

class gull{
    private:
        int i, j, a[20], b[20], BA, BB;
        char y;

    public:
        void irisan();
        void gabungan();
        void selamat();
        void cls();
        void garis();
        void kembali();
        int pil;
};

main(){

    gull kh;

    kh.cls();
    kh.selamat();

    cout<<"IRISAN DAN GABUNGAN 2 HIMPUNAN"<<endl<<endl;
    cout<<"1. IRISAN HIMPUNAN"<<endl;
    cout<<"2. GABUNGAN HIMPUNAN"<<endl<<endl;

    cout<<"Masukan pilihan anda : "; cin>>kh.pil;

    switch(kh.pil){
        case 1:{

            kh.irisan();

            break;
        }

        case 2:{

            kh.gabungan();

            break;
        }

        default:{

            kh.kembali();

            break;
        }
    }
    kh.kembali();

}


void gull::kembali(){
    // Membuat pilihan dan pengulangan untuk mempermudah dan meringkas kodingan
    cout<<"\nApakah Anda ingin menghitung lagi ? (Y/N) "; cin>>y;
    if(y=='Y' || y=='y'){
        main();
    }

    else if(y=='N' || y=='n'){
        cls();
        selamat();
        cout<<"Press any key to exit..."<<endl;
        exit (0);
    }
}

void gull::irisan(){
        cls();
        selamat();
        cout<<"\tAnda memilih IRISAN"<<endl<<endl;

        cout<<"Masukkan banyaknya anggota himpunan A : ";
        cin>>BA;
        i=0;
        while(i<BA){
            cout<<"Masukkan angka anggota " << i+1 << " : ";
            cin>>a[i];
            i++;
        }

        cout<<"\nMasukkan banyaknya anggota himpunan B : ";
        cin>>BB;
        j=0;
        while(j<BB){
            cout<<"Masukkan angka anggota " << j+1 << " : ";
            cin>>b[j];
            j++;
        }
        cout<<"\nHimpunan A={ ";
        i=0;
        while(i<BA){
            cout<<a[i]<<" ";
            i++;
        }
        cout<<"}";

        cout<<"\nHimpunan B={ ";
        j=0;
        while(j<BB){
            cout<<b[j]<<" ";
            j++;
        }
        cout<<"}"<<endl<<endl;

        garis();
        cout<<"A irisan B = { ";
        i=0;
        while(i<BA){
            j=0;
            while(j<BB){
 
                if(a[i]==b[j]) cout<<a[i]<<" ";
                j++;
            }
            i++;
        }
        cout<<"}"<<endl;
        garis();
}

void gull::gabungan(){
        cls();
        selamat();
        cout<<" Anda Memilih GABUNGAN HIMPUNAN"<<endl<<endl;

        cout<<"Masukkan banyaknya anggota himpunan A : ";
        cin>>BA;
        i=0;
        while(i<BA){
            cout<<"Masukkan angka anggota " << i+1 << " : ";
            cin>>a[i];
            i++;
        }

        cout<<"\nMasukkan banyaknya anggota himpunan B : ";
        cin>>BB;
        j=0;
        while(j<BB){
            cout<<"Masukkan angka anggota " << j+1 << " : ";
            cin>>b[j];
            j++;
        }
        cout<<"\nHimpunan A={ ";
        i=0;
        while(i<BA){
            cout<<a[i]<<" ";
            i++;
        }
        cout<<"}";

        cout<<"\nHimpunan B={ ";
        j=0;
        while(j<BB){
            cout<<b[j]<<" ";
            j++;
        }
        cout<<"}"<<endl<<endl;

        garis();
        cout<<"A gabungan B = { ";
        i=0;
        while(i<BA){
            cout<<a[i]<<" ";
            i++;
        }
        i=0;
        while(i<BB){
            cout<<b[i]<<" ";
            i++;
        }
        cout<<"}"<<endl;
        garis();
}

void gull::garis(){
    cout<<"-------------------------------------------"<<endl;
}
// Intro
void gull::selamat(){
    cout<<"========= Program Himpunan Sederhana ========="<<endl;
    cout<<"=-----------------------------------------="<<endl;
    cout<<"= NAMA : PRINAFSIKA "<<endl;
    cout<<"= NIM : 21081010278 "<<endl;
    cout<<"=-----------------------------------------="<<endl<<endl<<endl;
}

void gull::cls(){
    system("cls");
}
