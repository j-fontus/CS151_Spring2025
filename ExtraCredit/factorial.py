'''
    Write a program that calculates and displays the factorial of a user-defined integer.
    The factorial of a number is the product of the number and the numbers prior up to 1.
    For example 5 facorial (5!) is:
    
    5 * 4 * 3 * 2 * 1 = 120

    Validate the user-defined integer. Ensure the user enters a positive number.
    Note: 0! = 1
'''

if __name__ == "__main__":
    ...
   while True:

    try:

        num = int(input("Enter a positve integer: ")) 
        if num < 0:
            print("Please enter a non-negative number. ")
        else:
            break
    except ValueError:
        print ("Invalid input. Please enter a whole number. ")

    factorial = 1
    steps = "" 
 
 for i in range(num, 0, -1):
    factorial *= i
    steps += str(i)
    if i > 1:
        steps += " * "

if num == 0:
    steps = "1"

print(f"\n{num}! = {steps} = {factorial}")