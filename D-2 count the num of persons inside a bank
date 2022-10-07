#include <iostream>
using namespace std;

class bank {
		int count;

	public:
		void setcount(int c) {
			count = c;
		}

		void operator++() {
			count++;
		}

		void operator--() {
			count--;
		}
		int getcount() {
			return count;
		}
};

int main() {
	bank b;
	int initial, present, left;
	cout << "Enter the initial no of people: " << endl;
	cin >> initial;
	b.setcount(initial);
	cout << "Enter the present number: " << endl;
	cin >> present;
	for (int i = initial + 1; i <= present; i++) {
		++b;
	}
	cout << "Enter the person left: " << endl;
	cin >> left;
	for (int i = 1; i <= left; i++) {
		--b;
	}
	cout << "Total person present in bank: " << b.getcount();
	return 0;
}
