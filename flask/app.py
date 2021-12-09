from flask import Flask, render_template
import psycopg2

app = Flask(__name__)

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

if __name__ == "__main__":
    app.run(debug=True)