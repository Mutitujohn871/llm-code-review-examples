## Code Review: sum function in C

### Issue
The for loop uses i <= n, which causes an out-of-bounds access.
This can crash the program or read garbage memory.

### Fix
Change the loop condition to i < n.

### Edge Cases
- Empty array
- Single-element array
- Large arrays
