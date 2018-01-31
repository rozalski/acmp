#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b,c,i;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d%d%d",&a, &b);
  c=a+b;
  c--;
  i=c-a;
  fprintf(outfile, "%d ",i);
  i=c-b;
  fprintf(outfile, "%d\n",i);
  fclose(infile);
  fclose(outfile);
  return 0;
}
