#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double i, j, N, S;
	
    j = 2;
	N = 0;
	while (j <= 20) {
		S = 1;
		i = pow(j, 2);
		while (i <= 400) {
			S *= i;
			i++;
        }
        N += j / (pow (j , 2) + S);
        j++;
    }
    cout << "N = " << N << endl;
    
    N = 0;
    j = 2;
    do {
        S = 1;
        i = pow(j , 2);
        do {
            S *= i;
            i++;
        } while (i <= 400);
        N += j / (pow(j , 2) + S);
        j++;

    } while (j <= 20);
    cout << "N = " << N << endl;
    N = 0;
    for (j = 2; j <= 20; j++) {
        S = 1;
        for (i = pow(j, 2); i <= 400; i++) {
            S *= i;
        }
        N += j / (pow(j , 2) + S);
    }
    cout << "N = " << N << endl;
    N = 0;
    for (j = 20; j >= 2; j--) {
        S = 1;
        for (i = 400; i >=pow(j, 2) ; i--) {
            S *= i;
        }
        N += j / (pow(j, 2) + S);
    }
    cout << "N = " << N << endl;
    
    return 0;
}