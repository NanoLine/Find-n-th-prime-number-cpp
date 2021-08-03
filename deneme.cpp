#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int a){
	if(a <= 1 || a % 2 == 0){
		return false;
	}
	if(a == 2){
		return true;
	}
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}
int f(int a){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(7);
	if(arr.size() >= a){
		return arr[a-1];
	}
	int i = 11;
	while(true){
		if(isPrime(i)){
			arr.push_back(i);
			if(arr.size() >= a){
				return arr[a-1];
			}
		}
		i += 2;
	}
}
 int main(){
 	int a;
 	cin >> a;
 	cout << f(a) << "\n";
 }
