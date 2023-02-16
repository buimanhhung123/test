#include<iostream>
#include<conio.h>
using namespace std;

struct ps{
    int ts, ms;
};

int nhap(ps &a){
    //cout<< "Tu so:";cin >> a.ts;
    //cout<< "Mau so:";cin >> a.ms;
    cin >> a.ts;
    cin >> a.ms;
}

int in( ps &a){
    cout << a.ts <<"/"<< a.ms<<"\n";
}

int tgps(ps &a)// toi gian phan so
{
    int b = a.ts, c = a.ms;
    while(b!=c){
        if(b>c) b=b-c;
        else c=c-b;
    }
    
    a.ts = a.ts/b;
    a.ms = a.ms/c;

}

ps sum(ps a, ps b){
    ps t;
    
    t.ts = (a.ts*b.ms)+(b.ts*a.ms);
    t.ms = a.ms*b.ms;
    return t;
    cout << t.ts<< "/"<<t.ms;
    
    

}

int main(){
	ps a,b;
	nhap(a);
	in(a);
	nhap(b);
	in(b);
	sum(a,b);
	
	
	
	
	
    
}

