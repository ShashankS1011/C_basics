#include <stdio.h>
int main()
{
  int ct=1,c=0 ,first,last,mid,n=20;
  int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int out[6]={1,0,0,0,2};
  first=0;
  last=n-1;
  mid=(first+last)/2;
  while(first<=last) 
  {
        if (out[c]==0)
        {
            first = mid+1;
            c++; 
        }
        else if (out[c] == 2) 
        {
            printf("\n%d",ct);
            printf("\n%d found at location %d\n", arr[mid], mid+1);
            break;
        }
        else if(out[c]==1)
        {
            last=mid-1;
            c++;
        }
        mid=(first+last)/2;
        ct++;
        if(ct==1)
        {
            printf("\n %d",ct);
            printf("\nNot found! %d is not present in the array.\n", arr[mid]);
        }
    }
    return 0;
}