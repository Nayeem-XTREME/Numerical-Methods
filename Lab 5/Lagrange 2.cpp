#include <iostream>
using namespace std;
int main()
{
	FILE *p1, *p2;
	double a[4][2];
//	p1 = fopen("x.txt", "r");
//	p2 = fopen("Y.txt", "r");
//	for (int i = 0; i < 4; i++) {
//		fscanf(p1, "%lf", &a[i][0]);
//		fscanf(p2, "%lf", &a[i][1]);
//	}
	
	cout << "Res " << a[0][0] * a[0][1] << endl;;
//	for (int i = 0; i < 4; i++) {
//		printf("%lf %lf\n", a[i][0], a[i][1]);
//	}
	
	return 0;
}
