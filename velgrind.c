#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*int main(void)
  {
  char *ptr = (char*)malloc(10);
  memset(ptr, 0, 10);

  strncpy(ptr, "Linux", strlen("Linux"));

  printf("\n ptr = [%s]\n", ptr);

  free(ptr);

  ptr[0] = 'a';
  return 0;
  }
 */
main()
{
	char *ptr;
	ptr=calloc(20,1);
	ptr=calloc(20,1);
	ptr=calloc(20,1);
strcpy(ptr,"aaaaaaaaaaaaaaaaaaaaaaaaaaaa");
free(ptr);
//ptr=NULL;
}
