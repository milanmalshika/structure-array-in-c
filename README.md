# structure-array-in-c

1. Write a C program to store and print the student ID number, name, age, address and marks of 5 students using struct. 
2. Write a program to add two distances in inch-feet using struct. The values of the distances is to be taken from the user. 
3. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a struct named Marks having elements ID no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student. 
4. Write a program to add, subtract and multiply two complex numbers using struct to function. 
5. Write a struct to store the ID number, name, age (Between 11 to 14) and address of students (more than 10) and store their information. 
  a. Write a function to print the names of all the students having age 14. 
  b. Write another function to print the names of all the students having even ID number 
  c. Write another function to display the details of the student whose ID number is given (i.e. ID number is entered by the user). 
6. Write a struct to store the name, account number and balance of customers (more than 10) and store their information. 
  a. Write a function to print the names of all the customers having balance less than Rs.200. 
  b. Write a function to add Rs.100 in the balance of all the customers having more than Rs.1000 in their balance and then print the incremented value of their balance.
7. Write a program to compare two dates entered by user. Make a struct named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal". 
8. Create a struct named Date having day, month and year as its elements. Store the current date in the struct. Now add 45 days to the current date and display the final date. 9. Write a struct to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their final salaries. Hours of work per day 8 10 12 Increase in salary Rs.500 Rs.1000 Rs.1500 
10. Let us work on the menu of a library. Create a struct containing book information like accession number, name of author, book title and flag to know whether book is issued or not. Create a menu in which the following can be done.  Display book information  Add a new book  Display all the books in the library of a particular author  Display the number of books of a particular title  Display the total number of books in the library  Issue a book (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1). 
11. A super market needs to design an automated system which handles the stock and the billing facilities. The system stores the following details of the items in the super market. Each item contains six attributes. Item Code Title Unit Measure of Unit Unit Price(Rs/=) Stock ITEM400 Sunlight soap 1 27 200 ITEM401 Anchor Packet (400g) 1 170 50 ITEM404 Anchor Packet (1kg) 1 550 25
ii. Insert the details of a new item using the guidelines given below.
Define a separate method in the program to find the item code for the new item. If there is any missing item code in the sequence of item codes (ITEM400, ITEM401, ITEM402, ITEM403 …..), it should be the item code for the new item.
Ex: The list starts from ITEM400. There is an item with the item code ITEM401. But ITEM402 is missing in the current list. Hence the next item code should be ITEM402. If you insert another two items, ITEM403 and ITEM405 are the item codes of them.
After finding the item codes, insert the following items to the list.
ITEM412 Rice 1 Kg 80 300.5 ITEM420 Dhal 500 g 65.50 200.75 ITEM419 Cordial Bottle 250 ml 225.50 10 ITEM411 Sun flower oil 1 L 160 20 The item code is the unique identifier of each item which contains the prefix as ‘ITEM’ and a number. The number given to the first item is 400 and it will increment by 1, when inserting new items. The unit is measured with kg, ml, gr (etc.). Stock is the number of units that are currently available in the super market. The Unit price is the price assigned for one unit of the product. Implement a struct called “Item” to represent the information of each item in the super market. You may assume that there are no more than 25 items in the super market. i. Define a method to display the details of an item. Hence obtain the following output
Item
Unit
Measurement of
The unit
Price
Stock
HP Pencil
1
12.50
100
Sun Silk Shampoo
1
38
30
Sugar
250
gr
65
150
NOTE: The system should restrict inserting more than 25 items.
iii. A customer wishes to buy some items from the super market. The items and the quantities are given as the following text.
char bill[]="ITEM402,2/ITEM412,2.5 kg/ITEM404,500 gr/ITEM419,1500 ml/";
The items are separated by slashes (/) and the item code and the quantity are separated by commas (,). Note that quantity and the measurement that measures the quantity are separated by a space. If there is no special measurement for the particular item, there is no space in between the quantity and the next slash. Obtain the bill for the customer as shown below. (1kg=1000gr and 1Li=1000ml)
