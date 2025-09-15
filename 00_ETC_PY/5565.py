totalPrice = int(input())
priceAdd = 0
for i in range(9):
    price = int(input())
    priceAdd += price

print(totalPrice - priceAdd)
