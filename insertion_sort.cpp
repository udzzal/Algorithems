#include<iostream>

using namespace std;

int insertion(int arr[],int n){
            for(int i=1;i<n-1;i++){
                int key=arr[i];
                int j=i-1;

                while(j>=0 && arr[j]>key){
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=key;

            }

}

int main(){

        cout<<"this is a insertion_sort algorithem"<<endl;

        int arr[7]={2,6,8,4,1,3,10};
        int n=sizeof(arr)/sizeof(arr[0]);

        insertion(arr,n);
        cout<<"insertion arr is :";
        for(int num :arr){
            cout<<num<<" ";
        }


return 0;
}


