#include <stdio.h>


int main()
{
    int *s=NULL;

    {
        {
            int arr[2]={3,5};
            s=arr;
            printf("%d\n",s[0]);
        }

    }
    printf("%d",s[1]);
    return 0;
}
