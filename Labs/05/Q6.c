main() {
    float act_amount;
    float saved_amount;
    float dis;
    float amount_dis; 
    printf ("Enter total cost of items \n");
    scanf ("%f" ,&act_amount);
    if (act_amount >= 2000 && act_amount <= 4000) {
        dis = act_amount * 0.2;
        amount_dist = act_amount - dis;
        saved_amount = act_amount - amount_dis; 
        printf ("The actual amount was: %f \n",act_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_dist);
    }
    else if (act_amount >= 4001 && act_amount <= 6000) {
        dis = act_amount * 0.3;
        amount_dis = act_amount - dis;
        saved_amount = act_amount - amount_dis; 
        printf ("The actual amount was: %f \n",act_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_dis);
    }
     else if (act_amount > 6000) {
        dis = act_amount * 0.5;
        amount_dis = act_amount - dis;
        saved_amount = act_amount - amount_dis; 
        printf ("The actual amount was: %f \n",act_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_dis);
    }
    else {
        printf ("You are not able to avail the discount as your total amount is less than 2000 \n");
    }
}
