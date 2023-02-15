#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
class ps
{
	int ts,ms; // ngam dinh quyen truy xuat privite
	
	public:
		void nhap(){
			cout <<"tu so:";
			cin >> ts;
			cout <<"mau so:";
			cin>> ms;
		};
		void in();
		
		int ssnh(ps a, ps b){
			if(float(a.ts)/a.ms < float(b.ts)/b.ms) return 1;
			
			else return 0;
		}
		
	
	
};
 void ps::in(){
 	cout<<ts<<"/"<<ms;
 }
int main(){
	ps ob;
	ob.nhap();
	cout<<"phan so vua nhap la:";
	ob.in();
	ps a[10];
	int n, i;
	cout<<"nhap so phan so";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"phan so thu"<< i+1 <<"=\n";
		a[i].nhap();
	}
	for(i)
	
}
