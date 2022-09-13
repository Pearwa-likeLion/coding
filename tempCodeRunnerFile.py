
#Exercise 1
# num = input("Enter Number :")
# count=0
# while num !=0:
#     n = int(num)%10
#     count = count+1
#     num = int(int(num)/10)
# print(count)

#exersice2

list = input("Enter some number : ").split()
n = []
i =0;

for num in list:
    if(int(num)%2 ==0):
        print(num,end = ' ')
