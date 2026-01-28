## Code Review: average function

### What the code is trying to do
Compute the average of a list of numbers.

### Problem
The function does not handle an empty list.
Calling it with an empty list will cause a ZeroDivisionError.

### Edge cases
- Empty list
- List with one value

### Suggested improvement
Validate input before dividing.
