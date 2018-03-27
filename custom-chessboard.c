#include <stdio.h>
/*
############################################
##                                        ##
##       Author: Agustinus Marcello       ##
##                                        ##
############################################
*/
int main(){
int n,x,y,i,j;
printf("Size: ");
scanf("%d",&n);
printf("\n\n");
if(n<2)printf("Size should be greater than 1");
else for(i=1;i<=n;i++){
    if(i%2!=0)
        for(x=1;x<=3;x++)
            {
                for(y=1;y<=n;y++){
                if(y%2!=0)      {for(j=1;j<=5;j++)   printf(" ");}
                else if(y%2==0) {for(j=1;j<=5;j++)   printf("*");}
                }
                printf("\n");
            }
    else for(x=1;x<=3;x++)
            {
                for(y=1;y<=n;y++){
                if(y%2!=0)      {for(j=1;j<=5;j++)   printf("*");}
                else if(y%2==0) {for(j=1;j<=5;j++)   printf(" ");}
                }
                printf("\n");
            }

}
return 0;
}
