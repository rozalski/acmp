#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&a);
  if(a==0)
  fprintf(outfile, "NO");
  else
  if(!(a&(a-1)))
  fprintf(outfile, "YES");
  else
  fprintf(outfile, "NO");
  fclose(infile);
  fclose(outfile);
  return 0;
}
