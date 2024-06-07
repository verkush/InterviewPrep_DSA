/*
===========================================================================================================
|                                       DATA TYPES IN C                                                   |
===========================================================================================================
|                                                                                                         |   
|   @brief  C89 defines five foundational data types: character, integer, floating-point, double and      |
|           valueless (void), C99 add three more data types: _Bool, _Complex, _Imaginary                  |
|   @author Ayush Kumar Verma                                                                             |
|                                                                                                         |
-----------------------------------------------------------------------------------------------------------
---------------------------------------------
|     Type              |    Size in bytes  |
---------------------------------------------
| char                  |         1         |
| unsigned char         |         1         |
| signed char           |         1         |
| int                   |         4         |
| unsigned int          |         4         |
| signed int            |         4         |
| short int             |         2         |
| unsigned short int    |         2         |
| signed short int      |         2         |
| long int              |         4         |
| long long int         |         8         |
| signed long int       |         4         |
| unsigned long int     |         4         |
| unsigned long long int|         8         |
| float                 |         4         |
| double                |         8         |
| long double           |         16        |
---------------------------------------------
*/

#include <stdio.h>

int main()
{
    printf("---------------------------------------------\n");
    printf("|     Type    \t\t|    Size in bytes  |\n");
    printf("---------------------------------------------\n");
    printf("| char      \t\t|\t  %d   \t    |\n", sizeof(char));
    printf("| unsigned char  \t|\t  %d   \t    |\n", sizeof(unsigned char));
    printf("| signed char  \t\t|\t  %d   \t    |\n", sizeof(signed char));
    printf("| int       \t\t|\t  %d   \t    |\n", sizeof(int));
    printf("| unsigned int   \t|\t  %d   \t    |\n", sizeof(unsigned int));
    printf("| signed int   \t\t|\t  %d   \t    |\n", sizeof(signed int));
    printf("| short int    \t\t|\t  %d   \t    |\n", sizeof(short int));
    printf("| unsigned short int    |\t  %d   \t    |\n", sizeof(unsigned short int));
    printf("| signed short int    \t|\t  %d   \t    |\n", sizeof(signed short int));
    printf("| long int     \t\t|\t  %d   \t    |\n", sizeof(long int));
    printf("| long long int     \t|\t  %d   \t    |\n", sizeof(long long int));
    printf("| signed long int     \t|\t  %d   \t    |\n", sizeof(signed long int));
    printf("| unsigned long int     |\t  %d   \t    |\n", sizeof(unsigned long int));
    printf("| unsigned long long int|\t  %d   \t    |\n", sizeof(unsigned long long int));
    printf("| float    \t\t|\t  %d   \t    |\n", sizeof(float));
    printf("| double    \t\t|\t  %d   \t    |\n", sizeof(double));
    printf("| long double    \t|\t  %d   \t    |\n", sizeof(long double));
    printf("---------------------------------------------\n");

    return 0;
}