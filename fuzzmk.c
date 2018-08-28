#include<stdio.h>
#include<string.h>

int main(){
FILE *pf;
int i;
int  j;
int rows;
char txt[20];
char rmz[5];

printf("Enter no of rows: ");
scanf("%d", &rows);
printf("Enter file location: ");
scanf("%s", &txt);
printf("enter the syntax: ");
scanf("%s",&rmz);
pf = fopen("fuzzfile.txt","w");
for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++){
        fprintf(pf,"%s",rmz);
    }
    fprintf(pf,"%s\n", txt);
}
return 0;




}