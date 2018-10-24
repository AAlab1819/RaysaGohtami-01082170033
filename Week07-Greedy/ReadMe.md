# Partition
This problem is about dividing a number of *n* elements into two sequences, *b* and *c* which is the sum of 
each elements and then find the maximum value of if we subtract the sum of sequence *c* to *b*.

First, we input *n* integers, then an array of *n*. To get the maximum possible value, we need to put 
numbers below 0 to sequence *c*. To do that, I create an if-loop for each array determining if the *i*th array 
is smaller than 0, then we add it to *c*, and the rest would be added to *b*.

# File Name
This problem is asking how many unexpected problem occured when Polycarp sent a file. It is a problem if the 
file contains 3 or more consecutive *x* character. First, we input *n* numbers of file, then an array of *n* 
characters. To determine how many problem occured, I declared *total* of problems starting from 0.

Then I create a loop for each character, then an if-loop to determine if *i*th array is an 'x' or not. If not, 
then there's no need to continue the remaining function inside the loop. If *i*th array is an 'x', then we go 
on starting from declaring a *counter* from 1, then the counter will keep ++ if *i*th array with *i+1*th array 
as the same character. Until the counter counts at 3, we add the total + 1, then the loop breaks.

For example:
```
Input: 6
file: iixxxx

array[2] and array[3] has 3 consecutive x,
therefore the output would be 2.
```

# Coupons and Discounts
This problem is asking about Sereja who is a coach for ICPC teams. He has *n* number of sessions, and each session 
has *i* team. During every session, Sereja is to buy a pizza for a team. His favorite pizzeria will give out 
discount if he buys 2 pizzas in a day, and coupon that allows him to buy a pizza in 2 consecutive days.

Sereja wants to order the amount of pizza he has to buy during sessions, only with discounts and coupons. 
Determine if he can do that.

First, we input *n* number of sessions, then each sessions we input *teams[i]* number of teams in *i*th session.
Then, I create two if-loops. First is to determine if *i*th session has 0 teams and if the next *i*th session 
has less than 2 teams, meaning he can't use either coupons or discounts. And the other one, vice versa.
If the condition met, then the output will be straight away "NO".
