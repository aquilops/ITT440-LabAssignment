
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>


int main(void)
{

void sigint_handler(int sig);
void sigtstp_handler(int sigt);
void sigquit_handler (int sigq);
char s[200];

if (signal(SIGINT,sigint_handler)==SIG_ERR)

{

  perror("signal");
  exit(1);

}


if (signal(SIGTSTP,sigtstp_handler)==SIG_ERR)

{

  perror("signal");
  exit(1);

}


if (signal(SIGQUIT,sigquit_handler)==SIG_ERR)

{

  perror("signal");
  exit(1);

}


printf("enter a string ;\n");


if (fgets(s,200,stdin)==NULL)
  perror("gets");
else

printf("you entered: %s\n",s);

return 0;

}

void sigint_handler( int sig)
{
printf ("This is special signal for signal interrupt\n");
}

void sigtstp_handler( int sign)
{
printf ("This is special signal handler for signal stop!\n");
}

void sigquit_handler( int sigq)
{
printf("This is special signal handler for signal quit!\n");
}




