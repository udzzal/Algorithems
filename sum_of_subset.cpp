#include<bits/stdc++.h>

using namespace std;
set<vector<int>>s;

void get_combination(vector<int>&arr,int ind,int target,vector<vector<int>>&ans,vector<int>&combin){

     if(target==0){
        if(s.find(combin)==s.end()){
          ans.push_back(combin);
          s.insert(combin);
        }

        return;
     }
     if(ind ==arr.size() || target<0){
        return;
     }

     combin.push_back(arr[ind]);
    //single
    get_combination(arr,ind+1,target-arr[ind],ans,combin);
    //multiple
    get_combination(arr,ind,target-arr[ind],ans,combin);

    //exclusive
    combin.pop_back();
    get_combination(arr,ind+1,target,ans,combin);

}


int main(){

    int target,n;

    cout<<"Enter the number of element :";
    cin>>n;
    vector<int>arr(n);

    cout<<"\n Enter array element ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the target sum :";
    cin>>target;

    vector<vector<int>>ans;
    vector<int>combin;

    get_combination(arr,0,target,ans,combin);

    cout<<"\nsubsets with sum "<<target<<"\n";
    for (int i = 0; i < ans.size(); i++) {
    cout << "{ ";
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << "}\n";
}

return 0;
}
