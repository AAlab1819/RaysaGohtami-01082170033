# PARTY
A company has *n* employees and each employees either has an immediate manager or doesn't. For example 
employee A is the immediate manager of employee B, and employee B is the immediate manager of employee 
C, and so employee A is the superior of employee C. There will not exist an employee who is superior of his/her won
immediate manager.

Each employee must belong to a group contain maximum of 2 employees. But in every group, there must not 
contain employee who is the superior of the other one. 

First, we input the number of employees, then a number for each employee to assign their immediate manager.
If an employee does't have an immediate manager, his/her number will be -1.

The output will be a number of minumum groups must be created.

# CHRISTMAS SPRUCE
This problem is asking if a rooted tree is *spruce* or not, in which *spruce* is if every parent 
has at least 3 leaf children.

First, we input how many vertex a tree has. And every root tge vertex is 1. Then, we input the 
remaining vertex. If it is spruce, then the output will be "Yes", otherwise, "No".

# Registration System
This problem is about a registration system for "Berlandesk". Every user register him/herself with a 
name that will be inserted in the database. If such name doesn't exist in the database, then the name 
will be accepted, hence the output will be "OK". If such name already exist in the database, the 
system itself will recommend a new name that hasn't existed yet in the database with a number on the 
back, hence the output will be "name1", "name2", and so on.

First, we input the number of people who register. Then, each person input his/her name. Then, the 
database will check every name if it has existed or no, then will output according to the system made.
