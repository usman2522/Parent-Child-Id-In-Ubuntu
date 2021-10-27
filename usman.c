# include <stdio.h>
# include <unistd.h>
int main()
{
  printf("Main process id is %d\n",getppid());
  printf("Secondary process id is %d\n",getpid());
     
  return 0;
  
}
