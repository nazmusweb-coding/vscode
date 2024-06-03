IF no index left
    Return false
IF target is present at array[mid]
    Return true
Else if target < array[mid]
    Search array[0] through array[mid-1]
Else if target > array[mid]
    Search array[mid+1] through array[n-1]
    