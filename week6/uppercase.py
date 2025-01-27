from cs50 import get_string

#before = get_string("Before: ")
#print("After: ", end="")
#for c in before:
#    print(c.upper(), end="")
#print

before = get_string("Before: ")
# afterは一回しか使わないので変数にしなくても実装はできる。
# ただし、今回はbefore.upper()の部分があまりに長いと一行だと読みにくいので
# そのケースでは変数にしたほうがよい。という人が多いと思う。

after = before.upper()
print(f"After: {after}")
