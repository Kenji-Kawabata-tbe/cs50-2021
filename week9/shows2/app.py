# Searches for shows using Ajax with JSON
# http://127.0.0.1:5000/search?q=cat でJSONが返ってくる
from cs50 import SQL
from flask import Flask, jsonify, render_template, request

app = Flask(__name__)

db = SQL("sqlite:///shows.db")


@app.route("/")
def index():
    return render_template("index.html")


@app.route("/search")
def search():
    q = request.args.get("q")
    if q:
        shows = db.execute("SELECT * FROM shows WHERE title LIKE ?", "%" + q + "%")
    else:
        shows = []
    return jsonify(shows)
