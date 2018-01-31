#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&a);
  b=9-a;
  fprintf(outfile, "%d9%d\n",a,b);
  fclose(infile);
  fclose(outfile);
  return 0;
}
