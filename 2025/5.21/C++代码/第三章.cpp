#include<string>
#include<iostream>
#include<vector>
using namespace std;
int main() {
	//string s1;
	//string s2(s1);/*等价string s2 = s1;*/
	//cout << s1 << s2 << endl;
	//string s3("value");/*等价string s3 = "value";*/
	//cout << s3 << endl;
	//string s4 (10, 'c');
	//cout << s4 << endl;
	/*string word;
	while (cin >> word) {
		if(!word.empty())
			cout << word << endl;
	}*/
	/*while (getline(cin,word)) {
		if(word.size()>10)
			cout << word << endl;
	}*/
	/*string s("hello!!!");*/
	/*decltype(s.size()) n = 0;
	for (auto c : s) {
		if (ispunct(c))
		{
			++n;
		}
	}
	cout << n << endl;*/
	/*for (auto& c : s) {
		c = toupper(c);
	}
	cout << s << endl;*/
	/*string s("some string");
	for (decltype(s.size())index = 0;index != s.size() && !isspace(s[index]);++index)
		s[index] = toupper(s[index]);
	cout << s << endl;*/
	/*const string he = "0123456789ABCDEF";
	string result;
	string::size_type n;
	while (cin >> n) {
		if (n < he.size())
			result += he[n];
	}
	cout << result << endl;*/
	/*string h = "0123456789ABCDEF";
	for (auto &c : h) {
		c = 'x';
	}
	cout << h << endl;*/

	//string s = "fsdf,sdf.dsf/dsf...";
	//for (auto c : s) {
	//	if (!ispunct(c)) {
	//		cout << c;
	//	}
	//}

	/*vector<int> v1{1,2,3,4,5,6,7,8,9};
	for (auto& i : v1) {
		i = i * i;
	}
	for (auto i : v1) {
		cout << i << " ";
	}*/

	/*vector<string> v;
	string s;
	while (cin >> s) {
		v.push_back(s);
	}
	for(auto &i:v){
		for (auto& j : i) {
			j = toupper(j);
		}
	}
	for (auto i : v) {
		cout << i << " ";
	}*/

	vector<int> v;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}
	int sum = 0;
	/*for (int i = 0;i < v.size()-1;i++) {
		sum = v[i] + v[i + 1];
		cout << sum << " ";
	}*/
	for (int i = 0;i < v.size() / 2;i++) {
		sum = v[i] + v[v.size() - 1 - i];
		cout << sum << " ";
	}
	if (v.size() % 2 != 0) {
		cout << v[v.size() / 2] << " ";
	}
	return 0;
}