#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <pthread.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "client.h"
#include "utils.h"
#include "network.h"

float get_balance()
{

}

float debit(const float amount)
{
    float x;
    return x;
}

float credit(const float amount)
{

}

int transfer_money(float amount, int *account_number)
{

}

void get_new_account_info()
{
    Client *c= malloc (sizeof(Client));
    
    const char *banks[3] = {"LCL", "BNP", "CA"};
    for (int i = 0; i < 3; i++)
        printf ("%d. %s\n", i+1, banks[i]);
    printf (" >>> ");
    scanf ("%d", &c->account_number[0]);

    printf ("Enter name: ");
    scanf ("%s", c->name);

    printf ("Enter surname: ");
    scanf ("%s", c->surname);

    printf ("Enter email: ");
    scanf ("%s", c->email);

    printf ("Enter password: ");
    scanf ("%s", c->password);

    printf ("Enter address: ");
    scanf ("%s", c->address);
    
    printf ("Enter email: ");
    scanf ("%s", c->zipcode);

    c->balance = 0;

    generate_new_client_buffer((const Client *)c);
    send_data((const Client *)c);
}

int open_account()
{
    Client *client = get_new_account_info();

    
}

int close_account(int *account_number, const int token)
{

}

int change_email()
{

}

int change_password()
{

}

int main()
{

    return 0;
}
