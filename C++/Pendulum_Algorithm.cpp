#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,t;
    cin>>n;
    while(n)
    {
       cin>>t; // number of array entries
       int a[t],b[t];
       for(int i=0;i<t;i++)
       cin>>a[i];
       sort(a,a+t);
       
       if(t%2)
       { b[t/2]=a[0];
       int k=1;
       for(int i=1;i<t;i++)
        if(i%2)
         b[t/2+k]=a[i];
        else 
        {b[t/2-k]=a[i]; k++;}
        }
        else
        { b[(t-1)/2]=a[0];
          int k=1;
          for(int i=1;i<t;i++)
          if(i%2)
           b[(t-1)/2+k]=a[i];
          else 
           {b[(t-1)/2-k]=a[i]; k++;}
         }
       
      for(int i=0;i<t;i++)
      cout<<b[i]<<' ';
      cout<<'\n';
    n--;    
    }
    
    
   return 0; 
}  
