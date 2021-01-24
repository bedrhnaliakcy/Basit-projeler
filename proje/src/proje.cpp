#include <cstring>
#include <string>
#include <iostream>
using namespace std;
class otel{
	string *musteri_adi[100],*musteri_soyadi[100];
	int toplam,sayac1,sayac2;
	enum statu{
		bos,dolu
	}odalar[45];
public:
	otel();
	void oda_isletmesi();
	void oda_rezervasyon();
	void oda_bosaltma();
	void oda_musterilerin_sayisi();
	void oda_yatak_odasi_raporu();
	void oda_seminer_odasi_raporu();
	void gelir();
};
otel::otel(){
	sayac1=0;
	sayac2=0;
	toplam=0;
	oda_isletmesi();
}
void otel::oda_isletmesi(){
	for(int a=1;a<46;a++)
		odalar[a]=bos;
	int sayi;
	do{
		cout << "\n\t\t--- AKCAY OTEL ---\n" << endl;
		cout << "\t\t 1.Oda Rezervasyonu" << endl;
		cout << "\t\t 2.Oda Bosaltma" << endl;
		cout << "\t\t 3. Dolu Oda Sayisi" << endl;
		cout << "\t\t 4. Yatak Odasi Raporu" << endl;
		cout << "\t\t 5. Seminer Odasi Raporu" << endl;
		cout << "\t\t 6. Gunluk Toplam Gelir" << endl;
		cout << "\t\t 7. Cikis Yap...\n" << endl;
		cin >> sayi;
		switch(sayi){
		case 1: oda_rezervasyon();
		  break;
		case 2: oda_bosaltma();
		  break;
		case 3: oda_musterilerin_sayisi();
		  break;
		case 4: oda_yatak_odasi_raporu();
		  break;
		case 5: oda_seminer_odasi_raporu();
		  break;
		case 6: gelir();
		  break;
		case 7: exit(1);
		  break;
		default: cout << "\n Yanlis bir deger girdiniz. Lutfen dogru bir deger giriniz: " << endl;
		}
	}while(sayi!=7);
}
void otel::oda_rezervasyon(){
	int sayi,x2,i=1,j=6,k=16;
	string ad,o_ad;

	cout << "\n\t\t- Lutfen bir oda tipi seciniz -\n" << endl;
	cout << "\t\t 1.1 kisilik oda (40 tl) " << endl;
	cout << "\t\t 2.1 kisilik oda (60 tl) " << endl;
	cout << "\t\t 3.1 seminer odasi (300 tl) " << endl;
	cin >> sayi;

	switch(sayi){
	case 1:
		for(;j<16;j++){
			if(odalar[j]!=dolu){
				odalar[j]=dolu;
				cout << "Adiniz : ";
				cin >> ad;
				cout << "Soyadinizi giriniz : ";
				cin >> o_ad;
				cout << "Kac gun kalacaksiniz : ";
				cin >> x2;
				toplam+=x2*40;
				sayac2++;
				musteri_adi[j]=new string;
				*musteri_adi[j]=ad;
				musteri_adi[j]=new string;
				*musteri_adi[j]=o_ad;
				break;
			}
		}
		if(j==16)
			cout << "Maalesef butun 1 kisilik odalarimiz dolu." << endl;
		break;
	case 2:
		for(;k<46;k++){
			if(odalar[k]!=dolu){
				odalar[k]=dolu;
				cout << "Adiniz : ";
				cin >> ad;
				cout << "Soyadinizi giriniz : ";
				cin >> o_ad;
				cout << "Kac gun kalacaksiniz : ";
				cin >> x2;
				toplam+=x2*40;
				sayac2++;
				musteri_adi[k]=new string;
				*musteri_adi[k]=ad;
				musteri_adi[k]=new string;
				*musteri_adi[k]=o_ad;
				break;
			}
		}
		if(k==46)
			cout << "Maalesef butun odalarimiz dolu." << endl;
		break;
	case 3:
		for(;i<6;i++){
			if(odalar[i]!=dolu){
				odalar[i]=dolu;
				cout << "Adiniz : ";
				cin >> ad;
				cout << "Soyadinizi giriniz : ";
				cin >> o_ad;
				cout << "Kac gun kalacaksiniz : ";
				cin >> x2;
				toplam+=x2*40;
				sayac2++;
				musteri_adi[i]=new string;
				*musteri_adi[i]=ad;
				musteri_adi[i]=new string;
				*musteri_adi[i]=o_ad;
				break;
					}
				}
		if(i==6)
			cout << "Maalesef butun odalarimiz dolu." << endl;
		break;
	default: cout << "Lutfen dogru basiniz" << endl;
	}
}
void otel::oda_bosaltma(){
	cout << "Bosaltacaginiz oda numarasi: ";
	int sayi;
	cin >> sayi;
	if(odalar[sayi]==dolu){
		if(sayi>0 && sayi<6){
			odalar[sayi]=bos;
			delete musteri_adi[sayi];
			delete musteri_soyadi[sayi];
			sayac1--;
			cout << "Oda silindi" << endl;
		}
		else
			if(sayi>5&&sayi<46){
				odalar[sayi]=bos;
				delete musteri_adi[sayi];
				delete musteri_soyadi[sayi];
				sayac2--;
				cout << "Oda silindi" << endl;
			}
	}
	else
		cout << "Lutfen oda numarasini daogru giriniz...\n" << endl;
}
void otel::oda_musterilerin_sayisi(){
	cout << "dolu oda sayisi: " << sayac1+sayac2 << endl;
}
void otel::oda_yatak_odasi_raporu(){
	if(sayac2==0)
		cout << "Butun odalar bos" << endl;
	else{
		cout << "Oda Numarasi Musteri adi Musteri Soyadi   " << endl;
		cout << "======================================================================" << endl;
		for(int i=6;i<46;i++)
			if(odalar[i]==dolu)
				cout << i << "\t\t" << *musteri_adi[i] << "\t\t" << *musteri_soyadi[i] << endl;
	}
}
void otel::oda_seminer_odasi_raporu(){
	if(sayac1!=6){
		cout << "Seminer odalar dolu" << endl;
		for(int i=1;i<6;i++)
			if(odalar[i]==dolu)
				cout << "Oda numarasi: " <<i << endl;
	}
	else cout << "Butun seminer odalari bos " <<endl;
}
void otel::gelir(){
	cout << "Gelir : "<< toplam;
}
int main() {
	otel a;
	system("PASUE");
	return 0;
}
