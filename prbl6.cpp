#include <bits/stdc++.h>
using namespace std;


void increase_size(int *capacity, int *arr, int size){
    int new_capacity = (*capacity)*2;
    *capacity = new_capacity;
    int *new_arr = new int [new_capacity];

    for (int i = 0; i < size; i++){
        new_arr[i] = arr[i];
    }

    arr = new_arr;
    delete [] new_arr;

}


void insert(int position, int value, int size, int *arr){
    for (int i = size-1; i > position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = value;
}

int main(){
    int size, capacity;
    cout << "Give array size: ";
    cin >> size;
    capacity = size;

    int *arr = new int[size];

    cout << "Give elements: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int position, value;
    cout << "Give an index position: ";
    cin >> position;
    cout << "Give a value: ";
    cin >> value;

    if(position > size) position = size;

    if(size == capacity) increase_size(&capacity, arr, size);

    size++;
    insert(position, value, size, arr);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
