from cs50 import get_string

# 長くなりすぎてわかりにくい場合は、２つに分けたほうがいいかもしれない。
s = get_string("Do you agree? ").lower()
#s = s.lower

#if s == "Y" or s == "y":
#if s in ("Y", "y", "yes"):
# 大文字でも小文字にする
if s.lower in ("y", "yes"):
    print("Agreed.")
elif s == "N" or s == "n":
    print("Not agreed.")
