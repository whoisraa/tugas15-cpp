#include <iostream>

using namespace std;

void pointer(int *a, int *b){
    cout<<"Hasil : "<<(*a)*(*b);
}

int main(){
	int x;
	int y;
	
	cout<<"Inputkan x : ";
	cin>>x;
	cout<<"Inputkan y : ";
	cin>>y;
    pointer(&x,&y);
}
