#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, i, n, i1, time, year, n1, num, j, k, m;
char c1[15], c2[15], c3[15], c4[15], c5[15], c6[15], name[50], ch , c7[20] ,c8[20];

void group_info();   // FUNCTION FOR GROUP INFORMATION
char security();     // FUNCTION FOR TAKING ADMINS PASSWORD .
void password();     // FUNCTION FOR CHEAKING ADMINS PASSWORD .
void display();      // FUNCTION FOR DISPLAY RESERVE MOVIE.
void movie_update(); // FUNCTION FOR UPDATE MOVIE.
void logout();       // FUNCTION FOR LOGOUT.
struct document
{
    char day[15];
    char movie_type[20];
    char movie_name[50];
    char actors_name[50];
    char release_date[15];
    char time[15];
    char show_time1[15];
    char show_time2[15];
};

int main()
{
    system("color F0");

    while (1)
    {
        // Part of Menu ( Home page)

        printf("\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t=> WELCOME TO OUR PROJECT <=\n");
        printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

        printf("\n\n");

        printf("\t\t\t\t\t\t\t\t\t-------------------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t     => MOVIE THEATER MANAGEMENT <=\n");
        printf("\t\t\t\t\t\t\t\t\t-------------------------------------------------------\n");

        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|               Home Page               |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

        display();

        /*printf("\t\t\t----------------------------------------\t\t---------------------------------------  \t\t----------------------------------------\n");
        printf("\t\t\t| Movie name : Priyotoma (2D)          |\t\t| Movie name : Aynabaji               |  \t\t| Movie name : 3 idiots                |\n");
        printf("\t\t\t| Actor      : Sakib Khan,Idhika Paul  |\t\t| Actor      : Chanchal Chowdhury     |  \t\t| Actor      : Amir Khan               |\n");
        printf("\t\t\t| Genre      : Action,Drama            |\t\t| Genre      : Crime Thriller         |  \t\t| Genre      : Comedy drama            |\n");
        printf("\t\t\t| Release    : 29-06-2023              |\t\t| Release    : 30-09-2016             |  \t\t| Release    : 25-12-2009              |\n");
        printf("\t\t\t| Time       : 140 Min                 |\t\t| Time       : 147 Min                |  \t\t| Time       : 171 Min                 |\n");
        printf("\t\t\t----------------------------------------\t\t---------------------------------------  \t\t----------------------------------------\n");

        printf("\t\t\t----------------------------------------\t\t---------------------------------------- \t\t----------------------------------------\n");
        printf("\t\t\t| Movie name : The Dark Knight         |\t\t| Movie name : Interstellar            | \t\t| Movie name : Shurongo                |\n");
        printf("\t\t\t| Actor      : Christian Bale          |\t\t| Actor      : Metthew McConaughey     | \t\t| Actor      : Afran Nisho             |\n");
        printf("\t\t\t| Genre      : Action + Adventure      |\t\t| Genre      : Si-fi                   | \t\t| Genre      : Mystry                  |\n");
        printf("\t\t\t| Release    : 18-08-2008              |\t\t| Release    : 07-11-2014              | \t\t| Release    : 29-06-2023              |\n");
        printf("\t\t\t| Time       : 152 Min                 |\t\t| Time       : 169 Min                 | \t\t| Time       : 150  Min                |\n");
        printf("\t\t\t----------------------------------------\t\t---------------------------------------- \t\t----------------------------------------\n");*/

        printf("\t\t\tWould you want to visit our theater?\n");
        printf("\t\t\t---------------\n");
        printf("\t\t\t| 1. Yes      |\n");
        printf("\t\t\t| 0. No       |\n");
        printf("\t\t\t---------------\n");

        printf("\t\t ==>> ANS: ");
        scanf("%d", &s1);

        // getch();
        system("cls");

        printf("\n\n");

        if (s1 == 1)
        {
        A: // come 1960
        {
            // Main menu

            printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t|               MAIN MENU               |\n");
            printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

            printf("\n");

            printf("\t\t\t\t\t---------------------- \t\t\t\t-----------------------\t\t\t\t----------------------\n");
            printf("\t\t\t\t\t|   1. Admin Pannel  |\t\t\t\t|   2. Users Pannel   |\t\t\t\t|   3. About Admin   |\n");
            printf("\t\t\t\t\t----------------------\t\t\t\t-----------------------\t\t\t\t----------------------");
        }

            printf("\n");
            printf("\t\tPlease submit your choice ==>> ");
            scanf("%d", &s2);
            // getch();
            system("cls");
            switch (s2)
            {
            case 1:
            {
                system("color 2");

                printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t|  It is only for authority.  |\n");
                printf("\t\t\t\t\t\t\t\t\t\t|     Not for the public      |\n");
                printf("\t\t\t\t\t\t\t\t\t\t-------------------------------\n");

                printf("\n\t\t\t\t\t\t\t\t\t\t   -------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t   |      Admin Login      |\n");
                printf("\t\t\t\t\t\t\t\t\t\t   -------------------------\n");
                getch();
                system("cls");

                system("color 3");
                printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t-------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t|     Inter your security     |\n");
                printf("\t\t\t\t\t\t\t\t\t\t|          Admin code         |\n");
                printf("\t\t\t\t\t\t\t\t\t\t|             AND             |\n");
                printf("\t\t\t\t\t\t\t\t\t\t|          PASSWORD           |\n");
                printf("\t\t\t\t\t\t\t\t\t\t-------------------------------\n");

                security();

                printf("\t\t\t\t\t\t\t\t-------------------------\t\t\t--------------------------\n");
                printf("\t\t\t\t\t\t\t\t|   1. Previous Movie   |\t\t\t|     2. Update Movie    |\n");
                printf("\t\t\t\t\t\t\t\t-------------------------\t\t\t--------------------------\n");

                printf("\n");
                printf("\t\t\tPlease submit your choice ==>> ");

                scanf("%d", &num);

                system("cls");

                switch (num)
                {
                case 1:
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\t   -------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t   |     Previous Movie    |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t   -------------------------\n");

                    printf("\n\n\n");

                    display();

                    printf("\n\n\n");

                    printf("\t\t\t\t\t\t\t\t-------------------------\t\t\t--------------------------\n");
                    printf("\t\t\t\t\t\t\t\t|   1. Update movie     |\t\t\t|       0. Logout        |\n");
                    printf("\t\t\t\t\t\t\t\t-------------------------\t\t\t--------------------------\n");

                    printf("\n\n\n");
                    printf("\t\t\tUpdate movie, please press (1) ");
                    printf("\n\t\t\tIf you want to log out, please press (0) ");
                    printf("\n\t\t\tPlease submit your choice ==>> ");
                    scanf("%d", &j);

                    system("cls");

                    if (j == 1)
                    {
                        printf("\n\n\n\n\n\n\n\n");
                        movie_update();
                    }
                    else if (j == 0)
                    {
                        printf("\n\n\n\n\n\n\n\n");
                        logout();
                    }
                    break;
                }
                case 2:
                {
                    printf("\n\t\t\t\t\t\t\t\t\t\t   -------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t   |     Previous Movie    |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t   -------------------------\n");

                    display();

                    printf("\n\n");

                    movie_update();
                }
                break;
                }

                /*getch();
                system("cls");
                system("color F0");
                continue;*/

                break;
            }

            case 2:
            {

                // Customer pannel

                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t|     Welcome our customer pannel      |\n");
                printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

                printf("\n\n");

                printf("\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                printf("\t\t\t\t\t\t\t\t|     1. login       |\t\t\t\t|     2. Sign up      |\n");
                printf("\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                printf("\n");
                printf("\t\tPlease submit your choice ==>> ");
                scanf("%d", &s4);
                // getch();
                system("cls");
                // Login part.

                if (s4 == 1)
                {
                    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t|               Login                  |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                D:
                {
                B: // goto 2878
                {
                    printf("\n\n\t\t\t\t\t\t\t\tUser name : ");
                    scanf("%s", &c1);
                    printf("\t\t\t\t\t\t\t\tPassword  : ");
                    scanf("%s", &c2);
                }
                    // getch();
                    system("cls");

                    if (strstr(c1, c2))
                    {
                        system("color A0");
                        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t|       You are successfully Login       |\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                        getch();
                        system("color F0");
                    H: // come 2908
                    {
                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t|             Types of Movie             |\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                        printf("\t\t\t\t\t---------------------- \t\t\t\t-----------------------\t\t\t\t---------------------\n");
                        printf("\t\t\t\t\t|    1. Bangla       |\t\t\t\t|      2. Hindi       |\t\t\t\t|   3. Enlish       |\n");
                        printf("\t\t\t\t\t----------------------\t\t\t\t-----------------------\t\t\t\t---------------------");

                        printf("\n");
                        printf("\t\tPlease submit your choice ==>> ");
                        scanf("%d", &s12);
                        // getch();
                        system("cls");
                        if (s12 == 1)
                        {

                        C: // come 795
                        {
                            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t|         BANGLA MOVIE MENU            |\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

                            printf("\t\t\t\t----------------------------------------\t\t----------------------------------------\t\t----------------------------------------\n");
                            printf("\t\t\t\t| Movie name : Priyotoma (2D)          |\t\t| Movie name : Shurongo                |\t\t| Movie name : Durgo Rohosyo           |\n");
                            printf("\t\t\t\t| Actor      : Sakib Khan,Idhika Paul  |\t\t| Actor      : Afran Nisho             |\t\t| Actor      : Dav                     |\n");
                            printf("\t\t\t\t| Genre      : Action,Drama            |\t\t| Genre      : Mystry                  |\t\t| Genre      : Mistry                  |\n");
                            printf("\t\t\t\t| Release    : 29-06-2023              |\t\t| Release    : 29-06-2023              |\t\t| Release    : 12-05-2023              |\n");
                            printf("\t\t\t\t| Time       : 140 Min                 |\t\t| Time       : 150  Min                |\t\t| Time       : 150 Min                 |\n");
                            printf("\t\t\t\t| Day        : Tuesday                 |\t\t| Day        : Wednesday               |\t\t| Day        : Thursday                |\n");
                            printf("\t\t\t\t|          1. Show time                |\t\t|           2. Show time               |\t\t|           3. Show time               |\n");
                            printf("\t\t\t\t----------------------------------------\t\t----------------------------------------\t\t----------------------------------------\n");
                        }

                            printf("\n");
                            printf("\t\tPlease submit your choice ==>> ");
                            scanf("%d", &s5);

                            // getch();
                            system("cls");

                            printf("\n\n");

                            if (s5 == 1)
                            {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|                  Tuesday               |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|      | 10:50 AM |     | 04:50 PM |     |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|              1. Get Ticket             |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\n");
                                printf("\t\tTo get ticket , please press 1\n");
                                printf("\t\tGo back to movie menu, please press 0\n");
                                printf("\t\tPlease submit your choice ==>> ");
                                scanf("%d", &s6);
                                // getch();
                                system("cls");

                                if (s6 == 1)
                                {
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 1. 10:50 AM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 2. 04:50 PM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n");
                                    printf("\t\tPlease submit your choice ==>> ");
                                    scanf("%d", &s7);

                                    if (s7 == 1)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease submit your choice ==>> ");
                                            scanf("%d", &s10);
                                            // getch();
                                            system("cls");
                                            if (s10 == 1)
                                            {

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);
                                            // getch();
                                            system("cls");
                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                    else if (s7 == 2)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease give your demand ==>> ");
                                        scanf("%d", &s8);
                                        // getch();
                                        system("cls");
                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Priyotoma                 |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n\n\n\n\n\n\n\n\n");
                                    goto C; // come 280.
                                }           // goto main menu.
                            }
                            else if (s5 == 2)
                            {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|                 Wednesday              |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|      | 10:50 AM |     | 04:50 PM |     |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|              1. Get Ticket             |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\n");
                                printf("\t\tTo get ticket , please press 1\n");
                                printf("\t\tGo back to movie list , please press 0\n");
                                printf("\t\tPlease submit your choice ==>> ");
                                scanf("%d", &s6);

                                // getch();
                                system("cls");

                                if (s6 == 1)
                                {
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 1. 10:50 AM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 2. 04:50 PM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n");
                                    printf("\t\tPlease submit your choice ==>> ");
                                    scanf("%d", &s7);

                                    if (s7 == 1)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your demand ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                    else if (s7 == 2)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease give your demand ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Shurongo                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n\n\n");
                                    goto C;
                                } // goto main menu.
                            }
                            else if (s5 == 3)
                            {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|                 Thursday               |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|      | 10:50 AM |     | 04:50 PM |     |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|              1. Get Ticket             |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\n");
                                printf("\t\tTo get ticket , please press 1\n");
                                printf("\t\tGo back to movie list , please press 0\n");
                                printf("\t\tPlease submit your choice ==>> ");
                                scanf("%d", &s6);

                                // getch();
                                system("cls");

                                if (s6 == 1)
                                {
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 1. 10:50 AM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 2. 04:50 PM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n");
                                    printf("\t\tPlease submit your choice ==>> ");
                                    scanf("%d", &s7);

                                    if (s7 == 1)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                    else if (s7 == 2)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : Durgo Rohosyo             |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n\n\n");
                                    goto C;
                                } // goto main menu.
                            }

                        } // if for balgla movie

                        //  Hindi movie info.

                        else if (s12 == 2)
                        {
                        F: // come 2321
                        {
                            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t|          HINDI MOVIE MENU            |\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

                            printf("\t\t\t\t----------------------------------------\n");
                            printf("\t\t\t\t| Movie name : 3 idiots                |\n");
                            printf("\t\t\t\t| Actor      : Amir Khan               |\n");
                            printf("\t\t\t\t| Genre      : Comedy drama            |\n");
                            printf("\t\t\t\t| Release    : 25-12-2009              |\n");
                            printf("\t\t\t\t| Time       : 171 Min                 |\n");
                            printf("\t\t\t\t| Date       : Tuesday                 |\n");
                            printf("\t\t\t\t|          1. Show time                |\n");
                            printf("\t\t\t\t----------------------------------------\n");
                        }

                            printf("\n");
                            printf("\t\tPlease submit your choice ==>> ");
                            scanf("%d", &s5);

                            // getch();
                            system("cls");

                            printf("\n\n");

                            if (s5 == 1)
                            {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|                  Tuesday               |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|      | 10:50 AM |     | 04:50 PM |     |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|              1. Get Ticket             |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\n");
                                printf("\t\tTo get ticket , please press 1\n");
                                printf("\t\tGo back to movie menu, please press 0\n");
                                printf("\t\tPlease submit your choice ==>> ");
                                scanf("%d", &s6);

                                // getch();
                                system("cls");

                                if (s6 == 1)
                                {
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 1. 10:50 AM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 2. 04:50 PM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n");
                                    printf("\t\tPlease submit your choice ==>> ");
                                    scanf("%d", &s7);

                                    if (s7 == 1)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                    else if (s7 == 2)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : 3 idiots                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n\n\n\n\n\n\n\n\n");
                                    goto F; // come 1801
                                }
                            }
                        } // else if for hindi movie.

                        // English movie info.

                        else if (s12 == 3)
                        {
                        G: // come 2855
                        {
                            printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t|        ENGLISH MOVIE MENU            |\n");
                            printf("\t\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

                            printf("\t\t\t\t----------------------------------------\n");
                            printf("\t\t\t\t| Movie name : The Dark Knight         |\n");
                            printf("\t\t\t\t| Actor      : Christian Bale          |\n");
                            printf("\t\t\t\t| Genre      : Action + Adventure      |\n");
                            printf("\t\t\t\t| Release    : 18-08-2008              |\n");
                            printf("\t\t\t\t| Time       : 152 Min                 |\n");
                            printf("\t\t\t\t| Date       : Tuesday                 |\n");
                            printf("\t\t\t\t|          1. Show time                |\n");
                            printf("\t\t\t\t----------------------------------------\n");
                        }

                            printf("\n");
                            printf("\t\tPlease submit your choice ==>> ");
                            scanf("%d", &s5);

                            // getch();
                            system("cls");

                            printf("\n\n");

                            if (s5 == 1)
                            {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|                  Tuesday               |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|      | 10:50 AM |     | 04:50 PM |     |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t|              1. Get Ticket             |\n");
                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                printf("\n");
                                printf("\t\tTo get ticket , please press 1\n");
                                printf("\t\tGo back to movie menu, please press 0\n");
                                printf("\t\tPlease submit your choice ==>> ");
                                scanf("%d", &s6);

                                // getch();
                                system("cls");

                                if (s6 == 1)
                                {
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 1. 10:50 AM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|                 2. 04:50 PM            |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Regular seat : 450.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t|        Premium seat : 500.00 Tk        |\n");
                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                    printf("\n");
                                    printf("\t\tPlease submit your choice ==>> ");
                                    scanf("%d", &s7);

                                    if (s7 == 1)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 10:50 AM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                    else if (s7 == 2)
                                    {
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      1. Regular seat : 450.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t|      2. Premium seat : 500.00 Tk       |\n");
                                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                        printf("\n");
                                        printf("\t\tPlease submit your choice ==>> ");
                                        scanf("%d", &s8);

                                        // getch();
                                        system("cls");

                                        if (s8 == 1)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available Regular seat 40          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s10);

                                            // getch();
                                            system("cls");

                                            if (s10 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s10 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 22);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                        else if (s8 == 2)
                                        {
                                            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|     Available premium seat 50          |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t|            Payment Mathode             |\n");
                                            printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                            printf("\t\t\t\t\t\t\t\t\t---------------------- \t\t\t\t-----------------------\n");
                                            printf("\t\t\t\t\t\t\t\t\t|     1. bkash       |\t\t\t\t|     2. Roket        |\n");
                                            printf("\t\t\t\t\t\t\t\t\t----------------------\t\t\t\t-----------------------\n");

                                            printf("\t\t\t\t\t\t\tPlease give your choice ==>> ");
                                            scanf("%d", &s11);

                                            // getch();
                                            system("cls");

                                            if (s11 == 1)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                            else if (s11 == 2)
                                            {
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|       How much ticket do you want?     |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");

                                                printf("\t\t\t\t\t\t\tPlease write down your demand ==>> ");
                                                scanf("%d", &n);

                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               For verify               |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                                printf("\t\t\t\t\t\t\t\tYour phone number: ");
                                                scanf("%s", &c3);
                                                printf("\t\t\t\t\t\t\t\tPassword         : ");
                                                scanf("%s", &c4);

                                                // getch();
                                                system("cls");

                                                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|             TICKETS                   |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

                                                for (i = 1; i <= n; i++)
                                                {
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie name : The Dark Knight           |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Movie time : 04:50 PM                  |\n");
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t| Seat no.   : %d                        |\n", i + 12);
                                                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                }
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|               Thank You                |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t|      Please, collect your ticket       |\n");
                                                printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n");
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("\n\n\n\n\n\n\n\n\n");
                                    goto G; // come 2330
                                }
                            }
                        } // else if for english movie
                    }
                    }

                    else
                    {
                        system("color C0");
                        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t|     Invalid user name and password     |\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                        getch();
                        system("color F0");
                        printf("\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t|                Try Again               |\n");
                        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                        printf("\n");
                        goto B; // goto line
                    }           // if else for pasword
                }

                } // Login if

                else if (s4 == 2)
                {
                    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t|              Sign up                 |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t----------------------------------------\n");

                    printf("\n\n\t\t\t\t\t\t\t\tUser name : ");
                    scanf("%s", &c5);
                    printf("\t\t\t\t\t\t\t\tPassword  : ");
                    scanf("%s", &c6);

                    // getch();
                    system("cls");
                    system("color A0");

                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t|      You are successfully Sign up      |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                    getch();
                    system("color F0");

                    goto H; // come 260
                }           // sign up else if.

                printf("\n");

                printf("\t\t\t\t For going home page\n\t\t\t\t please press : (1)\n");

                printf("\t\t\t\t Please submit your choice ==>> ");
                scanf("%d", &s13);

                // getch();
                system("cls");

                if (s13 == 1)
                {
                    continue;
                }
                printf("\n\n\n\n\n\n");

                break;
            } // case 2 end.

            case 3:
            {

                // Group informations

                printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t\t\t|     INFORMATION OF GROUP MEMBERS       |\n");
                printf("\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

                group_info();

                printf("\n");

                getch();

                printf("\t\t\t\t For going the main menu\n\t\t\t\t please press : (1)\n\t\t\t\t For exit website press : (0)\n");

                printf("\t\t\t\t Please submit your choice ==>> ");
                scanf("%d", &s3);
                // getch();
                system("cls");
                if (s3 == 1)
                {
                    printf("\n\n\n\n\n");
                    goto A; // [ Line number 90 ]
                }
                else
                {
                    printf("\n\n\n\n\n\n\n\n");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n");
                    printf("\t\t\t\t\t\t\t\t\t\t|              THANK YOU                  |\n");
                    printf("\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n\n\n\n\n\n\n");
                    break;
                }

                printf("\n\n\n\n\n\n");
                break;
            } // case 3 end.

            } // switch end.

            break;
        } // main if end.
        else
        {
            printf("\n\n\n\n\n\n\n\n");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n");
            printf("\t\t\t\t\t\t\t\t\t\t|              THANK YOU                  |\n");
            printf("\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n\n\n\n\n\n");
            break;
        }

    } // while end.

} // main function end.

void group_info() // FUNCTION 1 FOR GROUP INFORMATION
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|    Group name :  [Cypher 1]            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t------------------------------------------\n\n\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|    NAME     : Sirajum Munir.            |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|    ID       : 0242320005101008          |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|    SECTION  : '65_A'                    |\n");
    printf("\t\t\t\t\t\t\t\t\t\t|    PHONE NO : 01885701076               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t-------------------------------------------\n\n\n");

    // printf("\n");

    printf("\t\t\t\t---------------------------------------\t\t\t\t\t\t\t\t---------------------------------------\n");
    printf("\t\t\t\t| NAME     : Zubaer Rahman Jisan      |\t\t\t\t\t\t\t\t| NAME     : Hasnat Bin Hossain Sakib |\n");
    printf("\t\t\t\t| ID       : 0242320005101152         |\t\t\t\t\t\t\t\t| ID       : 0242320005101552         |\n");
    printf("\t\t\t\t| SECTION  : '65_A'                   |\t\t\t\t\t\t\t\t| SECTION  : '65 A'                   |\n");
    printf("\t\t\t\t| PHONE NO : 01711034536              |\t\t\t\t\t\t\t\t| PHONE NO : 01303643390              |\n");
    printf("\t\t\t\t---------------------------------------\t\t\t\t\t\t\t\t---------------------------------------\n");

    printf("\n");

    printf("\t\t\t\t---------------------------------------\t\t\t\t\t\t\t\t--------------------------------------\n");
    printf("\t\t\t\t| NAME     : Sumaiya Sadat Alpona     |\t\t\t\t\t\t\t\t| NAME     : Md Ariful Islam Redoyan |\n");
    printf("\t\t\t\t| ID       : 0242320005101027         |\t\t\t\t\t\t\t\t| ID       : 0242320005101734        |\n");
    printf("\t\t\t\t| SECTION  : '65 A'                   |\t\t\t\t\t\t\t\t| SECTION  : '65 A'                  |\n");
    printf("\t\t\t\t| PHONE NO : 01315909653              |\t\t\t\t\t\t\t\t| PHONE NO : 01778068843             |\n");
    printf("\t\t\t\t---------------------------------------\t\t\t\t\t\t\t\t--------------------------------------\n");
}

char security() // FUNCTION FOR ADMINS PASSWORD TAKING.
{
    printf("\n\n\t\t\t\t\t\t\t\tAdmin code : ");
    fflush(stdin);
    gets(c7);
    printf("\t\t\t\t\t\t\t\tAdmin Password  : ");
    fflush(stdin);
    gets(c8);

    password(c7, c8);
}
void password(char c7[], char c8[]) // FUNCTION FOR ADMINS PASSWORD CHEAKING.
{

    if (strcmp(c7, "sirajummunir@movie.bd") == 0 && strcmp(c8, "1008") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|            SIRAJUM MUNIR              |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    }
    else if (strcmp(c7, "jisan@movie.bd") == 0 && strcmp(c8, "1152") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|         Zubaer Rahman Jisan           |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    }
    else if (strcmp(c7, "sakib@movie.bd") == 0 && strcmp(c8, "1552") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|       Hasnat Bin Hossain Sakib        |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    }
    else if (strcmp(c7, "alpona@movie.bd") == 0 && strcmp(c8, "1027") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|         Sumaiya Sadat Alpona          |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    }
    else if (strcmp(c7, "redoyan@movie.bd") == 0 && strcmp(c8, "1734") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t|       Md Ariful Islam Redoyan         |\n");
        printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    }
    else
    {
        system("cls");
        system("color C0");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|     Invalid user name and password     |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

        getch();
        system("color 3");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t|                Try Again               |\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t------------------------------------------\n");

        printf("\n");
        security();
    }
}
void display()
{
    FILE *file;
    file = fopen("movie.txt", "r");
    printf("\n\n");

    while (!feof(file))
    {
        ch = fgetc(file);
        printf("%c", ch);
    }
    fclose(file); 
}

void movie_update()
{
    struct document doc1;
    FILE *file;
    file = fopen("movie.txt", "w");
    printf("\t\t\tHow many movie do you want to add = ");
    scanf("%d", &n1);
    printf("\n\n\n");

    do
    {
        printf("\t\t\tEnter the name of day: ");
        fflush(stdin);
        gets(doc1.day);
        printf("\n");

        printf("\t\t\tEnter the movie type : ");
        fflush(stdin);
        gets(doc1.movie_type);
        printf("\n");

        printf("\t\t\tEnter the movie name : ");
        fflush(stdin);
        gets(doc1.movie_name);
        printf("\n");

        printf("\t\t\tEnter the Actors name : ");
        fflush(stdin);
        gets(doc1.actors_name);
        printf("\n");

        printf("\t\t\tEnter the release date : ");
        fflush(stdin);
        gets(doc1.release_date);
        printf("\n");

        printf("\t\t\tEnter the Time : ");
        fflush(stdin);
        gets(doc1.time);
        printf("\n");

        printf("\t\t\tEnter the Show Time Slot-A: ");
        fflush(stdin);
        gets(doc1.show_time1);
        printf("\n");

        printf("\t\t\tEnter the Show Time Slot-B: ");
        fflush(stdin);
        gets(doc1.show_time2);
        printf("\n");

        fprintf(file, "\t\t\t\t\t\tDAY==>%s\n\t\t\t\t\t\tMOVIE TYPE==>%s\n\t\t\t\t\t\tMOVIE NAME==>%s\n\t\t\t\t\t\tACTORS NAME==>%s\n\t\t\t\t\t\tRELEASE DATE==>%s\n\t\t\t\t\t\tTIME==>%s\n\t\t\t\t\t\tSHOW TIME(Slot-A)==>%s\n\t\t\t\t\t\tSHOW TIME(Slot-B)==>%s\n\n\n\n", doc1.day, doc1.movie_type, doc1.movie_name, doc1.actors_name, doc1.release_date, doc1.time, doc1.show_time1, doc1.show_time2);

        file = fopen("movie.txt", "a");
        i1++;
        system("cls");
        printf("\n\n\n\n\n\n\n");

    } while (i1 <= n1 - 1);

    fclose(file);

    system("cls");

    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|            LOADING............        |\n");
    printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

    getch();
    system("cls");

    printf("\n\n\n\n\n\n\n\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|         UPDATE SUCCESSFULLY           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");

    printf("\n\n\t\t\tFOR LOGOUT PLEASE PRESS (0) ====>>>> ");
    scanf("%d", &m);
    if (m == 0)
    {
        logout();
    }
}

void logout()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t|         logout SUCCESSFULLY           |\n");
    printf("\t\t\t\t\t\t\t\t\t\t-----------------------------------------\n");
}
