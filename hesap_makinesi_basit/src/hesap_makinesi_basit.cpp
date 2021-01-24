#include <iostream>
using namespace std;
void hesap();//hesaplama yapacaðýmýz fonksiyonu tanýmladýk
int main() {
	hesap();// ana program içerisinde hesapla fonksiyonunu çaðýrdýk
	system("PAUSE");
	return 0;
}
void hesap(){
	// Basit bir makine olduðu için önce 2 deðiþkenle çalýþacaðýz.
	int sayi1,sayi2;// 2 adet sayi tanýmlýyoruz.
	char a;//iþlem kontrolü için karakter tanýmlýyoruz.
	do{
		//sayilari alýyoruz
		cout << endl;
	    cout << "1. sayiyi giriniz:\t";
	    cin >> sayi1;
	    cout << "2. sayiyi giriniz:\t";
	    cin >> sayi2;
	    cout << endl;
	    //Ýþelemi öðreniyoruz.
		cout << "          Bir islem seciniz" << endl;
		cout << "   (+)\t";
		cout << "   (-)\t";
		cout << "   (*)\t";
		cout << "   (/)\t";
		cout << "   (%)\n";
		cout << "\tCikmak icin (e) tusuna baisn\n" << endl;//eger programdan çýkmak istiyorsa 'e' harfine bassýn
		cin >> a;
		cout << endl;
		//seçilen iþlemlere uygun bir þekilde kontrol yapýlarýmýz çalýþacak.
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
		case 'e': exit(1);//exit(1) komutu kullanýcý e harfini girdiyse eðer programý sonlandýracak.
		 break;
		default: cout << "!!!!!!!!!!!HATALÝ GÝRÝS!!!!!!!!!!!!" << endl;
		}
	}while(1);// her þey doðru giderse eðer do while döngüsü sonsuza kadar devam edecek.
}
