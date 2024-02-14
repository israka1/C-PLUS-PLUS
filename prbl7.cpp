#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout << "Give array size: ";
    cin >> size;
    size *= 2;

    int arr[size];

    for (int i = 0; i < size; i++){
        cin >> arr[i];

        for (int j = i; j > 0; j--){
            if(arr[j] < arr[j-1]) swap(arr[j], arr[j-1]);
        }

    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
