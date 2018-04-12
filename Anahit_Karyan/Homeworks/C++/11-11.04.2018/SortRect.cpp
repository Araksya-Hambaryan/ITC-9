#include <iostream>

struct Rect{
	int erk;
	int layn;
};

void merge(Rect*, int, int, int);

void merge_sort(Rect* arr, int low, int high){

	int mid = 0;

	if(low == high)	{
		return;
	} else	{

		mid = (low + high) / 2;

		merge_sort(arr, low, mid);

		merge_sort(arr, mid + 1, high);

		merge(arr, low, mid, high);
	}
}

void merge(Rect* arr, int low, int mid, int high){

	int i;
	int left_index = low;
	int right_index = mid + 1;
	int combined_index = low;
	Rect tempA[10];

	while(left_index <= mid && right_index <= high){

		if(arr[left_index].erk * arr[left_index].layn <=
				arr[right_index].erk * arr[right_index].layn){

			tempA[combined_index++] = arr[left_index++];

		}else{

			tempA[combined_index++] = arr[right_index++];
		}
	}

	if(left_index == mid + 1){

		while(right_index <= high){

			tempA[combined_index++] = arr[right_index++];
		}

	}else{

		while(left_index <= high){

			tempA[combined_index++] = arr[left_index++];
		}
	}

	for(i = low; i <= high; i++){
		arr[i] = tempA[i];
	}
}

int main(){

	const int n = 5;
	Rect R[5] ;

	R[0].erk = 2;
	R[0].layn = 3;

	R[1].erk = 1;
	R[1].layn = 5;

	R[2].erk = 6;
	R[2].layn = 2;

	R[3].erk = 7;
	R[3].layn = 9;

	R[4].erk = 8;
	R[4].layn = 3;
	std:: cout << "Rect tipi obyektneri zangvac" << std::endl;

	for ( int i = 0; i < 5;++i){

		std::cout << '{' << R[i].erk << ',' << R[i].layn << '}' << " ";

	}

	merge_sort(R, 0, 4);
	std::cout << std::endl << "Sortavorvac zangvac@ klini" << std::endl;
	for ( int i = 0; i < 5;++i){

		std::cout << '{' << R[i].erk << ',' << R[i].layn << '}' << " ";
	}



	return 0;
}

