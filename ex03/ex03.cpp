// EXERCISE 1 - CREATE HISTOGRAM

//#include <iostream>
//#include <math.h>
//#include <valarray>
//
//#define MAXN 10000000
//int length = 0;
//int a[MAXN] = { 0 };
//
//using namespace std;
//
//int* intervalCreator(int array[], int l, int n, int m)
//{
//	int k = ceil(double(m) / double(l));
//
//	int* interval = new int[l];
//
//	for (int i = 0; i < l; i++)
//	{
//		interval[i] = i * k;
//	}
//
//	return interval;
//}
//
//int* histogramFiller(int array[], int interval[], int l, int n)
//{
//	int* histogram = new int[l]();
//
//	for (int i = 2; i < n+2; i++)
//	{
//		int current = array[i];
//
//		for (int j = 0; j < l; j++)
//		{
//			int now = interval[j];
//			int next = interval[j + 1];
//
//			if (current >= now && j + 1 >= l || current >= now && current < next)
//			{
//				histogram[j]++;
//			}
//		}
//	}
//
//	return histogram;
//}
//
//int main()
//{
//	int tmp;
//	int l;
//	int n;
//	int m = 0;
//
//	int last = MAXN;
//
//	while (length <= last && scanf("%d", &tmp) != -1)
//	{
//		if (m < tmp && length > 1)
//		{
//			m = tmp;
//		}
//		
//		if (length == 1) {
//			last = tmp + 1;
//		}
//		
//		a[length++] = tmp; 
//	}
//
//	l = a[0];
//	n = a[1];
//
//	int* interval = intervalCreator(a, l, n, m);
//	int* histogram = histogramFiller(a, interval, l, n);
//
//	for (int i = 0; i < l; i++)
//	{
//		cout << interval[i] << ": " << histogram[i] << endl;
//	}
//
//	return 0;
//}

// EXERCISE 2 - MAZE

#include <iostream>

using namespace std; 

typedef enum { space, wall, player } material;

typedef struct {
	int x, y;
	bool isWall;
	material type;
	char marker;
}field;

#define n 12
#define m 16
field playground[n][m];

int x = 5;
int y = 5;

void printBoard()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << playground[i][j].marker;
		}
		cout << endl;
	}
}

int main() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			playground[i][j].x = i;
			playground[i][j].y = j;
			playground[i][j].isWall = (i == 0 || i == (n - 1) || (j == 0) || j == (m - 1));
			if (playground[i][j].isWall && !(j == 3 && i == 0)) {
				playground[i][j].type = wall;
				playground[i][j].marker = '*';
			}
			else if (!playground[i][j].isWall && i == y && j == x)
			{
				playground[i][j].type = player;
				playground[i][j].marker = 'O';
			}
			else {
				playground[i][j].isWall = false;
				playground[i][j].type = space;
				playground[i][j].marker = ' ';
			}
		}
	}

	printBoard();

	char move;
	while (cin >> move && move != 'q') {
		switch (move) {
		case 'l':
			if (!playground[y][x - 1].isWall)
			{
				playground[y][x].type = space;
				playground[y][x].marker = ' ';

				x--;

				playground[y][x].type = player;
				playground[y][x].marker = 'O';
			}
			break;
		case 'r':
			if (!playground[y][x + 1].isWall)
			{
				playground[y][x].type = space;
				playground[y][x].marker = ' ';

				x++;

				playground[y][x].type = player;
				playground[y][x].marker = 'O';
			}
			break;
		case 'u':
			if (!playground[y - 1][x].isWall)
			{
				playground[y][x].type = space;
				playground[y][x].marker = ' ';

				y--;

				playground[y][x].type = player;
				playground[y][x].marker = 'O';
			}
			break;
		case 'd':
			if (!playground[y + 1][x].isWall)
			{
				playground[y][x].type = space;
				playground[y][x].marker = ' ';

				y++;

				playground[y][x].type = player;
				playground[y][x].marker = 'O';
			}
			break;
		}
		printBoard();
	}
}