#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
  FILE *infile, *outfile;
  int a,b,c;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d",&a);
  fscanf(infile, "%d",&b);
  c=a+b;
  fprintf(outfile, "%d\n",c);
  fclose(infile);
  fclose(outfile);
  return 0;
}
