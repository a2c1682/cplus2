//stringクラスの様々な機能を使うプログラム
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2, s3, s4;

	s1 = "magicArrow";
	s2 = "tangHoonLeong";
	s3 = "superMinotaur";

	if (s1 > s2) {
		cout << "big!" << endl;
	} 
	else if (s1 < s2) {
		cout << "small!" << endl;
	}
	else {
		cout << "equal!" << endl;
	}

	s4 = s2 + s3;
	cout << s4 << endl;

	cout << s3.length() << endl;

	cout << s2.substr(5,3) << endl;

	cout << s2[5] << endl;

	cout << s1.find("rr") << endl;

	s3.clear();

	if (s3.empty()) {
		cout << "It's empty!" << endl;
	}
	else {
		cout << "It's not empty!" << endl;
	}

	return 0;
}
