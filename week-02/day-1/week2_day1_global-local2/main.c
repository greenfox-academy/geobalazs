#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;

int can_they_buy_a_new_tv()
{
    int tv_price = 6950;
    int boys_money = tom_money + mark_money + jerry_money;
    int leftover = tv_price - boys_money;
    if (leftover >= 0){
        printf("They saved %d money\n" , leftover);
    } else {
        printf("They need %d money\n" , leftover);
    }
    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;

    int sum = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;
    int boys_money = tom_money + mark_money + jerry_money;
    int share = 0;

    if(sum <= boys_money){
        if (sum != boys_money){
            share = (boys_money - sum) / 3;
            printf("One person need to pay %d\n" , share);
        } else {
            share = sum/3;
            printf("One person need to pay %d\n" , share);
        }

    }
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;

    int sum = milk + egg + salt + ham + onion + spice;
    int boys_money = tom_money + mark_money + jerry_money;
    int share = 0;


    if(sum <= boys_money){
        if (sum != boys_money){
            share = (boys_money - sum) / 3;
            printf("One person need to pay %d\n" , share);
        } else {
            share = sum/3;
            printf("One person need to pay %d\n" , share);
        }

    }


    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
    printf("Buy TV:\n");
    can_they_buy_a_new_tv();
    printf("Make cake:\n");
    can_they_make_a_cake();
    printf("Make h&e TV:\n");
    can_they_make_ham_and_eggs();
	return 0;

}
