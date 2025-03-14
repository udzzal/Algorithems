#include<iostream>
using namespace std;

int binaray_search(int arr[],int size,int target){
    int start=0;int end=start+size-1;

    while(start<=end){
       int mid=start+(end-start)/2;

        if(arr[mid]==target){
            return mid;
        }
        (arr[mid]>target) ? start=mid+1 : end=mid-1;
    }
    /* for(int i=0;i<=end;i++){
                
            int mid=start+(end-start)/2;
        
            if(arr[mid]==target){
                return mid;
            }

            (arr[mid]<target) ? start=mid+1 : end=mid-1;

            // if(arr[mid]<target){
            //     start=mid+1;
            // }else{
            //     end=mid-1;
            // }
        }
        */

return -1;
}
int main(){
    int size;
    cout<<"Enter array size";
    cin>>size;
    int arr[size];
    cout<<"Enter array element  ";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter your target element :";

    cin>>target;
    int result=binaray_search(arr,size,target);
    if(!result==-1){
    cout<<"Your array is on index :"<<result<<endl;
    }else{
        cout<<"The element is not present in the array";
    }

return 0;
}