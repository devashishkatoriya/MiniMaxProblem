
/*
 * Created by Devashish Katoriya on 20-03-2017
 */

#include <iostream>

using namespace std;

#define LIMIT 50

int main()
{
    int a[LIMIT],i,j,n,ele,temp,maxSum,minSum;
    
    cout<<"\nEnter how many elements ? ";
    cin>>n;
    cout<<"\nEnter the elements :- \n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nEnter how much count ? ";
    cin>>ele;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    maxSum = 0;
    minSum = 0;
    j = 0;
    while(ele>0)
    {
        maxSum = maxSum + a[n-j-1];
        minSum = minSum + a[j];
        j++;
        ele--;
    }
    
    cout<<"\nMax. sum is "<<maxSum;
    cout<<"\nMin. sum is "<<minSum;
    
    return 0;
}