#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

typedef struct pecahan{

	int pb;

	int py;

};

int main(int argc, char *argv[])

{
printf("PROGRAM MENGUBAH BILANGAN PECAHAN\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

	pecahan p1,p2;

	cout<<"Masukkan Pembilang = ";

	cin>>p1.pb;

	cout<<"Masukkan Penyebut = ";

	cin>>p1.py;

	cout<<"\t      "<<p1.pb<<endl;

	cout<<"\tp1 =      -"<<endl;

	cout<<"\t      "<<p1.py<<endl;

	if ("/")

	{

		cout<<" Hasilnya = "<<(p1.pb)/(p1.py)<<endl;

	}

	return 0;

}

