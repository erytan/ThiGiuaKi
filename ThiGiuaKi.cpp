#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Nhap n :" ; 
    cin >> n;
	sohoanthien();
	sochinhphuong();
	retrun 0;
}
int sochinhphuong(){
	int n;
	if((int)sqrt(n)==sqrt(n));
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

