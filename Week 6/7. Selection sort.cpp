#include <iostream>

using namespace std;

void selectionSort(double [], int length);

int main(){

	double list [] = {5, 6, 8, 7, 9, 4, 2, 3, 1};
	int length = sizeof(list)/sizeof(list[0]);

	selectionSort(list, length);
	
	for (int i= 0; i<length; i++)
	cout << list[i];




	return 0;
}

void selectionSort(double list[], int length) {
    for (int i = 0; i < length; i++) {
      // Find the minimum in the list[i.. length-1]
	  double currentMin = list[i];
      int currentMinIndex = i;
      
	  //Go through each array element to find the smallest value
	  for (int j = i + 1; j < length; j++) {
        if (currentMin > list[j]) {
          currentMin = list[j];
          currentMinIndex = j;
        }
      }

      // Swap list[i] with list[currentMinIndex] if necessary;
      if (currentMinIndex != i) {
        list[currentMinIndex] = list[i];
        list[i] = currentMin;
      }
    }
    
	// list[i] is in its correct position. 
	// The next iteration apply on list[i.. length -1]
  }



