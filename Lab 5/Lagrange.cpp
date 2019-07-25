#include <bits/stdc++.h>
using namespace std;
int main()
{
	FILE *fp1, *fp2;
	double n, sum1, sum2, sum;
	double A[5][3];
	
	fp1 = fopen("x.txt", "r");
	fp2 = fopen("Y.txt", "r");
	for (int i = 0; i < 4; i++) {
		fscanf(fp1, "%lf", &A[i][0]);
		fscanf(fp2, "%lf", &A[i][1]);
	}

	n = 3.756;
	
	for (int i = 0; i < 4; i++) {
		sum1 = sum2 = 1;
		for (int j = 0; j < 4; j++) {
			if (j != i) {
				sum1 = sum1 * (n - A[j][1]);
				sum2 = sum2 * (A[i][1] - A[j][1]);
			}			
		}
		sum = sum + ((sum1/sum2) * A[i][0]);
	}
	printf("\nx = %llf\n", sum);
	
	
	return 0;
}
