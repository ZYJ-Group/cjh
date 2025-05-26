#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	//unsigned scores[11] = {};
	//unsigned grade;
	//while (cin >> grade) {
	//	if (grade <= 100) {
	//		scores[grade / 10]++;
	//	}
	//	else {
	//		cout << "error" << endl;
	//	}
	//}
	//for (auto i : scores) {
	//	cout << i << endl;
	//}


	//int a[10] = {};
	//for (int i=0;i<10;i++)
	//{
	//	a[i] = i;
	//}
	//for (int i = 0;i < 10;i++)
	//{
	//	cout << a[i] << endl;
	//}

	//vector<int> b(a, a + 10);
	//for (auto& i : b) {
	//	i *= i;
	//}
	//for (auto i : b) {//没有&引用
	//	i *= i;
	//}
	//for (auto i : b) {
	//	cout << i << endl;
	//}

	/*int a[5] = { 1,2,3,4,5 };
	int* p = a, * q = a + 5;
	while (p!=q) {
		*p = 0;
		p++;
	}
	for (auto i : a) {
		cout << i << endl;
	}*/

	/*int a1[5] = { 1,2,3,4,5 };
	int a2[6] = { 1,2,3,4,5,6 };
	int* p1 = a1, * q1 = a2;
	int* p2 = end(a1), * q2 = end(a2);
	bool flag;
	while (p1 != p2 && q1 != q2) {
		if (*p1 != *q1) {
			flag = false;
			break;
		}
		p1++;
		q1++;
	}
	if (p1 == p2 && q1 == q2)
	{
		flag = true;
	}
	else
	{
		flag = false;
	}
	if (flag) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}*/


	/*int a1[5] = { 1,2,3,4,5 };
	int a2[5] = { 1,2,3,4,5 };
	vector<int> b1(a1, a1 + size(a1));
	vector<int> b2(a2, a2 + size(a2));
	if (b1 == b2) {
		cout << "相等" << endl;
	}
	else {
		cout << "不相等" << endl;
	}*/


	//const char ca[] = { 'h','e','l','l','o' };
	//const char* p = ca;
	//for (auto i : ca) {
	//	cout << i << endl;
	//}
	//while (*p) {//ca没有空字符不会结束
	//	cout << *p << endl;
	//	p++;
	//}


	//string a1 = "hello";
	//string a2 = "cccccc";
	//string a3;
	//a3 = a1 + a2;
	//cout << a3 << endl;


	/*int a[5] = { 1,2,3,4,5 };
	vector<int>b(a, a + size(a));
	for (auto i:b)
	{
		cout << i << endl;
	}*/


	/*int a[5];
	vector<int>b(5, 1);
	for (int i = 0; i < size(a); i++)
	{
		a[i]=b[i];
	}
	for (auto i : a)
	{
		cout << i << endl;
	}*/


	/*int a[3][6] = { 0 };
	for (auto &row : a)
	{
		for (auto& col : row)
		{
			col=1;
		}
	}
	for (const auto& row : a)
	{
		for (auto &col : row)
		{
			cout << col << endl;
		}
	}*/


	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	for (auto q = begin(a);q != end(a);q++) {
		for (auto& i : *q) {
			i *= 2;
		}
	}
	int (*p)[4];
	for (p = a;p != a + 3;p++) {
		for (auto i : *p) {
			cout << i << endl;
		}
	}
	return 0;
}