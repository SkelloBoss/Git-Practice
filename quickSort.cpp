#include<iostream>
using namespace std;

int Partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;

    for(int j = low+1; j<=high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i], arr[low]);
    return i;
}

void quickSort(int arr[], int low, int high){ //pi to pai
    if(low < high){
        int pai = Partition(arr, low, high);
        cout<< arr[pai] << " "; //pivot value
        quickSort(arr, low, pai-1);
        quickSort(arr, pai+1, high);
    }
}

int main(){
    int arr[7] = {7, 6, 2, 4, 1, 11, 8};
    int low = 0, high = 6;
    quickSort(arr, low, high);

    cout << "Sorted array: ";
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }

}

