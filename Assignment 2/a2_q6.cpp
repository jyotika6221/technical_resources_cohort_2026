

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(i<=(n+1)/2){
                if(j<n && j<(n-i)){
                    cout<<"*";
                }
                else if(j>n && j>=(2*n+i-3)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(i%2==0){
                    if(j<=(i/2)){
                        cout<<"*";
                    }
                    else if(j>=2*n-((i/2)-1)){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }

                }
                else{
                    if(j<=(i+1)/2){
                        cout<<"*";
                    }
                    else if(j>=2*n-(((i+1)/2)-1)){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
