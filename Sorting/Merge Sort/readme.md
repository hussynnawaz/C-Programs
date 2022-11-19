What is Merge Sort?
Merging is the process of combining two or more sorted data lists into a third list such that it is also sorted.

For Example: If the two sorted lists are:

List 1: 3 5 10 23 56

List 2: 4 6 9 60

The merged list will be:

List 3: 3 4 5 6 9 10 23 56 60

Merge sort is based on the process of merging. It requires two sorted sub-sets to create a sorted set. In Merge sort, the elements to be sorted are divided into two equal parts. Each part is sorted and then merged. To sort each half, the same process is used.

merge sort program in c
Thus, each part is successively divided into two parts until we reach a point where the sub-part is sorted. This will happen when size=1. Since a list of size 1 is sorted, two adjacent sub-lists can be merged to create a sorted sub-lists. The merging process continues until only one list of size n is obtained.

merge sort program in c
Merge Sort Algorithm:
Merge Sort follows the Divide and Conquer strategy

Divide: Divide an n element sequence into 2 subsequences of size n/2.

Conquer: Sort the two sequences recursively.

Combine: Merge the two sorted sequences into a single sequence.

This process can be done recursively as well as non recursively. We shall study the recursive method which is easier to understand.

Recursive Function:

C
1
void MergeSort (int a[20], int low, int high)
2
{
3
    int mid;
4
    if(low<high)  //more than one element
5
    {
6
        mid=(low + high) / 2; //Divide a into two sublists
7
        MergeSort (a,low,mid);  //Sort first sub list
8
        MergeSort (a,mid+1,high); //sort second sub list
9
        Merge (a,mid,high);  //Merge sorted sub lists
10
    }
11
}
Let us consider the example of sorting 20,40,50,15,30,35,10 and 5. Initially, they are all in one list. The elements are successively divided into two sublists till we cannot divide any further i.e, we reach a sublist of size 1. The sublists are then merged to create sorted lists until all elements are in a single list.

merge sort in c
In the example shown, each sublist has an even number of elements. However, the list may contain an odd number of elements. In such a case, one sublist will have an additional element.

Let us consider an example of sorting 5 elements

a[5]=[67,57,2,102,33]. Here n=5. Initially low=0 and high=4.

mid=(0+4)/2=2. First half=a[0]…a[2], Second half=a[3]…a[4].

Split a[0:4] into two lists a[0:2] and a[3:4] [67,57,2] [102,33].

1st Step: MergeSort(a,0,2)

Split a[0:2] into two lists a[0:1] and a[2:2] i.e [67,57] [2]

Split a[0:1] into two lists a[0:0] and a[1:1] i.e [67] [57] [2]

Merge a[0:0] and a[1:1] into a[0:1] i.e [57,67] [2]

Merge a[0:1] and a[2:2] into a[0:2] i.e [2,57,67]

At this stage, the first half is sorted. The same steps are carried out for the second half.

Step 2: MergeSort(a,3,4)

Split a[3:4] into two lists a[3:3] and a[4:4] i.e [102] [33].

Merge a[3:3] and a[4:4] into a[3:4] i.e [33,102].

Step 3: Merge (a,0,4) i.e Merge a[0:2] and a[3:4] into a[0:4] which is the sorted list [2,3,57,67,102]

Time Complexity of Merge Sort
The total number of iterations in Merge sort is log2n. In each iteration, n elements are merged. Hence the time complexity of Merge Sort is O(n log2 n). This can be derived as follows:( Here 2 is base)

Advantages:
Best and worst-case efficiency is O(nlog2n). Hence it is very efficient.

It is a stable sorting process.

Disadvantages:
Additional memory is required for the merging process. It is not in-place.