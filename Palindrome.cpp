#include<iostream>
using namespace std;
int main()
{
    int num, rev=0, rem, temp;
    cout<<"Enter the Number/word: ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==num)
        cout<<"\nIt is a Palindrome";
    else
        cout<<"\nIt is not a Palindrome";
    cout<<endl;
    return 0;
}

Input:
Enter the Number/word: 205262502
  
Output:
It is a Palindrome
