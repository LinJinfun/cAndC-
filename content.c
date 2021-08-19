main.cpp

#include <iostream>
#include "tools.h"

using namespace std;

int main() {
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;

	int array[nums];
	for(int i=0; i<nums; i+=1){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	cout << "排序前:\n";
	displayArray(array, nums);

	sorted(array, nums);

	cout << endl;
	cout << "排序後:\n";
	displayArray(array, nums);
	return 0;
}

tools.h

#include <iostream>
using namespace std;

void sorted(int a[], int n){
	//泡沫排序
	for(int i=0; i<n-1; i+=1){
		for(int j=i+1;j<n; j+=1){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void displayArray(int a[], int n){
	for(int i=0; i<n; i+=1){
		cout << a[i] << " ";
	}
}

	
