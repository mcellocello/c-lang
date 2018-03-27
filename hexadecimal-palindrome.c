#include <stdio.h>
/*
############################################
##                                        ##
##       Author: Agustinus Marcello       ##
##                                        ##
############################################
*/
int main()
{
    char pil='R';
    do{

    if(pil=='Q'||pil=='q'){break;}
    int n, reverse= 0, sisa, original,digit=0,i,temp;
    printf("Hexadecimal Number: ");
    scanf("%x", &n);
    i=n;
    while(i!=0)
    {
    digit++;
    i/=10;
    }
    if(digit<=2||digit>8) {system("cls");continue;}
    original = n;
    while( n!=0 )
    {
        sisa = n%16;
        reverse = reverse*16 + sisa;
        n /= 16;
    }
    if (original==reverse)
        {
        printf("\nPalindrome\n", original);
        printf("[R]un Again\n");
        printf("[Q]uit");pil=getch();
        system("cls");
        }

    else
        {
        printf("\nNot a palindrome\n", original);
        printf("[R]un Again\n");
        printf("[Q]uit");pil=getch();

        system("cls");

        }
    }
    while(pil!='Q'||pil!='q'||pil=='r'||pil=='R');
    return 0;
}

