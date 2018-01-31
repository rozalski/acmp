#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  FILE *infile, *outfile;
  int a, b, c;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d %d %d",&a, &b, &c);
  if((a*2)>=((b*2)+(c*2)))
  fprintf(outfile, "YES\n");
  else
  fprintf(outfile, "NO\n");
  fclose(infile);
  fclose(outfile);
  return 0;
}
