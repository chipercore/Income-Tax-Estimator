

#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");

    printf("“This program Estimat the Income Tax.”\n\n\n");

    int income,tax;
    printf("enter your yearly income");
    scanf("%d",&income);

    if
        (income< 0)
        printf("Invalid units");

    else if
        (income <=100000)
        {
            tax = income * 0;
            printf("your Income Tax %d ",tax);
        }


    else if
            (income <= 300000)
        {
            int tax1, tax2;

            tax1 = income - 100000;
            tax2 = tax1 * 5 / 100;

            printf("Your Income Tax: %d\n", tax2);
        }

    else if

            (income <= 600000 && income >= 300000)
        {
            int tax1, tax2,tax3,tax4;

            tax1 = income - 300000;
            tax2 = tax1 * 10 / 100;
            tax3 = 200000 * 5 / 100;
            tax4 = tax2 + tax3;

            printf("Your Income Tax: %d\n", tax4);
        }
    else

        {

            int tax1, tax2,tax3,tax4,tax5;

            tax1 = income - 600000;
            tax2 = tax1 * 15 / 100;
            tax3 = 300000 * 10 / 100;
            tax4 = 200000 * 5 / 100;
            tax5 = tax2+tax3+tax4;

            printf("Your Income Tax: %d\n", tax5);

        }


    return 0;
}

