#include <iostream>
#include <cstdlib> //biblioteki
#include <cmath>
#include <iomanip>


using namespace std;

double i = 1, j;

int main(){
	while (i <= 10)
	{
		j = pow(i, 2);  //pow = power = do potęgi ; tutaj do potęgi 2
		cout<<endl<<"kwadrat "<<i<<" = "<<j;
		i += 1.5;
	}

cout<<endl<<"Press any key...";
return 0;

	
}
