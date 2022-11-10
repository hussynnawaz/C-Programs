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


linear search program in c++
Explanation:

In the above linear search program, we search for value given in the array by traversing the array from starting until we find the value.

The element is searched sequentially and the position is returned when the element is found.

If the element is found in the array then the compiler will print “The number found at i position” else compiler will print “Number not found in the array”.

Expected Input and Output:
Average case:

If the searched element is other than the first and the last element. Time complexity is O(n).

average case
Best Case:

If the searched element is at first position. Time Complexity is O(1).

best case linear search
Worst Case:

If the searched element is at the last position. Time Complexity is O(n).

worst case
Improving Efficiency of Linear Search:
There are several techniques by which efficiency can be improved.

Organize the data in a sorted manner. If the record is not in the table, the search will be terminated when the record with key>required key is found. Thus, the entire table need not be searched.

Arrange the records by their frequency of access i.e, the records with the highest frequency of access will be stored first. This will reduce the time taken to access a record needed frequently. However, the frequencies have to be known in advance.

Move-to-the-front method: In this case, the records are dynamically reorganized such that if there is a retrieval, that record is moved to the front of the table. Thus the records accessed more frequently occupy positions at the beginning of the table.

Linear Search on Sorted Data:
If the data is sorted on the key values, the efficiency of sequential search improves. The searching will be done till a match is found or a greater key is reached.

Algorithm of Sorted Data:
1st Step: START.

2nd Step: Read “Key” to be searched.

3rd Step: i=0.

4th Step: If k(i)==key display “Record foud at position i”.

5th Step: If k(i)>key then go to step 8.

6th Step: Increment i.

7th Step: If i<n then go to step 4.

8th Step: Display “Record not found”.

9th Step: STOP.

The following function illustrates how linear search is performed on sorted data, any sorting method can be used to sort the data.