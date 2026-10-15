# Postfix Expression Evaluation Using Stack

## DSA Activity 1 – Question 9

### Problem Statement

The objective of this project is to evaluate a given postfix expression using the **Stack Data Structure**.

The postfix expression used in this project is:

`8 3 - 2 4 * + 6 /`

In postfix notation, the operator comes after its operands. A stack is useful for evaluating postfix expressions because it follows the **LIFO (Last In, First Out)** principle.

---

## Approach Used

This project uses an **array-based stack implementation in C**.

The postfix expression is processed from left to right.

- When an operand is encountered, it is pushed onto the stack.
- When an operator is encountered, the top two operands are popped from the stack.
- The required arithmetic operation is performed.
- The calculated result is pushed back onto the stack.
- This process continues until the complete postfix expression has been evaluated.
- The final value remaining in the stack is the result of the expression.

A `float` stack is used so that decimal results can also be stored correctly.

---

## Algorithm

1. Initialize an empty stack.
2. Scan the postfix expression from left to right.
3. If the current character is an operand, convert it into a numeric value and push it onto the stack.
4. If the current character is an operator:
   - Pop the top value from the stack as the second operand.
   - Pop the next value as the first operand.
   - Perform the required operation.
   - Push the calculated result back onto the stack.
5. Continue until all characters of the postfix expression have been processed.
6. Pop the remaining value from the stack.
7. Display it as the final result.

---

## Stack Operations

For the postfix expression:

`8 3 - 2 4 * + 6 /`

the evaluation takes place as follows:

| Step | Token | Operation | Stack |
|------|------|-----------|-------|
| 1 | 8 | Push 8 | `[8]` |
| 2 | 3 | Push 3 | `[8, 3]` |
| 3 | - | 8 - 3 = 5 | `[5]` |
| 4 | 2 | Push 2 | `[5, 2]` |
| 5 | 4 | Push 4 | `[5, 2, 4]` |
| 6 | * | 2 * 4 = 8 | `[5, 8]` |
| 7 | + | 5 + 8 = 13 | `[13]` |
| 8 | 6 | Push 6 | `[13, 6]` |
| 9 | / | 13 / 6 = 2.1667 | `[2.1667]` |

Therefore, the final result is:

`2.166667`

---

## Operand Order

Operand order is important when performing **subtraction** and **division**.

When an operator is found, two values are popped from the stack.

The first value popped is the **second operand**, and the next value popped is the **first operand**.

For example:

`8 3 -`

The values are popped in this order:

- Second operand = 3
- First operand = 8

Therefore:

`8 - 3 = 5`

Similarly:

`13 6 /`

gives:

`13 / 6 = 2.166667`

Using the operands in the opposite order would produce an incorrect result.

---

## Why Stack is Used

A stack is suitable for postfix expression evaluation because postfix expressions are evaluated in the same order in which operands and operators are encountered.

The LIFO property allows the most recently encountered operands to be accessed immediately whenever an operator is found.

Therefore, a stack provides a simple and efficient way to evaluate postfix expressions.

---

## Why Array-Based Stack is Used

In this project, the stack is implemented using an array.

Advantages of using an array-based stack include:

- Simple implementation
- Easy push and pop operations
- Fast access to the top element
- No need for pointer management
- Suitable for small and fixed-size expressions

For this problem, an array-based stack is sufficient because the given postfix expression requires only a small number of stack elements.

---

## Time and Space Complexity

The postfix expression is scanned once from left to right.

Therefore:

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

where `n` represents the number of elements in the postfix expression.

Push and pop operations on the stack take constant time, `O(1)`.

---

## Technologies Used

- **Programming Language:** C
- **Data Structure:** Stack
- **Stack Implementation:** Array-based Stack
- **IDE/Compiler:** Dev-C++
- **Visualization:** Step-by-step postfix stack visualization

---

## Program Output

The program evaluates the given postfix expression and displays:

`2.166667`

A floating-point data type is used because the final division:

`13 / 6`

produces a decimal value.

---

## Visualization

A step-by-step visualization has been created to demonstrate how the stack changes during postfix expression evaluation.

The visualization shows:

- Initial empty stack
- Pushing operands onto the stack
- Popping operands when an operator is encountered
- Performing arithmetic operations
- Pushing intermediate results back onto the stack
- Final result of the postfix expression

The visualization is included in:

`Postfix_Expression_Visualization.pptx`

---

## Files in this Repository

### `main.c`

Contains the C implementation of postfix expression evaluation using an array-based stack.

### `Postfix_Expression_Visualization.pptx`

Contains the step-by-step visualization of the stack operations and evaluation process.

### `README.md`

Contains the explanation of the problem, approach, algorithm, stack operations, complexity, and project details.

---

## Conclusion

This project demonstrates the use of a **stack data structure for evaluating a postfix expression**.

The array-based stack provides an efficient way to store operands and intermediate results. Operands are pushed onto the stack, and whenever an operator is encountered, the required operands are popped and the operation is performed.

For the given postfix expression:

`8 3 - 2 4 * + 6 /`

the final result is:

**2.166667**

The project also demonstrates the importance of operand order during subtraction and division and provides a visualization to clearly understand how the stack changes during the evaluation process.
