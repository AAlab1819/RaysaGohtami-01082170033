# Roy and Trending Topics
This problem is about a list of Trending Topic Roy is trying to gather. He has N list of of topics 
and each topic has a unique ID and popularity score(z-score). When a topic is mentioned in a Post, 
its z-score is increases by 50. A Like on the Post increases the z-score by 5, a Comment increases 
z-score by 10 and a Share increases 20.

First we input the number of post, declared by *number*.
Following that, I create 2 *for-loop* to input *number* lines, and each line, we input *j*th *id[j]*, 
*old_score[j]*, *post[j]*, *like[j]*, *comment[j]*, and *share[j]*.

And in that loop, we update the *post, like, comment*, and *share* value by adding itself to whatever 
the original value * their own score.
Then, following that, I also update *new_score_ value by adding all *post, like, comment*, and *share* 
value, and the difference between the new score and the old score, *diff*.

What I did is heapSort the *diff*, *new_score, id*, and *number*. Sorting the difference only, and then 
swapping *new_score, id*, and the *number* accordingly everytime *diff* did a swap too.

And finally, I create another *for-loop* in case if we have 2 same values of *diff*, we sort them again 
according to the smalles *id*.


# Find the Running Median
This problem is about finding median each data. We input a *number* of total data, then for each line 
until *number*, we input its data. Then, for *i*th data, I did heapSort to find the median as many as 
*i*. If the *i* is 0, then we only have 1 data, and the median should be itself.

For example if we have 4 data: 5, 6, 3, 1.
1. The first line consist of only 5, therefore the median is 5 itself, no heapsort needed.
2. The second line consist of 5 and 6, therefore the median is 5+6 then divided by 2, because the data is already sorted.
3. The thirld line consist of 5, 6, and 3, using heapsort, the data become 3, 5, and 6. Then the median would be 5.
4. The fourth line consist of 5, 6, 3, and 1, using heapsort, the data become 1, 3, 5, 6. Therefore the median would be 3+5 divided by 2.
