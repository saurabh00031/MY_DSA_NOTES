

////////////////////////////////////////////////////////////////////////////////////////


//obtain maximum repetaed char and its frequency>//

#include<bits/stdc++.h>
using namespace std;

int main()
{
  
   string s="saurabhs sps";
   int freq[26]={0,0};
   
   for(int i=0;i<s.size();i++)
   {
       freq[s[i]-'a']++;
   }
   
   char ans='a';
   int max=0;
   
   for(int i=0;i<26;i++)
   {
       if(freq[i]>max)
       {
           max=freq[i];
           ans=i+'a';
       }
   }
   
    cout<<ans<<"->"<<max<<endl;
}








//////////////////////////////////////////////////////////////////////////////////////////









////////////////////////////////////////////////////////////////////////////////////////////