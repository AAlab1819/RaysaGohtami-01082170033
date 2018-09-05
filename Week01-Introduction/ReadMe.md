# Problem 912: Tricky Alchemy
This problem is asking how much yellow and blue crystal Grisha still need to aqcuire to produce a certain amount of yellow, green, and blue balls.

I put in:  ycrystal for representing yellow crystals, bcrystal for representing blue crystals, yball for representing yellow balls, gball for representing green balls, and, bball for representing blue balls
          
To produce a single yellow ball, Grisha needs 2 yellow crystals.
To produce a single green ball, Grisha needs 1 yellow crystal and 1 blue crystal.
To produce a single blue ball, Grisha needs 3 blue crystals.

Grisha currently has *A ycrystal* and *B bcrystal* in her disposal in which we input both the amount of A and B.

In the next line, we input the amount of *X yball*, *Y gball*, and *Z bball* to be obtained.


To find out how much crystals Grisha still needs, I use *for-loop* for each color ball we
want to obtain, the amount of crystals needed are subtracted from the amount of crystal in the disposal.

After we subtracted all the crystals needed to make the balls, if the crystals in the disposal are not enough, the
number of crystal needed will show. If the crystal in the disposal is already enough, the number of the crystals left
in the disposal will show as minus(-).


# Problem 854: Fraction
This problem is asking about solving Petya's mistake. It was told that Petya was converting fractions into decimals
using the calculator.
But somehow Petya mistakenly pressed the addition button instead of the division button. The goal is to converts the
addition result back to the 2 numbers of the fraction: the numerator and the denominator.

It has to be remembered that the numerator has to be smaller than the denominator, and they have to be irreducible, 
means that the numerator and the denominator are coprime (they can't have positive common divisor except for 1).

To help Petya solve the numbers back,

I declare *deno* as the denominator, *nume* as the numerator, and *n* as the sum of the numerator and the denominator
which we input the *n* integer.

To solve this problem, I use the *while-loop* to random a number for the numerator and the demominator, from 1 
until n. With some requirements: if the numerator is bigger than the denominator, or if the sum of the numerator
and the denominator is not equal to n, or when the numerator can be divided by the denominator, the numerator
and the denominator will keep randoming in the loop until they won't meet any of those requirements.

And when the loop stops, we have found the integer for the numerator and the denominator.


# Problem 988: Diverse Team
In this problem, we have to create a team consisting of *n* students, from a class consisting of *k* students, in 
which k are greater than n. Each students in a class has a rating of their own. The requirement of a team, is that 
each student must have distinct rating. If it is not possible, then there's no way to create a team. If there is, 
we have to give out which students.


First thing to do is declaring *students* as the number of students in the class, then *members* as the number of
students in a team, and *rating[100]* as the rating of each students put in an array maximum of 100 students.

Then the first step is to input the number of students in class and the number of members in the  team.
Then, based on the number of students, we input each rating of the students.

To determine if we can create a team with its requirements, I declare an integer *count* equal to *students*.
Then, in a *for-loop*, looping until j reaches *students*, creating an 2 *if*'s. 
The first *if* is when the *j* array is equal to the *n+1* array (in which n are declared as 0), the *count* will
subtract itself. If its different, then the *n* will add up.

Finally, when its done looping, if the *count* is greater than or equal to *members*, then it is possible to create 
a team. If its less than *members*, then its not possible.

If its possible, to give out which students in the team, I use the *for-loop* twice *k*and *l* in which the maximum times 
of the looping are *students* times, and use the *if* in the second loop. The if tells that if rating number *k* and rating number *l* 
are equal, then the *l* rating is false.

Then, by creating another *for-loop* of the *students*, it typed out which in order which student is in the team.
