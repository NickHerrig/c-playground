// branch to IOB if x20 >= x11 if x20 is negative

IndexOutOfBounds:
bgeu, x20, x11, IndexOutOfBounds
// if x20 >= x11 or x20 < 0, goto Label
