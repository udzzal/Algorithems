#include<iostream>
using namespace std;

int solution=0;
bool is_safe(int row,int col,int n,int chess[][20]){

    int r=row;int c=col;
    //for upper left diagonal
    while(r>=0&& c>=0){
        if(chess[r][c]==1){
            return false;
        }
        r--;c--;
    }
    r=row; c=col;
    //left diagonal
    while(c>=0){
      if(chess[r][c]==1){
            return false;
        }
        c--;
    }
     r==row; c=col;
     //check lower left diagonal
    while(r<n && c>=0){
        if(chess[r][c]==1){
            return false;
        }
        r++;c--;
    }
    return true;
}

void nq(int col,int n,int chess[][20]){
    if(col>=n){
        solution++;
        return;
    }
    for(int row=0;row<n;row++){
        if(is_safe(row,col,n,chess)){
            chess[row][col]=1;
            nq(col+1,n,chess);
            chess[row][col]=0;
        }
    }
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int chess[20][20]={0};
    nq(0,n,chess);
    cout<<"\nTotal soulution: "<<solution<<endl;
    return 0;

return 0;
}
