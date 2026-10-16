#include "sortings.hpp"

void biv::bubble_sort(int* const arr, const int size) {
	for (int i = 0; i < size - 1; ++i){
		bool swapped = false;
		for (int l = 0; i < size - 1 - l; ++l){
			if (arr[l]>arr[l+1]){
				int temp = arr[l];
				arr[l]=arr[l+1];
				arr[l+1]=temp;
				swapped = true;
			}
		}
		if (!swapped){
			break;
		}
	}
}
