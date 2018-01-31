#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  FILE *infile, *outfile;
  char ar[5];
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fgets(ar,5,infile);
if((ar[0]==ar[3])&&(ar[1]==ar[2]))
fprintf(outfile, "YES\n");
else
fprintf(outfile, "NO\n");
  return 0;
 
}
