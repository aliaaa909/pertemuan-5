#include <iostream>
using namespace std;

//tipe data nama fungsi (input) {
// perhtiungan;
//statement;
// return hasil; ( keee tipedata)



int pokok (int jamKerja)
{
    return jamKerja * 7500;
}


int lembur (int jamKerja)
{
    int JamLembur = jamKerja - 8;
    if (jamKerja > 8)
    {
        return (jamKerja - 8) * (7500 * 1.5);
    }
    return 0;
}


int makan (int jamKerja)
{
    if (jamKerja >= 9);
    {
        return 10000;
    }
    return 0;

}


int transport (int jamKerja)
{
    if (jamKerja >= 10 );
    {
        return 13000;
    }
    return 0;
}


int main () {
string NIP, Nama;
{
int JamKerja, GajiPokok, UangLembur, UangMakan, UangTransport, Total;

  cout << "Masukkan NIP" << endl;
  cin >> NIP;
  cout << "Masukkan Nama :" << endl;
  cin >> Nama;
  cout << "Masukkan Jam kerja :" << endl;
  cin >> JamKerja;

    GajiPokok = pokok (JamKerja);
    UangLembur = lembur (JamKerja);
    UangMakan = makan (JamKerja);
    UangTransport = transport (JamKerja);
    Total = pokok + lembur + makan + transport;

cout << "Gaji pokok anda = " << endl;
cout << "Rp. "  << GajiPokok;
cout << "Bonus lembur anda = " << endl;
cout << "Rp. " << UangLembur;
cout << "Bonus makan anda = " << endl;
cout << "Rp. " << UangMakan;
cout << "Bonus transport anda = " << endl;
cout << "Rp. " << UangTransport;
cout << "Anda mendapat gaji total Rp : " << endl;
cout << "Rp. " << Total;

}
}



}
