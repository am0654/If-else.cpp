#include<iostream>

using namespace std;

int check_per(int);
int main()
{
   int num, res;
   cout<<"Enter a Number: ";
   cin>>num;
   res = check_per(num);
   if(res==1)
      cout<<endl<<num<<" is a Perfect Number.";
   else
      cout<<endl<<num<<" is not a Perfect Number.";
   cout<<endl;
   return 0;
}
int check_per(int n)
{
   int i, s=0;
   for(i=1; i<n; i++)
   {
      if(n%i==0)
        s = s+i;
   }
   if(n==s)
        return 1;
   else
        return 0;
}


Input:
Enter a Number: 36
  
Output:
36 is a Perfect Number.
