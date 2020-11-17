//using namespace std;
//
//#include <iostream>
//#include <vector>
//
//void recursive_printer(vector<int> &vect, vector<int>::const_iterator i) {
//
//    if (i == vect.begin()-1) {
//        return;
//    }
//
//    cout << *i << " ";
//    recursive_printer(vect, --i);
//}
//
//int main()
//{
//    int tmp = 0;
//
//    vector<int> vect;
//
//    while (scanf("%d", &tmp) == 1) {
//        vect.push_back(tmp);
//    }
//
//    recursive_printer(vect, vect.end()-1);
//}
//
//using namespace std;
//
//#include <iostream>
//#include <vector>
//
//int fibonacci_generator(int previous, int current, int step, int stop) {
//	int temp = current;
//	current = previous + temp;
//	previous = temp;
//	
//	if (step == 0) {
//		previous = 0;
//		current = 1;
//	}
//
//	if (step == stop) {
//		return current;
//	}
//
//	return fibonacci_generator(previous, current, ++step, stop);
//}
//
//int main() {
//	int tmp = 0;
//	int i = 0;
//
//	vector<int> vect;
//
//	while (scanf("%d", &tmp) == 1) {
//		cout << fibonacci_generator(0, 1, 0, tmp) << " ";
//	}
//}

//using namespace std;
//
//#include<iostream>
//#include<vector>
//
//bool is_palindrome(vector<int> vect, int left, int right) {
//	if (left >= right) {
//		return true;
//	}
//
//	if (vect.at(left) != vect.at(right)) {
//		return false;
//	}
//
//	return is_palindrome(vect, ++left, --right);
//}
//
//int main() {
//	int tmp;
//	vector<int> vect;
//
//	while (scanf("%d", &tmp) == 1) {
//		vect.push_back(tmp);
//	}
//
//	string output = is_palindrome(vect, 0, vect.size() - 1) ? "yes" : "no"; 
//
//	cout << output; 
//
//}

using namespace std;

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int minimum(int x, int y, int z) {
	if (x < y && x < z) return x;
	if (y < x && y < z) return y;
	return z;
}

int f(char e, char e_prime) {
	return e == e_prime ? 0 : 1; 
}

int d(vector<char> u, vector<char> v) {
	if (u.size() == 0) {
		return v.size();
	}

	if (v.size() == 0) {
		return u.size();
	}

	vector<char> v1(v.begin() + 1, v.end());
	vector<char> u1(u.begin() + 1, u.end());
	
	return minimum(d(u1, v) + 1, d(u, v1) + 1, d(u1, v1) + f(u.at(0), v.at(0))); 

}

int main() {
	string allwords;
	getline(cin, allwords);

	string delimiter = " ";
	string u_plat = allwords.substr(0, allwords.find(delimiter));
	string v_plat = allwords.substr(allwords.find(delimiter)+1, allwords.size());

	vector<char> u, v; 

	for (int i = 0; i < u_plat.size(); i++) {
		u.push_back(u_plat.at(i));
	}

	for (int i = 0; i < v_plat.size(); i++) {
		v.push_back(v_plat.at(i));
	}

	cout << d(u, v); 

	return 0;
}