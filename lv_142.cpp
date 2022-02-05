//siringクラスで文字列の長さを求めるプログラム
#include <iostream>
#include <string>
using namespace std;

int main() {
	int ans;
	string s;

	s = "hey, glory road going man!";

	ans = s.length();

	cout << ans << endl;

	return 0;
}

//strlen関数で文字列の長さを求めるプログラム
#include <iostream>
#include <string>
using namespace std;

int main() {
	int ans;

	ans =  strlen("hello, universe");

	cout << ans << endl;

	return 0;
}
