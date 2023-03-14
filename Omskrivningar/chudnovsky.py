#Max input är ungefär 15, python kan inte hantera över 15!
#Då får den typ 30 decimaler rätt

from decimal import *
import math
dp = [1]
for i in range(0, 1001):
    dp.append(0)

getcontext().prec = 100

def factorial(x):
    if x == 0:
        return 1
    if dp[x] < 1:
        dp[x] = factorial(x-1)*x
    return dp[x]


factorial(100)
    

def f(q):
    return Decimal(((-1)**q * dp[6*q] * (545140134*q+13591409))/(dp[3*q]*(dp[q]**3)*((640320)**(3*q+1.5))))

inp = int(input())

sum = 0


for i in range(0, inp):
    sum += 12 * f(i)
    print(i, Decimal(1)/Decimal(sum))


print()
print(Decimal(1)/Decimal(sum))
