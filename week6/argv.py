from sys import argv

#if len(argv) == 2:
#    # argvはコマンドの引数。[0]にはファイル名が入る。
#    print(f"hello, {argv[1]}")
#else:
#    print("hello, world")

#for arg in argv:
#    print(arg)

#for arg in argv:
#    if arg != "argv.py":
#        print(arg)

# スライス
# 要素0を飛ばす
#for arg in argv[1:]:
# 最後の要素を除外
for arg in argv[:-1]:
    print(arg)
