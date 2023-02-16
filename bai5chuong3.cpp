#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class hoadon{
	private:
		char mvt[10], // Ma vat tu
		     t[30],   // Ten vat tu
		     loai[6], // Loai phieu
		     nl[11]; // Ngay lap
		float kl, // khoi luong
		      dg, // Don Gia
		      tt; // Thanh tien
		      
	public:
		void nhap();

		void in();

		friend float tt(hoadon hd);
		

		
};

void hoadon::nhap(){
	fflush(stdin);
	
	cout << "\tNhap ma vat tu: ";
	gets(mvt);
	
	cout <<"\tNhap ten vat tu:";
	gets(t);
	
	cout <<"\tNhap loai phieu: ";
	gets(loai);
	
	cout <<"\tNgay lap: ";
	gets(nl);
	
	cout <<"\tNhap khoi luong: ";
	cin >> kl;
	
	cout <<"\tNhapdon gia: ";
	cin >>dg;
	
	tt =kl*dg;
	
}

void hoadon::in(){
	//printf("Mavt|Ten vat tu|loai|Ngay lap|Khoi luong|don gia");
	printf("%10s|%30s|%6s|%11s|%10.2f|%12.2f",mvt,t,loai,nl,kl,dg);
}

float tt(hoadon hd){
	hd.kl*hd.dg;
}

int main(){
	
	hoadon hd[100],tg;
	int n,i,j;
	cout <<"Nhap so hoa don: ";cin >> n;
	2
	for(i=0;i<n;i++){
		cout << "nhap hoa don thu: " << i+1<<"\n" ;
		hd[i].nhap();
	}
	
	float tong =0;
	for(i=0;i<n;i++){
		tong=tong+tt(hd[i]);
		
	}
	cout<< "Tong tien:"<<tong;
	
}
