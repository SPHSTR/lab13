#include<iostream>

using namespace std;

void mySwap(int &,int &); 

int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &x,int &y){
	int s1,s2;
	s1 = x;
	s2 = y;
	x = s2;
	y = s1;
}
