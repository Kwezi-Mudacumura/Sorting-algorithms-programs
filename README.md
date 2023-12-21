<h1> Sorting-algorithms-programs</h1>
<ul>
<li><h2>Insertion sort</h2>
  <p>
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.</br>
  
Consider an example: arr[]: {12, 11, 13, 5, 6}
   12   	   11   	   13   	   5   	   6   
   <ul>
<li>First Pass:</br>
Initially, the first two elements of the array are compared in insertion sort.</br>
   12   	   11   	   13   	   5   	   6   </br>
Here, 12 is greater than 11 hence they are not in the ascending order and 12 is not at its correct position. Thus, swap 11 and 12.</br>
So, for now 11 is stored in a sorted sub-array.</br>
   11   	   12   	   13   	   5   	   6   </br>
</li>
     <li>
Second Pass:</br>

 Now, move to the next two elements and compare them</br>
   11   	   12   	   13   	   5   	   6   </br>
Here, 13 is greater than 12, thus both elements seems to be in ascending order, hence, no swapping will occur. 12 also stored in a sorted sub-array along with 11</br>
</li>
<li>
Third Pass:</br>

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
Fourth Pass:</br>

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












  
</ul>
