#include <iostream>
using namespace std;
void hesap();//hesaplama yapaca��m�z fonksiyonu tan�mlad�k
int main() {
	hesap();// ana program i�erisinde hesapla fonksiyonunu �a��rd�k
	system("PAUSE");
	return 0;
}
void hesap(){
	// Basit bir makine oldu�u i�in �nce 2 de�i�kenle �al��aca��z.
	int sayi1,sayi2;// 2 adet sayi tan�ml�yoruz.
	char a;//i�lem kontrol� i�in karakter tan�ml�yoruz.
	do{
		//sayilari al�yoruz
		cout << endl;
	    cout << "1. sayiyi giriniz:\t";
	    cin >> sayi1;
	    cout << "2. sayiyi giriniz:\t";
	    cin >> sayi2;
	    cout << endl;
	    //��elemi ��reniyoruz.
		cout << "          Bir islem seciniz" << endl;
		cout << "   (+)\t";
		cout << "   (-)\t";
		cout << "   (*)\t";
		cout << "   (/)\t";
		cout << "   (%)\n";
		cout << "\tCikmak icin (e) tusuna baisn\n" << endl;//eger programdan ��kmak istiyorsa 'e' harfine bass�n
		cin >> a;
		cout << endl;
		//se�ilen i�lemlere uygun bir �ekilde kontrol yap�lar�m�z �al��acak.
		switch(a){
		case '+': cout << "Sonuc: " << sayi1 << " + " << sayi2 << " = " << sayi1+sayi2 << endl;
		 break;
		case '-': cout << "Sonuc: " << sayi1 << " - " << sayi2 << " = " << sayi1-sayi2 << endl;
		 break;
		case '*': cout << "Sonuc: " << sayi1 << " * " << sayi2 << " = " << sayi1*sayi2 << endl;
		 break;
		case '/': cout << "Sonuc: " << sayi1 << " / " << sayi2 << " = " << sayi1/sayi2 << endl;
		 break;
		case '%': cout << "Sonuc: " << sayi1 << " % " << sayi2 << " = " << sayi1%sayi2 << endl;
		 break;
		case 'e': exit(1);//exit(1) komutu kullan�c� e harfini girdiyse e�er program� sonland�racak.
		 break;
		default: cout << "!!!!!!!!!!!HATAL� G�R�S!!!!!!!!!!!!" << endl;
		}
	}while(1);// her �ey do�ru giderse e�er do while d�ng�s� sonsuza kadar devam edecek.
}
