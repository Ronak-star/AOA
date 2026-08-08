//  Experiment No 2 WAP to count total number of Operator.

#include<stdio.h>
#include<string.h>
int isOperator (char ch)
{
char operators[]="+-*/%=&|^!";
int i;
for(i=0;i<strlen(operators);i++){
if(ch==operators[i]){
return 1;
}}
return 0;
}
int main()
{
FILE*fp;
char filename[100];
char ch;
int operator_count=0;
printf("Enter the filename to analyze\t");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf ("error:could not open file %s\n",filename);
return 1;
}
while((ch=fgetc(fp)) !=EOF){
if(isOperator(ch)){
operator_count++;
}
}
fclose(fp);
printf("total number of operators in %s: %d\n",filename,operator_count);
return 0;
}
