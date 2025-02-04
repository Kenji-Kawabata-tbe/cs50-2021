from flask import Flask, render_template, request

app = Flask(__name__) # __name__は現在のファイル名を指している

SPORTS = [
    "Basketball",
    "Soccer",
    "Ultimate Frisbee"
]

@app.route("/")
def index() :
    return render_template("index.html", sports=SPORTS)



@app.route("/register", methods=["POST"])
def register():
    # request.form.getでnameが無いか、request.form.get("sport")がBasketball、Soccer、Ultimate Frisbeeのいずれでもない場合
    if not request.form.get("name") or request.form.get("sport") not in SPORTS:
        return render_template("failure.html")
    return render_template("success.html")
