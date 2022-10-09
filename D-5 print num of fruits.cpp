#include <iostream>
using namespace std;

class Fruit {
	public:
		int num_fruits;
};

class Apples: public Fruit {
	public:
		Apples() {
			num_fruits = 10;
		}
};

class Mangoes: public Fruit {
	public:
		Mangoes() {
			num_fruits = 20;
		}
};

int main() {
	Apples a;
	Mangoes m;
	cout << "Apples: " << a.num_fruits << endl;
	cout << "Mangoes: " << m.num_fruits << endl;
	cout << "Total: " << a.num_fruits + m.num_fruits;
	return 0;
}
