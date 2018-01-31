#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b,c,i,j;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d%d%d",&a, &b, &c);
  if(a>b&&a>c)
  i=a;
  if(b>a&&b>c)
  i=b;
  if(c>a&&c>b)
  i=c;
  if(a<b&&a<c)
  j=a;
  if(b<a&&b<c)
  j=b;
  if(c<a&&c<b)
  j=c;
  a=i-j;  
  fprintf(outfile, "%d ",a);
  fclose(infile);
  fclose(outfile);
  return 0;
}
