#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// 1.   The parent process creates a child process. (2 marks)
// 2.   The parent prints its PID and its role (parent, child, or grandchild). (2 mark)
// 3.   The child prints its PID and its role (parent, child,  grandchild). (2 mark)
// 4.   The child process creates a grandchild process. (2 marks)
// 5.   The grandchild prints its PID and its role (parent, child,  grandchild). (2 mark)
// 6.   The grandchild exits after its execution. (2 mark)
// 7.   When the grandchild exits, the child prints that the grandchild has exited. It prints the grandchild's PID and role. (2 marks)
// 8.   The child process exits. (2 mark)
// 9.   When the child exits, the parent prints that the child has exited. It prints the child's PID and role. (2 marks)
// 10.  The parent process prints its PID and its role. It exits. (2 marks)

// Helper Function to Print PID and role of a Process
void print_role_pid(char *role)
{
    printf("%s - PID: %d\n", role, getpid());
}

int main()
{

    pid_t child_pid, grandchild_pid;

    // 1.   Parent Creates a Child Process using fork()
    if ((child_pid = fork()) == 0)
    {

        // 3.   Child prints its PID and its role
        print_role_pid("Child");

        // 4.   Child Creates a GrandChild using fork()
        if ((grandchild_pid = fork()) == 0)
        {

            // 5.   GrandChild Prints PID and its role
            print_role_pid("GrandChild");

            // 6.   GrandChild Exits after its execution
            exit(0);
        }
        else
        {
            wait(NULL);

            // 7.   Child Prints the PID of GrandChild after its Wait
            printf("Child: GrandChild has Exited with PID : %d\n", grandchild_pid);

            // 8.   Child Exits after its execution
            exit(0);
        }
    }
    else
    {
        // 2.   Parent prints its PID and its role
        print_role_pid("Parent");

        wait(NULL);

        // 9.   Parent Prints the PID of Child after its Wait
        printf("Parent: Child has Exited with PID : %d\n", child_pid);

        // 10.  Parent Prints its PID and Exits after its execution
        print_role_pid("Parent");
        exit(0);

        return 0;
    }
}