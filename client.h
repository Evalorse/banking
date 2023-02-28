#ifndef CLIENT_H
#define CLIENT_H

// TODO: Where do i put the token ? 
// => in client struct?
// [=>] the token is sent by bank and stored locally when received

// int token;
typedef struct Client{
    int id;
    int account_number[2]; // {bank_id, account_id}

    char name[128], surname[128];
    char email[128];
    char password[128];
    char address[128];
    char zipcode[10];

    float balance;
} Client;

// Money functions
float get_balance();
float debit(const float amount);
float credit(const float amount);

int transfer_money(float amount, int account_number[2]);

// Account functions
int open_account();
int close_account(int *account_number, const int token);


// Authentication functions 
int change_email();
int change_password();


#endif
