#include <iostream>

using namespace std;


pair<int,int> findminmax(int arr[], int start, int end) {

    if (start == end) {
        return {arr[start], arr[end]};
    }

    if (end == start + 1) {
        if (arr[start] < arr[end]) {
            return {arr[start], arr[end]};
        } else {
            return {arr[end], arr[start]};
        }
    }

    int mid = start + (end - start) / 2;


    pair<int,int> left = findminmax(arr, start, mid);
    pair<int,int> right = findminmax(arr, mid + 1, end);


    int minelement = min(left.first, right.first);
    int maxelement = max(left.second, right.second);

    return {minelement, maxelement};
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    pair<int,int> result = findminmax(arr, 0, n-1);

    cout << "min is " << result.first << endl;
    cout << "max is " << result.second << endl;

    return 0;
}

