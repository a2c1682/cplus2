#include <iostream>
using namespace std;

int getFree(int age) {
	int fee;

	if (age < 20) {
		fee = 500;
	}
	else {
		fee = 1000;
	}

	return fee;
}

int main() {
	int age, fee;

	cout << "please enter your age:";
	cin >> age;
	fee = getFree(age);
	cout << "The fee is " << fee << "." << endl;

	return 0;
}
