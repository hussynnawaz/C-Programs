What is a Bubble Sort?
This is one of the simplest and most popular sorting methods. The basic idea is to pass through the elements sequentially several times (n-1) times. In each pass, we compare successive elements (x[i] with x[i+1]) and interchange the two if they are not in the required order.

One element is placed in its correct position in each pass. In the first pass, the largest element will sink to the bottom, second largest in the second pass and so on. Thus, a total of n-1 passes are required to sort ‘n’ keys.

bubble sort program in c
For Example: 25 37 12 48 57 33

1st Pass:

bubble sort program in c
2nd Pass :

bubble sort in c
3rd Pass :

bubble sort in c
4th Pass:

sorting in c
5th Pass:

bubble sorting in c using function
Bubble Sort Algorithm:
1 Step: START.

2 Step: Pass=1.

3 Step: i=0.

4 Step: if x[i]>x(i+1) then interchange x[i] and x[i+1]

5 Step: i=i+1

6 Step: If i<=n-1-Pass then go to step 4

7 Step: Pass=Pass+1.

8 Step: If Pass<n then go to step 3.

9 Step: STOP.

The efficiency of Bubble Sort:
There are n-1 comparisons in the first pass,n-2 in the second pass and 1 in the n-1th pass.

Therefore Total number of comparisons = (n-1)+(n-2)+…+1=n(n-1)/2.

The same number of passes is required in the best case (already sorted) and the worst case (elements in the reverse order). Hence the Best case and worst-case time complexity is O(n^2).

Advantages:

It is Simple Sorting Method.

No additional Data Structure is required.

It is in-place sorting method.

It is a stable sorting method.

Disadvantages:

It is very inefficient method-O(n^2).

Even if the elements are in the sorted order, all n-1 passes will be done.

1. Bubble Sort Program in C++
In this program, we will enter the numbers randomly and these numbers are stored in the array. After entering the numbers the program will start executing and then after sorting the compiler will print sorted array on the screen.
Explanation:

First For Loop: First Iteration-

Assume user gives input of 5 numbers.

for(i=0;0<4;0++) The Condition is TRUE so it will enter in the second for loop.

Second For Loop: First Iteration-

for(j=0;0<5-0-1;0++) The Condition is TRUE so the compiler will enter in the if statement.

if(a[0]>a[1])->if(8>7) It means condition is TRUE so temp=10.Now a[j]=a[j+1]->a[0]=a[1]->a[0]=7. And a[j+1]=temp->a[1]=8. So the array will become 7 8 4 5 9 and j will be incremented by 1.

Second For Loop: Second Iteration-

for(j=1;1<5-0-1;1++) the condition is TRUE so the compiler will enter into if statement if(8>4) it means the condition is TRUE.

So like this process continuously goes on.

Improving Efficiency of Bubble Sort:
It is quite possible that the array gets sorted before all n-1 passes are complete. To avoid unnecessary passes, we have to check whether the array has got sorted at the end of each pass.

This can be done by finding out if an interchange was made in a pass. If no interchanges were done, it implies that the array has got sorted. It can be checked by using a flag.

Bubble Sort Improving Efficiency Algorithm:
1 Step: START.

2 Step: Pass=1.

3 Step: swap=FALSE.

4 Step: i=0.

5 Step: If x[i]>x[i+1] then Interchange x[i] and x[i+1] and Swap=TRUE.

6 Step: i=i+1.

7 Step: If i<=n-Pass-1 then go to step 5.

8 Step: If swap=FALSE then go to step 11.

9 Step: Pass=Pass+1.

10 Step: If Pass<n then go to step 3.

11 Step: STOP.