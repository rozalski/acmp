#include <stdio.h>
int main(int argc, char *argv[])
{
  FILE *infile, *outfile;
  int a,c=0,i,flag=0;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&a);
  if(a<-1){
  a*=-1;
  flag=1;
}
if(a==0){
c=1;
goto metka;
}
if(a==-1)
{
         c=0;
         goto metka;
         }
  for(i=0;i<=a;i++)
  c+=i;
  if(flag==1)
  {
             c*=-1;
  c+=1;
}
  metka:
  fprintf(outfile, "%d\n",c);
  fclose(infile);
  fclose(outfile);
  return 0;
}
