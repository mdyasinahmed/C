#include <stdio.h>
#include <string.h>

int main()
{
      int n, m = 0, i;
      char str[100];
      scanf("%s",str);
      n = strlen(str);

      for (i=0;i<n;i++){
            if(str[i]=='h' && m==0){
                m++;
            }
            else if(str[i]=='e' && m==1){
                m++;
            }
            else if(str[i]=='l' && m==2){
                m++;
            }
            else if(str[i]=='l' && m==3){
                m++;
            }
            else if(str[i]=='o' && m==4){
                m++;
            }
            if(m==5){
                break;
            }
      }

      if (m==5){
            printf("YES\n");
      }
      else{
            printf("NO\n");
      }

      return 0;
}
