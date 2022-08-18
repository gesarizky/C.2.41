/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

struct SISWA {
  char nama[25];
  int usia;
};

int main () {
  SISWA siswa, salinan_siswa;
  
  // Menggunakan memcpy() untuk menyalin string
  memcpy(siswa.nama, "Gesa Nugraha", 13);
  siswa.usia = 19;

  // Menggunakan memcpy() untuk menyalin struktur
  memcpy(&salinan_siswa, &siswa, sizeof(siswa));

  // Menampilkan data salinan_siswa
  cout<<"SALINAN DATA SISWA"<<endl;
  cout<<"Nama: "<<salinan_siswa.nama<<endl;
  cout<<"Usia: "<<salinan_siswa.usia;

  return 0;
}
