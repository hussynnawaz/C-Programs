What is Quick Sort?
Quicksort is a very efficient sorting method. It is also called “partition Exchange Sort”. The strategy used here is “Divide and Conquer” i.e, we successively partition the list into smaller lists and apply the same procedure to the sub-list.

Procedure:
We consider one element at a time (pivot) and place it in its correct position. The pivot is placed such that all elements to the left of the pivot are less than the pivot and all elements to the right are greater.

quick sort program in c
This partitions the array into two parts-left partition and right partition. The same method is applied for each of the partition. The process continues till no more partition can be made.

Note: any element can be chosen as the pivot.

We shall be considering the first element as the pivot element. The recursive function is similar to Mergesort seen earlier. However, in quick sort, we do not divide into two equal parts but partition on the basis of the pivot element.

The function sorts elements a[lb] to a[ub] where lb stands for lower bound and ub stands for the upper bound.

C
1
void Quicksort( int a[], int lb,int ub)
2
{
3
    int j;
4
    if(lb<ub)
5
    {
6
        j=Partition(a,lb,ub); //partition the array
7
        Quicksort(a,lb,j-1); //sort first partition
8
        Quicksort(a,j+1,ub); //sort second partition
9
    }
10
}
Now we must write the function to partition the array. We shall choose the first element of the sub-array as the pivot and find its correct position in the sub-array.

We will be using two variables i.e down and up for moving down and up the array.

quick sort program in c
Credits:Runestone.academy
Algorithm for Partitioning:
1st Step: START.

2nd Step: down=lb.

3rd Step: up=ub.

4th Step: pivot=A[lb].

5th Step: While (A[down]<=pivot && down<ub) and down++.

6th Step: While (A[up]>pivot && up>lb) and up–.

7th Step: If(down<up) interchange A[down] and A[up]. and go to step 5.

8th Step: Interchange A[up] and A[lb].

9th Step: Return up.

10th Step: STOP.

In this Algorithm, we want to find the position of pivot i.e A[lb].

We use two pointers up and down initialized to the first and last elements respectively.

We repeatedly increase down as long as the element is < pivot i.e A[down]<pivot.

Also repeatedly decrease up as long as the element is >pivot i.e A[up]>pivot.

If up and down cross each other i.e up <=down, the correct position of the pivot is up and A[up] and pivot are interchanged.

If up and down do not cross, A[up] and A[down] are interchanged and the process is repeated till they do not cross or coincide.

For Example: Sort 55,7,80,32,18,23,82,62

quick sort in c
First Partition: 18 7 23 32.

Second Partition: 80 82 62.

Applying the algorithm to the first partition:

quick sort in c
Efficiency of Quicksort:
Best Case Behavior:

The best-case behaviour occurs if there are n elements such that every time a pivot is positioned, the partitions are of equal sizes.

Thus, we have to sort two sub-arrays each of size about n/2. Each of these will be partitioned into two arrays of sizes n/4. each as shown below.

quick sort efficiency
The total number of iterations taken in log2n (here 2 is the base). In each Iteration, the total number of elements to be compared is n.

Therefore, the Best case Time complexity= O(n log2n). The best-case time complexity is achieved if the median is chosen as the pivot. This will ensure that the array splits into equal parts each time.

Worst Case Behavior:

This occurs when the pivot does not partition the array. All elements are either in the left or the right partition. This will happen when the pivot either the smallest or the largest element.

Thus, there are n iterations. The total number of comparisons will be n+(n-1)+(n-2)+…+1=n(n+1)/2.

Therefore, the Worst-case Time complexity=O(n^2). This occurs when the array is already sorted or if the elements are in the reverse order. However, in all cases, it performs efficiently.

Advantages:
It is a very efficient sorting method.

No additional data structure is required.

It is in-place sorting method.

Disadvantages:
It is not a stable sorting method.

Applications:
Defence.

Medical Monitoring.

Control for Aircraft etc.