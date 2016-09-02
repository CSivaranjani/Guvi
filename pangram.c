#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int i,l,flag[26],g=0,k;
    char in[1000],j,a[26];
    gets(in);
    l=strlen(in);
    j='a';
    for(i=0;i<26;i++)
        {
        flag[i]=0;
        a[i]=j;
        j++;
    }
    for(k=0;k<l;k++)
        {
        for(i=0;i<26;i++)
            {
            if((in[k]==a[i])||(in[k]==(a[i]-32)))
                flag[i]++;
         
        }
    }
    for(i=0;i<26;i++)
        {
        if(flag[i]==0)
            {
            printf("not pangram");
            g=1;
            break;
        }
    }
    if(g!=1)
        {
        printf("pangram");
        
    }
