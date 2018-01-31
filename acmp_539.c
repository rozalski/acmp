#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int i;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&i);
  printf("input:  %d\n", i);
 if(i==1)
 i=0;
 if(i%2==0)
 i=i/2;
  
  
  fprintf(outfile, "%d\n", i);
  fclose(infile);
  fclose(outfile);
  return 0;
}
