<h1> Sorting-algorithms-programs</h1>
<ul>
<li><h2>Insertion sort</h2>
  <p>
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.</br>
  
Consider an example: arr[]: {12, 11, 13, 5, 6}
   12   	   11   	   13   	   5   	   6   
   <ul>
<li><h3>First Pass:</h3>
Initially, the first two elements of the array are compared in insertion sort.</br>
   12   	   11   	   13   	   5   	   6   </br>
Here, 12 is greater than 11 hence they are not in the ascending order and 12 is not at its correct position. Thus, swap 11 and 12.</br>
So, for now 11 is stored in a sorted sub-array.</br>
   11   	   12   	   13   	   5   	   6   </br>
</li>
     <li>
<h3>Second Pass:</h3>

 Now, move to the next two elements and compare them</br>
   11   	   12   	   13   	   5   	   6   </br>
Here, 13 is greater than 12, thus both elements seems to be in ascending order, hence, no swapping will occur. 12 also stored in a sorted sub-array along with 11</br>
</li>
<li>
<h3>Third Pass:</h3>

Now, two elements are present in the sorted sub-array which are 11 and 12</br>
Moving forward to the next two elements which are 13 and 5</br>
   11   	   12   	   13   	   5   	   6   </br>
Both 5 and 13 are not present at their correct place so swap them</br>
   11   	   12   	   5   	   13   	   6</br>
After swapping, elements 12 and 5 are not sorted, thus swap again</br>
   11   	   5   	   12   	   13   	   6   </br>
Here, again 11 and 5 are not sorted, hence swap again</br>
   5   	   11   	   12   	   13   	   6   </br>
Here, 5 is at its correct position</br>
</li>
<li>
<h3>Fourth Pass:</h3>

Now, the elements which are present in the sorted sub-array are 5, 11 and 12</br>
Moving to the next two elements 13 and 6</br>
   5   	   11   	   12   	   13   	   6   </br>
Clearly, they are not sorted, thus perform swap between both</br>
   5   	   11   	   12   	   6   	   13   </br>
Now, 6 is smaller than 12, hence, swap again</br>
   5   	   11   	   6   	   12   	   13   </br>
Here, also swapping makes 11 and 6 unsorted hence, swap again</br>
   5   	   6   	   11   	   12   	   13   </br>
   </li>
Finally, the array is completely sorted.Which is basically what the insertion function in the program does.

</ul>
</p>
</li>
<li><h2>Selection sort</h2></li>
<p>
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted. 
</br>
How does Selection Sort Algorithm work in this program and in general?
</br></br>
Lets consider the following array as an example: arr[] = {64, 25, 12, 22, 11}
<ul>
<li><h3>First pass:</h3></li>


For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. The first position where 64 is stored presently, after traversing whole array it is clear that 11 is the lowest value.
Thus, replace 64 with 11. After one iteration 11, which happens to be the least value in the array, tends to appear in the first position of the sorted list.
</br></br>
(64 25 12 22 11)unsorted
</br></br>
Selection Sort Algorithm | Swapping 1st element with the minimum in array</br>
Selection Sort Algorithm | Swapping 1st element with the minimum in array</br>

<li><h3>Second Pass:</h3></li>

For the second position, where 25 is present, again traverse the rest of the array in a sequential manner.
After traversing, we found that 12 is the second lowest value in the array and it should appear at the second place in the array, thus swap these values.
</br></br>
(11)sorted
(25 12 22 64)unsorted
</br></br>

Selection Sort Algorithm | swapping i=1 with the next minimum element</br>
Selection Sort Algorithm | swapping i=1 with the next minimum element</br>

<li><h3>Third Pass:</h3></li>

Now, for third place, where 25 is present again traverse the rest of the array and find the third least value present in the array.
While traversing, 22 came out to be the third least value and it should appear at the third place in the array, thus swap 22 with element present at third position.
</br></br>
(11 12)sorted
(25 22 64)unsorted
</br></br>
Selection Sort Algorithm | swapping i=3 with the next minimum element</br>
Selection Sort Algorithm | swapping i=2 with the next minimum element</br>

<li><h3>>Fourth pass:</h3></li>

Similarly, for fourth position traverse the rest of the array and find the fourth least element in the array 
As 25 is the 4th lowest value hence, it will place at the fourth position.
</br></br>
(11 12 22)sorted
(25 64)unsorted
</br></br>
Selection Sort Algorithm | swapping i=3 with the next minimum element</br>
Selection Sort Algorithm | swapping i=3 with the next minimum element</br>

<li><h3>Fifth Pass:</h3></li>

At last the largest value present in the array automatically get placed at the last position in the array
The resulted array is the sorted array.
</br></br>
()unsorted
(11 12 22 25 64)sorted
</br></br>
Selection Sort Algorithm | Required sorted array</br>
Selection Sort Algorithm | Required sorted array</br>

</ul>

  
</p>












  
</ul>
