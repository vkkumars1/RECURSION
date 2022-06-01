#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int pow(int a,int n){
	if(n==1){
		return a;
	}
	int calculation=pow(a,n-1);
	return a*calculation;
}
int main() {
	// Your code goes here;
	cout<<pow(2,1);

	return 0;
}