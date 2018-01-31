#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  FILE *infile, *outfile;
  int i, b;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&i);
  if(i==5)
  fprintf(outfile, "25\n");
  else
  fprintf(outfile, "%d25\n", (i/10)*((i/10)+1));
  fclose(infile);
  fclose(outfile);
  return 0;
}
