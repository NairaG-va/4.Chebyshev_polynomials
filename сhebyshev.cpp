//Многочлены Чебышева
#include <iostream>
#include <math.h>
#include <vector> //для работы с векторами

double function(double x);
double polinom(double x);

int main(){
	
	std::vector <double> vec = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
	
	 for (int k = 0; k < 11; k++)
	 {
		 std::cout << " x^3 = " << function(vec[k]) << " P(x) = " << polinom(vec[k]) << " abs = " << fabs(polinom(vec[k]) - function(vec[k])) << "\n";
	 }
	 
	
	return 0;
}

double function(double x){
	return x*x*x;
}

double polinom(double x){
	return (3.0/2.0)*x*x - (9.0/16.0)*x + (1.0/32.0);
}
