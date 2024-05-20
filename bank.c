#include <stdio.h>

struct bank {
    char name[50];
    int account;
};

int g;
struct bank s;

void details() {
    printf("NAME: %s\n", s.name);
    printf("ACCOUNT NO: %d\n", s.account);
    printf("BALANCE: RS%d\n", g);
}

void transfer() {
    int acc;
    int amo;
    printf("ENTER THE ACCOUNT NO: ");
    scanf("%d", &acc);
    printf("Enter the amount to transfer: ");
    scanf("%d", &amo);
    if(amo<=g){
    g = g - amo;
    printf("Available balance is RS%d\n", g);
    }
    else{
        printf("INSUFFICIENT BALANCE\n ");
    }
}

void credit() {
    int amo;
    printf("Enter the amount to credit: ");
    scanf("%d", &amo);
    g = g + amo;
    printf("Available balance is RS%d\n", g);
}

void withdrawl() {
    int amo;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amo);
    if(amo<=g){
    g = g - amo;
    printf("Available balance is RS%d\n", g);
    }
    else{
        printf("INSUFFICENT BALANCE \n");
    }
}
int main(){
        printf("\t\tWELCOME TO THE BANK\n");
        int id,pass,a;
        printf("enter the name\n");
        scanf("%s",&s.name);
        printf("enter the account number\n");
        scanf("%d",&s.account);
        printf("enter the balance\n ");
        scanf("%d",&g);
        printf("Enter the id: ");
        scanf("%d",&id);
        printf("enter the password: ");
        scanf("%d",&pass);
        if(id==s.account&&pass==s.account/3)
        {
                do{
                printf("Welcome %s\n",s.name);
                printf("press 1 for detials\n");
                printf("press 2 for: TRANSFER\n");
                printf("press 3 for: CREDIT\n");
                printf("press 4 for WITHDRAWL\n");
                printf("press 5 for LOG OUT\n");
                scanf("%d",&a);
                switch(a)
                {
                        case 1:
                        details();
                        break;
                        case 2: 
                        transfer();
                        break;
                        case 3:
                        credit();
                        break;
                        case 4:
                        withdrawl();
                        break;
                        case 5:
                        printf("LOG OUT SUCCESFULLY\n");
                        default :
                        printf("please select valid option\n");
                        break;
                }
                 } while(a!=5);

        }
        else{
                printf("wrong password ");
        }
        return 0;
}