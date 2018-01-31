#include <stdio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a,b;
  char c;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d%d",&a, &b);
  if(a>b)
  c='>';
  if(a<b)
  c='<';
  if(a==b)
  c='=';
  fprintf(outfile, "%c\n",c);
  fclose(infile);
  fclose(outfile);
  return 0;
}
