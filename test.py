num = int(input("Please enter the number to check: ")) 
if num > 1: 
    for i in range(2, num): 
        if (num%i) == 0:
            print("The number is not prime !") 
            break 
        elif (num%i) != 0: 
            print("The number is prime number") 
            break
        else: 
            print("จำนวนไม่เป็นเฉพาะ!")
