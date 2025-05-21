#include<iostream>
using namespace std;
//int main()
//{
//	int sum = 0;
//	for (int v1 = 1;v1 <= 10;++v1) {
//		sum += v1;
//	}
//	cout << sum << endl;
//	return 0;
//}
//int main() {
//	int sum = 0, v;
//	while (cin >> v) {
//		sum += v;
//		cout << sum << endl;
//	}
//	
//	return 0;
//}
int main() {
	int c, v;
	if (cin >> c) {
		int s = 1;
		while (cin >> v) {
			if (v == c) {
				s++;
			}
			else
			{
				cout << c << "有" << s << "次"<<endl;
				c = v;
				s = 1;
			}
		}
		cout << c << "有" << s << "次"<<endl;
	}
}