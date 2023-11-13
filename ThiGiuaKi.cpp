#include <iostream>
using namespace std

int main (){
    int n;
    cout << "Nhap n :" ; 
    cin >> n;
	return 0;
}
int sohoanthien(){
	int n;
	int s= 0;
	for(int i = 1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	return s==n;
}