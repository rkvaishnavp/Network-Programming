# Assignment 1: Creating a Child Process

## Author: Vaishnav Prasad R K
### Date: Feb 4, 04:57 AM

## Table of Contents
- [Problem Statement](#problem-statement)
- [Steps](#steps-and-points-allocation)


### 1. Problem Statement

In this assignment, the task is to create a C program that demonstrates the creation of parent, child, and grandchild processes.

### 2. Steps:

1. **Parent Creates Child Process**
   - The parent process should successfully create a child process.

2. **Parent Prints PID and Role**
   - The parent process prints its own PID (Process ID) and its role as 'parent'.

3. **Child Prints PID and Role**
   - The child process prints its own PID and its role as 'child'.

4. **Child Creates Grandchild Process**
   - The child process successfully creates a grandchild process.

5. **Grandchild Prints PID and Role**
   - The grandchild process prints its own PID and its role as 'grandchild'.

6. **Grandchild Exits After Execution**
   - The grandchild process exits gracefully after completing its execution.

7. **Child Prints Grandchild Exit Information**
   - When the grandchild exits, the child process prints a message indicating that the grandchild has exited, along with the grandchild's PID and role.

8. **Child Exits**
   - The child process exits gracefully.

9. **Parent Prints Child Exit Information**
   - When the child exits, the parent process prints a message indicating that the child has exited, along with the child's PID and role.

10. **Parent Exits**
    - The parent process prints its own PID and role before gracefully exiting.