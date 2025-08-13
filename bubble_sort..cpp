#include<iostream>

using namespace std;

int bubbl_sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
            bool swappd=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swappd=true;
                if(!swappd){
                    break;
                }

            }
        }
    }

}

int main(){

        cout<<"this is a bubblsort algorithem"<<endl;

        int arr[7]={2,6,8,4,1,3,10};
        int n=sizeof(arr)/sizeof(arr[0]);

        bubbl_sort(arr,n);
        cout<<"sorted arr is :";
        for(int num :arr){
            cout<<num<<" ";
        }


return 0;
}


