/*
===========================================================================================================
|                                       DATA TYPES IN C                                                   |
===========================================================================================================
|                                                                                                         |   
|   @brief  A variable is a named location in memory that is used to hold a value and can be modified     |
|           by the program.                                                                               |                                                             
|   @author Ayush Kumar Verma                                                                             |
|                                                                                                         |
-----------------------------------------------------------------------------------------------------------

    A variable is declared as:
        data_type variable_name_list;
*/

#include <stdio.h>

/* Declaring a global variable */
int global_var = 10;

/* Creating a local variable inside the function */
void fun1()
{
    int local_var = 0;

    printf("Value of local variable: %d\n", local_var);
}

int main()
{
    printf("Value of Global variable: %d\n", global_var);
    fun1();
    return 0;
}