//EXERCISE 1
//Gaussian sum
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    int sum = 0;
//
//    cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//
//        sum += i;
//    }
//
//    cout << sum << endl;
//
//}

//EXERCISE 2
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int sum = 0;
//
//	cin >> n;
//
//	for (int i = 0; i <= n; i++) {
//		if (i % 2 == 0) {
//			sum += i;
//		}
//		
//	}
//
//	cout << sum << endl;
//}

//EXERCISE 3
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int i = 2;
//
//	cin >> n;
//
//	while (n > 1) {
//		if (n % i == 0) {
//			n = n / i;
//			cout << i;
//			if (n > 1) {
//				cout << " * ";
//			}
//		}
//		else {
//			i++;
//		}
//	}
//	cout << endl;
//}

//EXERCISE 4
#include <iostream>
#include <cmath>

using namespace std;

double pi(int n)
{
	double leibniz = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		leibniz = leibniz + pow(-1, i) / (2 * i + 1);
	}

	return leibniz * 4;
}

int main()
{
	int n;
	cin >> n;

	cout << pi(n) << endl;

	return 0;
}


