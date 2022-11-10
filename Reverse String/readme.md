What is reversing a String?
Reversing a string means changing the positions of the characters in such a way that the last character comes in the first position, second last on the second position and so on.

There are so many ways to reverse a string we will see it one by one.
In the above program, the reverse() function is recursive. This function prints the last character of the string (numofChars-1). Every array starts with zero so we have use -1.

substr() gives the string up to second last character and it is again passed to the reverse() function.

When the reverse() function is called again then second last character is printed because the string contains one character less than from the last.

Now one character from the last is cut off from the string again and then passed to the reverse() function.

This process continues until the length of the string equal to 1 when the final character is printed and at last the loop ends.