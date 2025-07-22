# Perfect Number Detection in Singly Linked List (C)

This project demonstrates a simple C program to insert elements into a **Singly Linear Linked List** and display all **perfect numbers** from that list.

---

## 📄 File Name : `program1.c`

---

## 📌 Description

The program performs the following:

- Creates a singly linked list.
- Inserts integer values at the beginning of the list.
- Traverses the list to **identify and display all perfect numbers**.

A **perfect number** is a number that is equal to the sum of its proper divisors (excluding itself). For example:
- 6 → 1 + 2 + 3 = 6 ✅
- 28 → 1 + 2 + 4 + 7 + 14 = 28 ✅

---

## 💻 How It Works

### Functions

- `InsertFirst(PPNODE, int)` — Inserts a node at the beginning of the list.
- `Display(PNODE)` — Displays all elements of the linked list.
- `DisplayPerfect(PNODE)` — Traverses the list and prints only perfect numbers.

---

## 🧪 Sample Output

With the input values:

InsertFirst(&head, 89);
InsertFirst(&head, 6);
InsertFirst(&head, 41);
InsertFirst(&head, 17);
InsertFirst(&head, 28);
InsertFirst(&head, 11);

output : 

6 is perfect number
28 is perfect number
