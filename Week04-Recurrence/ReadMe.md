# Igor In the Museum
This problem is asking about how many pictures can Igor see in a spot in a museum.<br>
There are l *length* and w *wide* cells in a museum. Each cell is filled with a character,
either '*' or '.'. '* stands for a wall, with a picture on it. And '.' stands for a position to
walk on the museum.

For example, a 3x3 museum with:<br>
```
*  *  *
*  .  *
*  *  *
```
Igor stands on (2,2) position, and can see 4 pictures on his left(1,2), right(2,3), above(2,1), 
and down(2,3).

To do that, I create a floodFill function to count every picture he's seen and set it to a counter.
If the position is not less than or greater than the cell number, then return.

Every position *+1* and *-1* to (x,y) counts whether its a ' * '. And then finally the output is the 
number Igor has visited.


# Buttons
This problem is asking how many times Manao will have to pressed every button in order in the worst case possible.

For 1 button, he will have to press 1 times.<br>
For 2 buttons, 3 times.<br>
For 3 buttons, 7 times.<br>
for 4 buttons, 14 times.<br>

As we can see, the algorithm here is:<br>
0 button pressed 0 times<br>
1 button pressed 1 times<br>
2 buttons pressed 3 times<br>
3 buttons pressed 7 times<br>
4 buttons pressed 14 times<br>

14 - 7= 7<br>
7 - 3= 4<br>
3 - 1= 2<br>
1 - 0 = 1<br>

7 - 4 = 3<br>
3 - 1 = 2<br>
1 - 0 = 1<br>

And finally between the last sequences, the difference between two numbers are 1.<br>
And the function I'm using is this recursive function:<br>
```
int times(int buttons)
{
    if (count<=buttons)
    {
    num = count+ num;
    count++;
    times(buttons);
    }

return num;
}
```
