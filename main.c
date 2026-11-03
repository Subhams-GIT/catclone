#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc<2) {
    printf("please pass a filename\n");
    return EXIT_FAILURE;
  }
  char *filename=argv[1];
  //printf("%s\n",filename);
  FILE *fp;
  char ch;
  fp=fopen(filename,"r");
  if (fp==NULL){
    perror("file not found\n");
    return 1;
  }
  while((ch=fgetc(fp))!=EOF){
    printf("%c",ch);
  }
  
  fclose(fp);
  
  return EXIT_SUCCESS;
}
