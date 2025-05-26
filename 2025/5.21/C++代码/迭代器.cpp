#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
// 迭代器的基本使用
//string str = "hello world";
/*if (str.begin() != str.end()) {
	auto it = str.begin();
	*it = toupper(*it);
}
cout << str << endl;*/

/*for (auto it = str.begin();it != str.end();it++) {
	*it = toupper(*it);
}
cout << str << endl;*/

//vector<string>s = {"wad","","wasedwqa"};
//for (auto it = s.begin();it != s.end()&&!it->empty();it++) {
//	cout << *it << endl;
//}

//vector<int> v(10, 5);
//for (auto it = v.begin();it != v.end();it++) {
//	*it = *it * 2;
//	cout << *it << endl;
//}

//vector<int>v = { 1,2,3,4,5,6,7,8,9,10 };
//auto s = 8;
//auto beg = v.begin();
//auto end = v.end();
//auto mid = beg + (end - beg) / 2;
//while (mid != end && *mid != s) {
//	if (s < *mid) {
//		end = mid;
//	}
//	else
//	{
//		beg = mid + 1;
//	}
//	mid = beg + (end - beg) / 2;
//}
//if (mid != end) {
//	cout << "find" << endl;
//}
//else {
//	cout << "not find" << endl;
//}
	unsigned scores[11] = {0,0,0,0,0,0,0,0,0,0,0};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			scores[grade / 10]++;
		}
		else {
			cout << "error" << endl;
		}
	}
	for (auto i : scores) {
		cout << i << endl;
	}





return 0;
}