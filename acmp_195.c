#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b,c,i;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d%d%d",&a, &b, &c);
  a*=b*c;
  a*=2;
  fprintf(outfile, "%d\n",a);
  fclose(infile);
  fclose(outfile);
  return 0;
}
