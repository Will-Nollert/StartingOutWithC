# Chapter 4 mobile service provider 

* a mobile phone providers has three diffrent data plans for its customers 
    * Package A: 39.99 a month 4 gigs are provided and addtional is $10 a gig
    * Package B: 59.99 with 8gigs and addtional is $5 a gig
    * package C: 69.99 per month with unlimited data

* write a program that calcualtes a customers monthky bill. It should ask which package the customer has bought and how many gigs they used. It should then display the total amount due. Be sure the user can only select from the options of package A, B or C. 


#In addition to the specifications in the textbook, use the included .cpp file and add it your solution file.
Include the following modifications.

* Declare constants to store base prices for packages. For example, 39.99 for Package A, 59.99
for Package B, and 69.99 for Package C.
* Make sure the customer name and billing month is accepted. Billing month should be in the
range 1-12. If it is not, please display an error message.
* Make sure a user enters only 'A', 'B' or 'C' for the plan package code. Display an error message
if any other letter is entered.
* Only if a valid package code ('A','B', or 'C') is entered, then the user should be asked to enter
the number of gigabytes used
* Display a bill with month of bill, customer name, package code, charges included in package
deal, and charge for additional data. Make sure you use identifying labels too.