#include <iostream>

using namespace std;

int main()
{
//Deklarasi variabel 
int CP_Book, C_hand, Dict, Marker, Calc;
float Book, Stat, Disc, FixBook, FixStat;

//Menampilkan daftar harga
cout<<"\n\t\t=== Daftar barang peserta harganya ==="<<endl;
cout<<"\t\t| C programming Book : Rp 105.000,00 |"<<endl;
cout<<"\t\t| C Handbook			: Rp 188.000,00 |"<<endl;
cout<<"\t\t| Dictionary			: Rp 55.000,00	|"<<endl;
cout<<"\t\t| WhiteBoard			: Rp 10.000,00	|"<<endl;
cout<<"\t\t| Calculator			: Rp 35.000,00	|"<<endl;
cout<<"\t\t======================================\n"<<endl;

//Memasukkan jumlah barang yang dibeli
cout<<"Masukkan jumlah C Programming Book yang dibeli : "; cin>>CP_Book;
cout<<"Masukkan jumlah C Handbook yang dibeli		  : "; cin>>C_Hand;
cout<<"Masukkan jumlah Dictionary yang dibeli		  : "; cin>>Dict;
cout<<"Masukkan jumlah Whiteboard Marker yang dibeli  : "; cin>>Marker;
cout<<"Masukkan jumlah Calculator yang dibeli		  : "; cin>>Calc;
cout<<"\n"<<endl;

//Menampilkan customer's bill
cout<<"\t========================= Customer's Bill ================================="<<endl;
cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
cout<<"\t| ------ \t----------\t\t-------------\t------------|"<<endl;
cout<<"\t|   "<<CP_Book<<"\t\tC Programming Book \t105000 \t\t"<<CP_Book*105000<<"\t	|"<endl;
cout<<"\t|	 "<<C Hand<<"\t\tC Handbook \t\t188000 \t\t"<<C Hand*188000<<"\t	|"<<endl;
cout<<"\t|	 "<<Dict<<"\t\tDictionary \t\t55000 \t\t"<<Dict*55000<<"\t	  |"<<endl;
cout<<"\t|	 "<<Marker<<"\t\tWhiteboard Marker \t1000 \t\t"<<Marker*100000<<"\t		|"<<endl;
cout<<"\t|	 "<<Calc<<"\t\tCalculator \t\t35000 \t\t"<<Calc*35000<<"\t		|"<endl;
cout<<"\t| --------------------------------------------------------------------|"<<endl;
Book = CP_Book*105000+C_Hand*188000;
Disc = 6.25/100*Book;
Stat = Dict*55000+Marker*10000+Calc*35000;
cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t	|"<<endl;
cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Dics<<"	  \t	|"<<endl;
cout<<"\t|\t\t\tHarga Setelah Diskon \t:  "<<Book-Disc<<"\t		|"<<endl;
FixBook = Book-Disc;
Disc = 3.00/100*Stat;
cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"	|t	  |"<<endl;
cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Dics<<"	\t	  |"<<endl;
cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"	\t		|"<<endl;
FixsStat = Stat-Disc;
cout<<"\t|\t\t\t-------------------------------------------- |"<<endl;
cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook+FixStat<<"\t	|"<<endl;
cout<<"\t==================================================================="<<endl;
}
