Insertion Sort Algorithm:
Let x is an array of n elements. x[0] may be considered as a sorted array of one element. The unsorted list is x[1] to x[n-1].

1st Step: START.

2nd Step: j=1 i.e unsorted position starts from 1.

3rd Step: key=x[j].

4th Step: i=j-1 i.e sorted set starts from j-1.

5th Step: while x[i]>key and i>=0 then x[i+1]=x[i]. i.e shift element to the right.

6th Step: x[i+1]=key i.e insert key in correct position.

7th Step: j=j+1 i.e next unsorted element.

8th Step: If j<n go to step 3.

9th Step: STOP.

Advantages:
It is a simple sorting method.

It is in-place sorting method.

It’s a Stable sorting method.

Best case complexity is O(n).

Most suitable sorting method if the elements are almost sorted.

Disadvantages:
Worst Case efficiency is O(n^2).

