#include <iostream>
//The prime factors of 13195 are 5,7,13 and 29. What is the largest prime factor of the number 600851475143? Answer: 6857
using namespace std;

int primeChecker(int a) {
	int c = 0;

	for(int b = 1;b<a;b++) {
		if(a%b == 0) {

		c++;

 		}
 	}
	if(c == 1) { 

	return a;

	}else{

	return 0;

	}
}
int factorFinder(int a) {
	int b;
	int c;

	for(b = 2;b<a;b++) {
		if(primeChecker() =) {
			
		return a/b;
			
		}
	}

}

int main() {



cout << factorFinder() << endl;




}
