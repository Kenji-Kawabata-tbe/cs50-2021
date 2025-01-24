from PIL import Image, ImageFilter

# Imageライブラリの内部にopenという関数があり、引数としてファイル名を受け取ってそれを開く
before = Image.open("bridge.bmp")
# beforeという変数はオブジェクト(c言語でいう構造体)で、その内部にfilterという関数がある。
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")
