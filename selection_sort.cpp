       #include<iostream>

using namespace std;

int selection_sort(int arr[],int n){
            for(int i=0;i<n-1;i++){
                int min=i;

                for(int j=i+1;j<n;j++){
                    if(arr[j]<arr[min]){
                        min=j;
                    }
                }
                swap(arr[i],arr[min]);
            }

}

int main(){

        cout<<"this is a selection_sort algorithem"<<endl;

        int arr[7]={2,6,8,4,1,3,10};
        int n=sizeof(arr)/sizeof(arr[0]);

        selection_sort(arr,n);
        cout<<"sorted arr is :";
        for(int num :arr){
            cout<<num<<" ";
        }


return 0;
}



