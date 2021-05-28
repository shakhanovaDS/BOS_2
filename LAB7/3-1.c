#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main( void ) {

  int pid = fork();
  int status;

  if(pid == 0) {
    char *cmd = "ls";
    char *argv[3] = {cmd, "-la", NULL};
    execvp(cmd, argv);
  }
  wait(&status);
  return 0;
}
