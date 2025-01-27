#from cs50 import get_int
#import cs50

#x = get_int("x: ")
#y = get_int("y: ")
#x = cs50.get_int("x: ")
#y = cs50.get_int("y: ")

# これだと文字列の結合になる
#x = input("x: ")
#y = input("y: ")

# キャストすると整数にできる
# pythonではintやfloatは関数
#x = int(input("x: "))
#y = int(input("y: "))

#print(x + y)

# 例外処理
# tryでエラーがあった場合、exceptの内容が実行される
#try:
    #x = int(input("x: "))
#except:
#    print("That is not an int!")
#    exit()
#try:
#    y = int(input("y: "))
#except:
#    print("That is not an int!")
#    exit()
#print(x + y)



from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

# これは小数点で返す
z = x / y
# これは整数で返す
z = x // y

print(z)

