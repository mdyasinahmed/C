#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0, position;
    scanf("%d",&n);
    int a[100];

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    for(i=1;i<=n;i++){
        if(even>odd){
            if(a[i]%2!=0){
                position =i;
            }
        }
        else{
            if(a[i]%2==0){
                position =i;
            }
        }
    }

    printf("%d\n", position);

    return 0;
}

/*
#include <stdio.h>
#include<string.h>
int main()
{
   char str1[20];  // declaration of char array
   char str2[20];  // declaration of char array
   int value; // declaration of integer variable
   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);
   // comparing both the strings using strcmp() function
   value=strcmp(str1,str2);
   if(value==0)
   printf("strings are same");
   else
   printf("strings are not same");
   return 0;
}
*/
