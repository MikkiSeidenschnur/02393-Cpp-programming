//// EXERCISE 1 
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//char dataset;
//vector<int> a,b;
//
//void print(vector<int> const& input)
//{
//	for (int i = 0; i < input.size(); i++) {
//		cout << input.at(i) << ' ';
//	}
//}
//
//int main() {
//
//	int tmp;
//
//	while (scanf("%s", &dataset, 1) != EOF) {
//		cin >> tmp;
//
//		if (dataset == 'a') {
//			a.push_back(tmp);
//		}
//
//		else if(dataset == 'b') {
//			b.push_back(tmp);
//		}
//	}
//
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//
//	print(a);
//	print(b);
//
//	return 0;
//}

//// EXERCISE 2 
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//char dataset;
//vector<int> a, b;
//
//void print(vector<int> const& a, vector<int> const& b)
//{
//	int alength = a.size();
//	int blength = b.size();
//	int length = (alength < blength) 
//		? blength 
//		: alength;
//	
//	for (int i = 0; i < length; i++) {
//		
//		if (alength > i) {
//			cout << a.at(i) << ' ';
//		}
//		
//		if (blength > i) {
//			cout << b.at(i) << ' ';
//		}
//	}
//}
//
//int main() {
//
//	int tmp;
//
//	while (scanf("%s", &dataset, 1) != EOF) {
//		cin >> tmp;
//
//		if (dataset == 'a') {
//			a.push_back(tmp);
//		}
//
//		else if (dataset == 'b') {
//			b.push_back(tmp);
//		}
//	}
//
//	print(a, b);
//
//	return 0;
//}

// EXERCISE 3
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

char dataset;
vector<int> a, b;

void dot_product(vector<int> const& a, vector<int> const& b)
{
	int scalar = 0;
	int alength = a.size();
	int blength = b.size();

	int length = (alength > blength)
		? blength
		: alength;
	
	for (int i = 0; i < length; i++) {
		scalar += a.at(i) * b.at(i);
	}

	cout << scalar;
}

int main() {

	int tmp;

	while (scanf("%s", &dataset, 1) != EOF) {
		cin >> tmp;

		if (dataset == 'a') {
			a.push_back(tmp);
		}

		else if (dataset == 'b') {
			b.push_back(tmp);
		}
	}

	dot_product(a, b);

	return 0;
}