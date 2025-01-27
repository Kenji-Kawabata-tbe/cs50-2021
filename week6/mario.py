#from cs50 import get_int

#for i in range(3):
#    print("#")

#n = get_int("Height: ")
#
#for i in range(n):
#    print("#")

#while True:
#    n = get_int("Height: ")
#    if n > 0:
#        break
#
#for i in range(n):
#    print("#")


#def main():
#    height = get_height()
#    for i in range(height):
#        print("#")
#
#def get_height():
#    while True:
#        n = get_int("Height: ")
#        if n > 0:
#            break
#    return n

#def main():
#    height = get_height()
#    for i in range(height):
#        print("#")
#
#def get_height():
#    while True:
#        try:
#            n = int(input("Height: "))
#            if n > 0:
#                break
#        except ValueError:
#            print("That's not an integer!")
#    return n
#
#main()


#for i in range(3):
#    for j in range(3):
#        print("#", end="")
#    print()

for i in range(3):
    print("#" * 3)
