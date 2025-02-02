from flask import Flask, render_template, request

app = Flask(__name__) # __name__は現在のファイル名を指している


@app.route("/")
#def index() :
#    # nameパラメータの値を入力できるようにしている
#    # 一般的にブラウザからサーバにGETリクエストを送る場合はHTTPプロトコルで標準化されている慣習では
#    # ルートやパスの後ろに?をつけることで何がルートやパスの一部で何が入力の一部であるかを区別している
#    name = request.args.get("name")
#    return render_template("index.html", name=name) # index.htmlのname変数にnameの値を代入する

def index() :
    return render_template("index.html")


@app.route("/greet")
def greet():
    name = request.args.get("name", "world")
    return render_template("greet.html", name=name)
