#include <iostream>
#include <cstdlib> //biblioteki
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
	char z;
	int n;
	unsigned long long s;
	do{
	cout<<"Enter the number: ";
	cin>>n;
	s=1;
	for(int i=1; i<=n; i++)
		s=s*i;
	cout<<"Silnia is: "<<n<<"wynosi"<<s<<endl;
	cout<<"Czy chcesz kontynuować? (Y/N): ";
	cin>>z;
	}while(z!='n');
	system("pause");
	

	
}
