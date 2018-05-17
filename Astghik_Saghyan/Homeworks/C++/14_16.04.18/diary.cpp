#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void viewRecord();

struct record {
    char time[6];
    char name[30];
    char place[25];
    char duration[10];
    char note[500];
};

int main() {
    int ch;
    printf("\n\n\t:::::::::::::::::::::::::::::::::::\n");
    printf("\t:PERSONAL DIARY MANAGEMENT SYSTEM:\n");
    printf("\t:::::::::::::::::::::::::::::::::::");

    while(1) {
        printf("\n\n\t\t:MAIN MENU:");
        printf("\n\tPress <1> To VIEW RECORDS\t");
        printf("\n\tPress <2> To EXIT\t\t");
        scanf("%d",&ch);
        switch(ch) {
        case 1:
            viewRecord();
            break;
        case 2:
            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE\n");
            sleep(2);
            exit(0);
        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS ANY KEY TO TRY AGAIN");
            sleep(2);
            break;
        }
        system("clear");
    }
    return 0;
}

void viewRecord() {
    FILE *fpte;
    system("clear");
    struct record customer;
    char filename[14];
    printf("\n\n\t\t::::::::::::::::::::::::::::::\n");
    printf("\t\t\t: VIEWING MENU :");
    printf("\n\t\t::::::::::::::::::::::::::::::\n\n");
    fpte = fopen("2017-01-02"/*filename*/, "rb");
    if(fpte == NULL) {
        puts ("\nTHE RECORD DOES NOT EXIST...\n");
        printf("PRESS ANY KEY TO EXIT...");
        sleep(3);
        return;
    }

    system("clear");
    while (fread(&customer, sizeof(customer), 1, fpte) == 1) {
        printf("\n");
        printf("\nTIME: %s",customer.time);
        printf("\nMEETING WITH: %s",customer.name);
        printf("\nMEETING AT: %s",customer.place);
        printf("\nDURATION: %s",customer.duration);
        printf("\nNOTE: %s",customer.note);
        printf("\n");
    }
    sleep(5);
    fclose(fpte);
    return;
}
