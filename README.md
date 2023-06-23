# PRINTF
recreating the printf(), installing a printer's driver is pretty cool.

side note: pointers are my passion.

**GOOD PRACTICE STUFF:**
1) Error handling for memory allocations
   - free() -> this allows for less leaks.
2) Error handling for inputs
   - condition if(input == 0);
   - 0 and \0 very different;
     - 0 = the number zero, int zero;
     - \0 = NULL, nothing -> not zero but nothing;
3) Compare Apple to Apple, not Apple to Banana
   - you can't compare variables that are different unless typecasted
     UNSIGNED INT ≠ INT;
