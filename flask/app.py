from flask import Flask, render_template, request
import psycopg2

app = Flask(__name__)

@app.route('/')
def index():
    return render_template("index.html")

@app.route('/hello/<name>')
def hello(name=None):
    user = 'test'
    dbname = 'test_db'
    password = ''
    conn = psycopg2.connect(" user="+user+" dbname="+dbname+" password="+password)
    
    cur =  conn.cursor()
    sql = "SELECT * FROM article;"
    cur.execute(sql)
    articles = cur.fetchall()
    cur.close()
    conn.close()
    
    return render_template("hello.html", title='flask test', articles=articles, name=name)

@app.route('/good')
def good():
    name = "Good!"
    return name

@app.route('/add')
def add():
    return render_template("add.html")

@app.route('/add_manager', methods=["POST"])
def add_manager():
    if request.method=="POST":
        name = request.form["name"]
    else:
        name = "no name."
    return "ようこそ、"+name+"さん。"

@app.route('/get_test')
def get_test():
    name = request.args.get('name')
    return "ようこそ、"+name


if __name__ == "__main__":
    app.run(debug=True)