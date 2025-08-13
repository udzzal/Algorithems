#include<iostream>

using namespace std;
   int binaray_search(int arr[5],int size,int target){

        int mid=0;

        int start=0,end=size-1;
        while(start<=end){
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


        return mid;
    }
int main(){

        int arr[5]={1,5,9,10,60};
        int size= sizeof(arr) / sizeof(arr[0]);
        int target=9;

        cout<<"your value is in index :"<<binaray_search(arr,size,target)<<endl;

    return 0;
}

