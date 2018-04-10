#include <iostream>

int* sort(int* a,int size,int(*fun)(int ,int )){

	int y = 0 ;

	for (int i = 0 ; i < size - 1 ; ++i)
	{
		for (int j = 0 ; j < size- i - 1 ; ++j)
		{
			if (a[j] > a[j + 1]) {

				y = a[j];
				a[j] = a[j + 1];
				a[j + 1] = y;
			}
		}
	}


	for( int i = 0 ; i < size ; ++i)
	{
		std::cout << a[i] << " ";
	}

}
int poqr (int a,int b){
	int c = 0;
	a < b ? c = a : c = b;
	return c;
}
int main(){
	int n;
	std::cout << "Mutqagreq zangvaci chap";
	std::cin >> n;
	int arr[n];
	std::cout << "Mutqagreq zangvac";
	for (int j = 0 ; j < n ; ++j){
	
		std::cin >> arr[j] ;

	}


	std::cout << sort(arr,n,poqr);
	return 0;
}
