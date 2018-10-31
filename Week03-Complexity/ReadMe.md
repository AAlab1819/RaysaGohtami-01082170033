# Vanya and Lanterns
This problem is asking about how many minimum radius a lantern *lanterns* needs to light up the whole street with 
*length* length positioned in *point[i]*.

After we input the length of the street *length*, number of lanterns *lanterns* and each point where the lantern
is positioned along the street *point[i]*, we sort the positions using bubble sort.

Then, I declare *gap* as the maximum diameter gap between 2 lanterns with *length-lanterns+2*. Then I create two 
*for-loop*s for checking the biggest gap between 2 lanterns, and 3 *if-loop*s. The first is to check if the first
point of lanterns is equal to the biggest gap it could have, then the output will be the lanterns in the first point.
The second *if* is to check if *(length+1)* subtract by the last lantern point is equal to the biggest gap, then 
the output will be the last lantern point. The third *if* is to check whether the gap between first lantern point 
and the next point is equal to the biggest gap, then the gap divided by two is the output(radius).

Complexity:<br>
`Worst case= *O(n^2)*`<br>
`Average case= *θ(nlogn)*`<br>
`Best case= *Ω(n)*`<br>

Submission Link: http://codeforces.com/problemset/submission/492/45118793


# Insomnia Cure
This problem is asking for how many dragons got damaged physically or morally in the princess' imagination.
She punched every *k*th dragon, shut every *l*th's dragon tail, trampled every *m*th dragon's paws, and threatened 
every *n*th dragon. How many dragons would get hurt if there was a total of *d* dragons?

First, we input *k* with *punched*, *l* with *tail*, *m* with *paws*, *n* with *mom* and *d* with *dragons*.
Then, for every dragon, we kept an array *damaged[dragons]* to count which dragons got hurt.

With a *for-loop*, if every *damaged[i]* met either *punched*, *tail*, *paws*, or *mom*, we add *count* and 
add every *punched*, *tail*, *paws*, and *mom* to their own variables. And if there wasn't any additon to *count*,
a *counter* will keep keep subtract itself starting from *dragons*.

Finally, after the loop happened for *dragons* times, the output will be *counter* based on how many dragons were 
injured.

Complexity:<br>
`Worst case= *O(n)*`<br>
`Average case= *θ(n)*`<br>
`Best case= * Ω(n)*`<br>

Submission Link: http://codeforces.com/contest/148/submission/42906371


# I Wanna Be the Guy
This problem is about a game called "I Wanna Be the Guy". Consisting of *n* levels, there's Little X and Little Y 
who each can pass certain levels. They want to know whether they can pass the whole game together or not.

First, we input the number of levels in the game *levels*, and in the second line shows how many levels Little X 
can pass *p*, following up with each number of levels with *plevel[p]*. In the third line shows how many levels 
Little Y can pass *q*, and also followed by which number of levels *qlevel[q]*.

Then, I created double *for-loop* for each Little X and Little Y until *levels* to check whether if each level 
starting from level 1 is present in either Little X's or Little Y's levels they can pass. If found present, then 
*count* will be added each loop. And finally if the *count* reached the number of levels, then the output will be
"I become the guy." which stated they won the game, and if not then the output will be "Oh, my keyboard!" which 
stated they can't finish all the levels.

Complexity:<br>
`Worst case= *O(n^2)*` <br>
`Average case= *θ(n)*` <br>
`Best case= *Ω(n)*` <br>

Submission Link: http://codeforces.com/contest/469/submission/42883382
