# Kuriyama Mirai's Stones

Given a list of stones, each with their own price. The questions possible is type one and two: type one will be sum of stone's cost from l to r and type two will be sum of stone's cost from l to r in an non-decreasing order.
The solution given is to use cumulative array because if we count the sum in each question over and over the time limit will exceed. So, as what have been stated before, we store the cost in two cumulative array: for the normal one and sorted array. Then to get the sum from l to r, it will be array[r-1] - array[l-2]. Except if l=1, Then we just need to take array[r] cause it is the sum from 1 to r.

Submission Link: http://codeforces.com/contest/433/submission/45181316

# Party Lemonade  

The problem given is to find the cheapest cost to fullfill the lemonade liters needed. Where each bottle have different volume and cost, the volume of the i-th bottle will be 2i-1 liters. You can buy more than a bottle with the same volume. You can have more lemonade in liters than the required number. 

The solution is first to store the cost for each type of bottle. Then, we will check if we can buy 2 bottle of smaller type of bottle with cheaper price rather than 1 bottle with higher price. If the bigger bottle cost higher, then we will store that type of bottle with the price of 2 smaller bottle.

Then we loop all the bottles from the highest liters down to the smallest liters. Then we will see is it cheaper to buy 2 of the biggest bottle if it is still left to fullfill or 1 bottle and other bottle to fullfill the need of the lemonade. 

Submission Link: http://codeforces.com/contest/913/submission/45181360
