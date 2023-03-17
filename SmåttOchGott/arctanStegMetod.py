#Max input för exekvering under 1 sekund är ungefär 10 000 000
#Då får den rätt på typ 5 siffror
#nvm koden var fel, den klarar typ 12 siffror

a = int(input())
sist=0
for i in range(a):
    sist += 4*a/(a**2+i**2)
print(sist-1/a)
