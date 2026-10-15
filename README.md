# Postfix Expression Evaluation Using Stack

## DSA Activity 1 – Question 9

### Problem
Evaluate the given postfix expression using a stack:

`8 3 - 2 4 * + 6 /`

### Approach
This project uses an **array-based stack in C** to evaluate the postfix expression.

The expression is scanned from left to right:
1. If the token is an operand, it is pushed onto the stack.
2. If the token is an operator, the required operands are popped from the stack.
3. The operation is performed.
4. The result is pushed back onto the stack.
5. After the complete expression is evaluated, the value remaining in the stack is the final result.

### Final Result

`2.166667`

### Files

- `main.c` – C implementation of postfix expression evaluation using a stack.
- `Postfix_Expression_Visualization.pptx` – Step-by-step visualization showing the stack operations and evaluation process.

### Visualization

The visualization demonstrates how the stack changes while processing the postfix expression. It includes the initial stack, operand insertion, operator evaluation, intermediate results, and the final result.

### Language Used

C
