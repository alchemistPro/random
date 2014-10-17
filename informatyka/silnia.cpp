#include <iostream>
#include <cstdlib> //biblioteki
#include <cmath>
#include <iomanip>


using namespace std;

int main(){
	
	int n;
	unsigned long long s;
	
	cout<<"Enter the number: ";
	cin>>n;
	s=1;
	for(int i=1; i<=n; i++)
		s=s*i;
	cout<<"Silnia is: "<<n<<"wynosi"<<s<<endl;
	
	system("pause");
	

	
}
