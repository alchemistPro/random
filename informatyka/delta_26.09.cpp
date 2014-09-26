#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
	double a,b,c,delta,x1,x2,d;
	cout<<"podaj a";
	cin>>a;
	cout<<"podaj b";
	cin>>b;
	cout<<"podaj c";
	cin>>c;
	b=b*b;
	delta=b-(4*a*c);
	d=sqrt(delta);
	if (delta > 0) {
	x1=(-b-d)/(2*a);
	x2=(-b+d)/(2*a);
	cout<<"x1= ";
	cout<<x1<<endl;
	cout<<"x2= ";
	cout<<x2;}
	else if (delta < 0) {
	cout<<"delta ujemna przegrales";}
	else{
	x1=(-b)/(2*a);
	cout<<"x1= ";}
	return 0;
	//Hofman plz dont do this
}
