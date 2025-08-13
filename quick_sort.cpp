
#include<bits/stdc++.h>

using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    //int j=low;

    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
        arr[i]=arr[high];
        arr[high]=temp;

    return i;

}

void quick_sort(int arr[],int low,int high){
        if(low<high){
            int pi=partition(arr,low,high);
            quick_sort(arr,low,pi-1);
            quick_sort(arr,pi+1,high);
        }
}
int main(){
    int arr[5]={5,6,1,2,8};
    //int low=0;
    //int high=4;
    //For daynamic input and output
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    //calling quick sort
    //quick_sort(arr,low,high);
     quick_sort(arr,0,n-1);


     cout<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";


return 0;
}
