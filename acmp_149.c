#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  FILE *infile, *outfile;
  int i, ms[1000],j;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&i);
  for(j=0;j<=i-1;j++)
  {
  fscanf(infile, "%d",&ms[j]);
  }
  j--;
  while(j>=0)
  {
  fprintf(outfile, "%d ", ms[j]);
  j--;
  }
  fprintf(outfile, "\n");
  fclose(infile);
  fclose(outfile);
  return 0;
}
