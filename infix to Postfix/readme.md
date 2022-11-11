Program to convert infix to postfix expression in C++ using the Stack Data Structure
Infix expression
An infix expression is an expression in which operators (+, -, *, /) are written between the two operands. For example, consider the following expressions:

A + B  
A + B - C  
(A + B) + (C - D)  
Here we have written '+' operator between the operands A and B, and the - operator in between the C and D operand.

Postfix Expression
The postfix operator also contains operator and operands. In the postfix expression, the operator is written after the operand. It is also known as Reverse Polish Notation. For example, consider the following expressions:

A B +     
A B + C -     
A B C * +  
A B + C * D -  
Algorithm to Convert Infix to Postfix Expression Using Stack
Following is the algorithm to convert infix expression into Reverse Polish notation.

Initialize the Stack.
Scan the operator from left to right in the infix expression.
If the leftmost character is an operand, set it as the current output to the Postfix string.
And if the scanned character is the operator and the Stack is empty or contains the '(', ')' symbol, push the operator into the Stack.
If the scanned operator has higher precedence than the existing precedence operator in the Stack or if the Stack is empty, put it on the Stack.
If the scanned operator has lower precedence than the existing operator in the Stack, pop all the Stack operators. After that, push the scanned operator into the Stack.
If the scanned character is a left bracket '(', push it into the Stack.
If we encountered right bracket ')', pop the Stack and print all output string character until '(' is encountered and discard both the bracket.
Repeat all steps from 2 to 8 until the infix expression is scanned.
Print the Stack output.
Pop and output all characters, including the operator, from the Stack until it is not empty.
Let's translate an infix expression into postfix expression in the stack:

Here, we have infix expression (( A * (B + D)/E) - F * (G + H / K))) to convert into its equivalent postfix expression:

Label No.	Symbol Scanned	Stack	Expression
1   |	(   |	(	
2   |	(   |	((	
3   |	A   |	((	A
4   |	*   |	((*	A
5   |	(   |	((*(	A
6   |	B   |	((*(	AB
7   |	+   |	((*(+	AB
8   |	D   |	((*(+	ABD
9   |	)   |	((*	ABD+
10  |	/   |	((*/	ABD+
11  |	E   |	((*/	ABD+E
12  |	)   |	(	ABD+E/*
13  |	-   |	(-	ABD+E/*
14  |	(   |	(-(	ABD+E/*
15  |	F   |	(-(	ABD+E/*F
16  |	*   |	(-(*	ABD+E/*F
17  |	(   |	(-(*(	ABD+E/*F
18  |	G   |	(-(*(	ABD+E/*FG
19  |	+   |	(-(*(+	ABD+E/*FG
20  |	H   |	(-(*(+	ABD+E/*FGH
21  |	/   |	(-(*(+/	ABD+E/*FGH
22  |	K   |	(-(*(+/	ABD+E/*FGHK
23  |	)   |	(-(*	ABD+E/*FGHK/+
24  |	)   |	(-	ABD+E/*FGHK/+*
25  |	)   |		ABD+E/*FGHK/+*-