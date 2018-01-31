#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int i, y;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&i);
  y=i/6;
  i=(y+y)*2;
  fprintf(outfile, "%d %d %d\n", y, i, y);
  fclose(infile);
  fclose(outfile);
  return 0;
}
