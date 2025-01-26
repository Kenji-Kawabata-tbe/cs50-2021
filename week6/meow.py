#print("meow")
#print("meow")
#print("meow")

#for i in (range(3)):
#    print("meow")

# 関数は呼び出す処理の前に書かないといけない
# ただし、それだとコードが長くなると読みにくいのでmain関数を作るとよい
#def meow():
#    print("meow")
#
#for i in (range(3)):
#    meow()


#def main():
#    for i in range(3):
#        meow()
#
#def meow():
#    print("meow")
#
# main関数の呼び出し。
# インタプリタがファイルの一番下まで到達した時点で、すべての関数が上位に定義されていることになるので
# 一番下になければいけない。
# こうする事でmain関数がどこか(どこから処理が始まるか)がわかいやすく、
# mainを含む全てのコードが定義されるまでmainが呼び出されることがないようにすることができる
#main()

def main():
    meow(3)

def meow(n):
    for i in range(n):
        print("meow")

main()
