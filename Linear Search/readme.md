Linear Seach Algorithm:
If there are ‘n’ records in a table r(0) to r(n-1) each having a key-value k(0) to k(n-1), the algorithm searches for the required “key” and returns the position ‘i’ of the record r(i) where the “key” is found.

1st Step: START.

2nd Step: i=0.

3rd Step: Read the value of the key to be searched.

4th Step: if k(i)==key then display “Record found at position i”. and go to step 8.

5th Step: Increment i.

6th Step: If i<n then go to step 4.

7th Step: display “No match found”.

8th Step: STOP.

Efficiency of Linear Search:
Best Case: Record found at position 1. Hence only 1 comparison is performed. Thus the best case time complexity is O(1).

Worst Case: Record is not found in the table, n comparisons are performed. Hence, the worst-case time complexity is O(n).

Advantages:
It is a very simple method.

It does not require any additional data structure.

Also, it does not require any additional data structure.

Disadvantages:
It is very inefficient since its time complexity is O(n). If n is very large, this method is very slow.

The following program searches for an element among a set of ‘n’ integers