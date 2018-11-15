# Djikstra ?
The problem is to find the shortest path (the best way) from vertices 1 to N. To solve this problem is by using Dijkstra Algorithm as the problem name itself. The shortest path is determined by the least amount of price from vertex 1 to N. <br>

Here is the example: <br>
```java
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

Source  Destination   Price
  1  ->      2         (2)
  2  ->      5         (5) 
  2  ->      3         (4)
  1  ->      4         (1)
  4  ->      3         (3)
  3  ->      5         (1)
```

We could assume that the shortest path is 1 -> 2 -> 5 which will cost 2+5=7. It is correct that we want to find the shortest path, but the problem asks for the least amount of price. So, the answer should be 1 -> 4 -> 3 -> 5 that cost 5 <- 1+3+1.

Complexity: O(nlogn)  
Submission Link: http://codeforces.com/problemset/submission/20/45760447

# The Two Routes
We've been asked to find the smallest possible time of the later vehicle's arrival in town *n* from town 1. This problem is can be directly solved by using Breadth First Search Algorithm which will use a queue to store the node and mark it as *visited* until all railways are marked. The queue follows the First In First Out (FIFO) so we can find out the shortest path and the minimum number of hours needed for both vehicle to arrive. <br>

Complexity: O(n^2)
Submission Link: http://codeforces.com/problemset/submission/601/45760593
