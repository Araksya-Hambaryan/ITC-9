#include <iostream>

void sort(int* a,int n,int(*fun)(int ,int )){

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n-1; ++j) {
			if(fun(a[j], a[j+1]) == a[j])  {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

}
int poqr (int a,int b){

	if( a < b) {
		return a;
	} else {
		return b;
	}
}
int mec (int a,int b){

	if( a > b) {
		return a;
	} else {
		return b;
	}
}




void print(int* a,int n){
	for(int i = 0; i < n;++i){
		std::cout << a[i] << " ";
	}
}
int main(){

	const int size = 5;
	int arr[size];
	std::cout << "Mutqagreq 5 chapani zangvac" << std::endl;
	for (int j = 0 ; j < size ; ++j){

		std::cin >> arr[j] ;

	}

	sort(arr,size,poqr);
	std::cout << "Nvazman kargov dasavorvac" << std::endl;
	print(arr,size);
	sort(arr,size,mec);
	std::cout << std::endl;
	std::cout << "Achman kargov dasavorvac" << std::endl;
	print(arr,size);
	return 0;
}

