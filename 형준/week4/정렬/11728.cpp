#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n , m;
	cin >> n >> m;
	int arr1[n], arr2[m];
	int idx = n + m;
	int arr3[idx];
	for (int i = 0; i < n; i++){
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++){
		cin >> arr2[i];
	}
	int n1 = 0;
	int n2 = 0;
	for (int i = 0; i < idx+1; i++){
		if (n1 == n){
			arr3[i] = arr2[n2];
			n2++;
		}
		if (n2 == m){
			arr3[i] = arr1[n1];
			n1++;
		}
		else if (arr1[n1] == arr2[n2]){
			arr3[i] = arr1[n1];
			cout << "n1: " << n1 << endl;
			cout << "n2: " << n2 << endl;
			n1++;
			n2++;
		}
		else if (arr1[n1] < arr2[n2]){
			arr3[i] = arr1[n1];
			cout << "n1: " << n1 << endl;
			cout << "n2: " << n2 << endl;
			n1++;
		}
			
		else {
			arr3[i] = arr2[n2];
			cout << "n1: " << n1 << endl;
			cout << "n2: " << n2 << endl;
			n2++;
		}
		
	}
	for (int i = 0; i < idx; i++){
		cout << arr3[i] << " ";
	}
}