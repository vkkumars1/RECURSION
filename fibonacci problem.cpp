#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
 long long int nthFibonacci(long long int n){
        // code here
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        long long int var1= nthFibonacci(n-1);
        long long int var2= nthFibonacci(n-2);
        return var1+var2;
    }
int main() {
	// Your code goes here;
		cout<<nthFibonacci(4);

	return 0;
}