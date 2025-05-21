#include<iostream>
using namespace std;
//int main()
//{
//	int sum = 0, v1 = 0;
//	while (v1 < 10) {
//		++v1;
//		sum += v1;
//	}
//	std::cout << "Sum of 1 to 10 inclusive is"
//		<< sum << std::endl;
//	return 0;
//}
//Á·Ï°
//int main()
//{
//	int sum = 0, v1 = 50;
//	while (v1 <= 100) {
//		sum += v1;
//		++v1;
//	}
//	std::cout << "Sum of 1 to 10 inclusive is"
//		<< sum << std::endl;
//	return 0;
//}
//int main()
//{
//	int v1 = 10;
//	while (v1 >= 0) {
//		cout << v1 << endl;
//		--v1;
//		
//	}
//	
//	return 0;
//}
int main()
{
	int v1 ,v2;
	int min, max;
	cin >> v1 >> v2;
	if (v1 >= v2) {
		max = v1;
		min = v2;
	}
	else
	{
		max = v2;
		min = v1;
	}
	while (min<=max) {
		cout << min << endl;
		++min;

	}

	return 0;
}