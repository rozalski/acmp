#include <stdio.h>
#include <stdlib.h>
 
int main()
{
  FILE *infile, *outfile;
  int a[3], b[3], i, j, t;
  infile=fopen("INPUT.txt","r");
  outfile=fopen("OUTPUT.txt","w");
  fscanf(infile, "%d %d %d %d %d %d",&a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
 for(i=1;i<3; ++i)
    for(j=3-1; j >= i; --j) {
      if(a[j-1] > a[j]) {
        t = a[j-1];
        a[j-1] = a[j];
        a[j] = t;}
        }
   for(i=1;i<3; ++i)
    for(j=3-1; j >= i; --j) {
      if(b[j-1] > b[j]) {
        t = b[j-1];
        b[j-1] = b[j];
        b[j] = t;}
        }
i=a[0]*b[0];
j=a[1]*b[1];
t=a[2]*b[2];
  fprintf(outfile, "%d\n",i+j+t);
  return 0;
 
}
