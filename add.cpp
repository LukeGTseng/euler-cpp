Testing

#include <iostream>
using namespace std;
int a;
int b;
int add(int x,int y) {
int z = x + y;

return z;
}

int main() {
cout << "Enter a number:\n";
cin >> a;
cout << "Enter another number:\n";
cin << b;
cout << "The sum of the numbers are " << a+b << endl;

}
