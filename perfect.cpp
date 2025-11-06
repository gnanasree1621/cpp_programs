#include <iostream>//the submission of all factors is equal to orginal value//
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;//n=6//
   for (int i = 1; i <n; i++) {
        if (n % i == 0) {//6%1==0, sum=sum+i,sum=1,
            sum += i;
        }
    }
    if (sum == n) {//6==6
        cout << n<< " is a Perfect Number!" << endl;
    } else {
        cout << n<< " is NOT a Perfect Number." << endl;
    }
   return 0;
}

