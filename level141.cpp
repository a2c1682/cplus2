#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main() {
	
	queue <string> q;

	q.push("data1");
	q.push("data2");
	q.push("data3");

	cout << "***** キュー ******" << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	stack <string> s;

	s.push("dataX");
	s.push("dataY");
	s.push("dataZ");

	cout << "***** スタック *****" << endl;
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}	

	return 0;
}
