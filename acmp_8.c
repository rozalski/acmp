#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b,c;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d%d%d",&a, &b, &c);
  if(a*b==c)
  fprintf(outfile, "YES\n");
  else
  fprintf(outfile, "NO\n");
  fclose(infile);
  fclose(outfile);
  return 0;
}
