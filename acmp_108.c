#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&a);
  fprintf(outfile, "%d\n",a);
  fclose(infile);
  fclose(outfile);
  return 0;
}
