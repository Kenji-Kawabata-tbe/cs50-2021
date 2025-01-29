import csv
import re
from cs50 import SQL



## favorites.csvをr(読み込みモード)でfileという変数名で開く。
## withを使う事でファイルの処理が終わった後に自動的にファイルを閉じる
#with open("favorites.csv", "r") as file:
#    # fileの中身をreaderに格納。このライブラリはファイルを開いて読み込み、forループなどで繰り返し処理できるものを返す
#    reader = csv.reader(file)
#    # 先頭行を飛ばす
#    next(reader)
#    # 
#    for row in reader:
#        # readerの2カラム目、この場合はtitleを出力
#        print(row[1])

#with open("favorites.csv", "r") as file:
#    # 辞書型(キー/バリュー)で開く
#    reader = csv.DictReader(file)
#    for row in reader:
#        print(row["title"])

#titles = []
#
#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        title = row["title"].strip().upper()
#        if not title in titles:
#            titles.append(title)
#
#for title in titles:
#    print(title)

## セットはリストと違って重複を排除している
#titles = set()
#
#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        title = row["title"].strip().upper()
#        titles.add(title)
#
#for title in sorted(titles):
#    print(title)

## 辞書型
#titles = {}#

#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        title = row["title"].strip().upper()
#        if not title in titles:
#            titles[title] = 0
#        titles[title] += 1
#     # titles辞書は最初はこんな感じになる
#     #{
#     #  "THE MATRIX": 0
#     #}
#     # titleがキーになり、0がバリュー。その後0がカウントアップされていく。
#     #
#     # 最終的にこんな感じになる
#     #{
#     #  "THE MATRIX": 2,
#     #   "INCEPTION": 1
#     #}
##def get_value(title):
##    return titles[title]#

## titles(辞書)を、titles[title](出現回数)でソートし、降順で並べる
## for titleのtitleはtitlesのキー名。
## inの後に何があるかでfor ? inの?の値は変わる。
## この場合は後ろに辞書型のデータがあるので、ソートされたキーが順番に代入される。
##for title in sorted(titles, key=get_value, reverse=True):
## lambda(無名関数)でdef get_valueと同じ事ができる。
##  titleを受取り、titles[title]を返す。
#for title in sorted(titles, key=lambda title: titles[title], reverse=True):
#    print(title, titles[title])

#counter = 0
#
#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        title = row["title"].strip().upper()
#        if title in "THE OFFICE":
#            counter += 1
#
#print(f"Number of people who like The Office: {counter}")

#counter = 0
#
#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        title = row["title"].strip().upper()
#        #if re.search("OFFICE", title):
#        #if re.search("^(OFFICE|THE OFFICE)$", title):
#        if re.search("^(OFFICE|THE.OFFICE)$", title):
#            counter += 1
#
#print(f"Number of people who like The Office: {counter}")


#title = input("Title: ").strip().upper()
#
#counter = 0
#
#with open("favorites.csv", "r") as file:
#    reader = csv.DictReader(file)
#    for row in reader:
#        if row["title"].strip().upper == title:
#            counter += 1
#
#print(counter)

db = SQL("sqlite://favorites.db")

title = input("Title: ").strip()

rows = db.execute("SELECT COUNT(*) AS counter FROM favorites WHERE title LIKE ?", title)

row = rows[0]

print(row["counter"])
