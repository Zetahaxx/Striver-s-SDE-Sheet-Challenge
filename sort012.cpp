#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    //Dutch national flag algo
    int zeros=0,ones=0,twos=n-1;
     while(ones<=twos)
        {
            switch(arr[ones])
            {
                case 0:
                    swap(arr[ones++],arr[zeros++]);
                   // zeros++;
                    //ones++;
                    break;
                case 1:
                    ones++;
                    break;
                case 2:
                    swap(arr[ones],arr[twos--]);
                   // twos--;
                    break;
                    
            }
        }
  
}
