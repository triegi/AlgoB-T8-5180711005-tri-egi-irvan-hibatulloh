#include <iostream>
using namespace ::std;

void grade(double total){
char huruf;
if (total >=101){
    cout<<"\nMAAF PROGRAM EROR : SANGAT EROR"<<endl;}
else if (total >=81){
    cout<<"\nNILAI ANDA SANGAT BAIK"<<endl;
    huruf ='A';}
else if (total >=61){
    cout<<"\nNILAI ANDA BAIK"<<endl;
    huruf ='B';}
else if (total >=41){
    cout<<"\nNILAI ANDA CUKUP"<<endl;
    huruf ='C';}
else if (total >=21){
    cout<<"\nNILAI ANDA KURANG"<<endl;
    huruf ='D';}
else if (total >=0){
    cout<<"\nNILAI ANDA SANGAT KURANG"<<endl;
    huruf ='E';}
cout<<"\nNILAI ANDA ADALAH\t\t:"<<huruf<<endl;
}

struct semua{double uts,uas,tugas,absen,total;
char huruf;};

main (){
double uts,uas,tugas,absen,total;
char huruf;
semua ok;
cout<<"=====PROGRAN MENCARI NILAI TOTAL=====";
cout<<"\nMASUKAN NILAI UTS\t:";cin>>ok.uts;
cout<<"\nMASUKAN NILAI UAS\t:";cin>>ok.uas;
cout<<"\nMASUKAN NILAI TUGAS\t:";cin>>ok.tugas;
cout<<"\nMASUKAN NILAI KEHADIRAN\t:";cin>>ok.absen;
total = (ok.uts*0.2)+(ok.uas*0.3)+(ok.tugas*0.35)+(ok.absen*0.15);
cout<<"--------------------------";
cout<<"\nNILAI TOTAL ANDA ADALAH\t\t:"<<total<<endl;
grade(total);
cout<<"--------------------------";


}

