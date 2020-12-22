# Day8-Searching-Applications

# Minimum number of cins collected per hour to empty N piles in at most H hours.
## Algorithm
* If no. piles = no. of hour
* output = a[max element of array] </br>
<-------------------------------------> </br>
* Initialize low=1 and high = a[max]
while(loe<high) </br>
mid = low + high-low/2 </br>

    if(time <= H) </br>
      high = mid - 1; </br>
    else </br>
      low = mid+1;  </br>
      
[Solution](https://github.com/akshatprogrammer/Day8-Searching-Applications/blob/main/Solution.cpp)

# UpperBound and LowerBound

## Algorithm
* low = 0, high = n-1
while(low < high) </br>
if(a[mid] <= a) </br>
low = mid+1;</br>
middle </br>
high = mid </br>

[solution](https://github.com/akshatprogrammer/Day8-Searching-Applications/blob/main/UpperAndLowerBound.cpp)
