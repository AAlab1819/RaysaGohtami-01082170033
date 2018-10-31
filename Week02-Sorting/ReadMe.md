# SPYKE TALKS
This problem is about how to find out the number of pairs of secretaries of Polycarpus are
talking via Spyke with each other. However, Spyke conferences aren't permitted, means one call connects 
to only two people.

Each call has a unique ID, a positive integer session number. If the secretary wasn't talking via Spyke 
at that moment, the session number is 0.

The first line, we input *n* amount of secretaries are in Polycarpus's corporation.
Then, for each secretary, we input the session number of their call records.
If there has been a mistake in the number of pairs of chatting secretaries, we described the
situation as -1.

So first, we input *secretary* ad the number of secretaries, then each session number in *call[100]* 
array for each secretary with maximum of 100.

For this problem, I use Odd and Even Sort, which use Bubble Sort for odd elements and even elements.

Then, using Odd and Even/ Brick Sort, I create a bool *isSorted* equals to *false*, for determining 
the array list is still not sorted. Then, I make 2 bubble sort *for-loop* to sort the odd indexed element 
and even indexed element.

The loop will swap the *i*th array with *i+1*th array if the *i+1* is bigger than the *i*th, and 
*isSorted* will be equal to *false*.

After theres no more swapping(no more *isSorted*), then the array is sorted. Then, for each element of arrau 
from 0 until *secretary*. If there has been 3 same consecutive session numbers(excluding 0), it means there has been a 
mistake in the records, there so the the output *num* is *-1*, and use *break* for ending the loop.

Another *if-loop* is made for determining that there's a call between 2 secretaries(excluding 0), the value 
of *sum* will be *+1* each time the requirement meets.

Finally, for every *sum* added, we ouput it.

Submission Link: http://codeforces.com/problemset/submission/291/45118749


# DRAGONS
This problem is telling us about Kirito playing a game of fighting dragons. Each level has *n* number 
of dragons he has to fight to move on to the next round. Each dragon has its own strength and bonus strength.
Kirito has to fight dragon lower than or the same as his own strength to move on to the next dragon and by the time he 
has fought a dragon, he obtained bonus strength provided by each dragon.

Kirito can fight dragons in any order. We have to determine if he can move to the next round by defeating 
all dragons in the round without any loss.

In the first line, we input Kirito's strength as *kstrength* and *dragons* as the number of dragons he needs to fight.
Then, in each next line, for each dragons, we input *dstrength[100]* array for *i*th dragon's strength, and 
*bonus* for bonus strength Kirito will aqcuire for defeating *i*th dragon.

For this problem, I use Cocktail Sorting, which will first sort the highest element, then going backwards 
to solve the smallest element, back and forth until no more sorting is possible.

Using *Cocktail Sorting*, I declare a bool called *swapped* equals to *true*, declaring an integer *start* 
that equals to 0, *end* that equals to *n-1* in which *n* is *dragons*.

Then, using a *for-loop* from *start* until *n*, I put an *if-loop* for if *a[i]* is greater than *a[i+1]*
in which *a* is an array for *dstrength*, *a[i]* will swap with *a[i+1]* and so is *s[i]* swaps with *s[i+1]* 
in which *s* is an array for *bonus*, and *swapped* equals to *true*.
Then I also put another *if-loop* in which if theres no more swapping, then the loop will break, and 
*swapped* equals to *false*.

Then, I use another *for-loop* starting from *end*. In this loop, I put an *if-loop* for determining if 
*a[i]* is smaller than *a[i-1]*, then *a[i]* will swap with *a[i+1]* and so will *s[i]* with *s[i+1]*. 
And another *if-loop*, to break the loop and declaring *swapped* into *false* if there's no more 
swapping.

After its been sorted out, I put a *for-loop* until *dragons* times where I put another *if-loop* for 
determining if *kstrength* is greater than(or equal to) *dstrength[i]*. It means that Kirito can defeat 
the dragon, and so *kstrength* has been added *bonus[i]* into it for fighting *i*th dragon.

Then I put another *if-loop* inside the *if-loop*, for determining if Kirito has defeated the last 
dragon(*dragons*-1), then he's able to move on the next round, hence the output will be "YES", and 
breaking the loop. If the condition is other than *kstrength*>=*dstrength[i]*, then the output will be 
"NO", and will break the loop.

Submission Link: http://codeforces.com/problemset/submission/230/45118693


# OATH OF THE NIGHT'S WATCH
This problem begins with the Night's Watch Oath for men who will serve the Night's Watch.
Jon Snow, who is assigned to support the stewards(he will become the commander later. Watch Game of Thrones 
season 5). 

He as *n* number of stewards with their own strength with him whom he has to provide support. He will 
steward only if there exist another steward who's strength is less than him, and if another steward who's 
strength is greater than him.

To find out how many stewards will Jon support, first we input the number of stewards in the Night's Watch 
with *stewards* on the first line. Then on the next line, we input each steward's strength in an array 
called *values[stewards]*.

For this problem, I'm using *Bogo Sort*. By doing Bogo Sort, we shuffle all the elements on the array 
until its sorted. This might take a lot of time if the elements is a lot.

First, I create a bool called *isSorted* to determine if the array has been sorted or no. An *if-loop* 
will check if *a[n]* is smaller than *a[n-1]*, in which *a* is the *value* array and *n* is the number of 
array, *stewards* and will return to false. This loop will keep checking for the condition until the 
number of *n* which is decreasing everytime meets 0. And will be true if all the condition meets.

Then, I made a *shuffle* void to generate the permutation of the array. In this void I put in a *for-loop* 
to swap *a[i]* with the randomized *a[rand()%n)]*

Then, a *bogosort* void is made for shuffling the void *shuffle* until the array meets *isSorted* condition.

Finally, after the bogo sort is done, to check how many stewards has another steward whose strength are 
greater and less than itself, I subtract the number of stewards by 2. The 2 is the one with the least strength 
and the one with the greatest strength, because they couldn't have been supported by Jon. And so id the 
output is less than 0, the output will be 0.

Submission Link: http://codeforces.com/problemset/submission/768/45118768
