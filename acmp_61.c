#include <stdio.h>
#include <conio.h>
int main (void)
{
  FILE *infile, *outfile;
  int a[2][4],i,j,x=0,y=0;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  for(j=0;j<=3;j++)
  for(i=0;i<=1;i++)
  fscanf(infile, "%d",&a[i][j]);
  for(i=0;i<=3;i++)
  x+=a[0][i];
  for(i=0;i<=3;i++)
  y+=a[1][i];
  if(x>y)
  fprintf(outfile, "1\n");
  if(x<y)
  fprintf(outfile, "2\n");
  if(x==y)
  fprintf(outfile, "DRAW\n");
  fclose(infile);
  fclose(outfile);
  return 0;
}
