#include<stdio.h>
main()
{
  char str[10];
  FILE *fp=fopen("f1.txt"."r");
  if(fp == NULL)
  { 
    printf("file not found");
    return(-1);
  }
  else(fgets(str,9,fp)!=NULL)       //read from file
  {
    printf("%s",str);                //print read content out to stdout
  }
  fclose(fp);
}
