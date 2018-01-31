#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   FILE *infile, *outfile;
  int i, ch1=0, ch2=0, n;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&i);
  while(i>0)
  {
        fscanf(infile,"%d",&n);
        if(n==0)
        ch1++;
        else
        ch2++;
        i--;
}
  if(ch1>ch2)
  fprintf(outfile, "%d\n", ch2);
  else
  fprintf(outfile, "%d\n", ch1);
  fclose(infile);
  fclose(outfile);
  return 0;
}
