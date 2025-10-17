#include <iostream>
using namespace std;

template <class T>
void Sum(T a, T b) {
	cout << a + b << endl;
}
template <class T, class B>
void Sum(T a, B b)
{
	cout << a + b << endl;
}
template <class A, cls>
void Sum(T a, T b) {
	cout << a + b << endl;
}



int main() {

	Sum(1, 2);
	Sum(3.3, 4.5);
	Sum('A', 'B');

}
