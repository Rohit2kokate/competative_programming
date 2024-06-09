#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int m;
    cin>>m;
    while(m--){
        int n;
        cin>>n;
        int a[n];
        int v[n];
       
        for(int i=0;i<n;i++){
            cin>>a[i]>>v[i];
        }
        int max_strength=0;
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
            
               int combined_strength=((a[i]*v[j])+(v[i]*a[j]));
               max_strength = max(max_strength, combined_strength);
           }
          
        }
        cout<<max_strength<<endl;
        
    }
}
