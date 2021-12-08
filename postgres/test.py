import psycopg2


user = 'test'
dbname = 'test_db'
password = ''
conn = psycopg2.connect(" user="+user+" dbname="+dbname+" password="+password)

def show():
    cur = conn.cursor()
    cur.execute('SELECT * FROM article;')
    results = cur.fetchall()

    print(results)

    cur.close()
    return

def write():
    cur = conn.cursor()
    cur.execute("INSERT INTO article(title, id, contents) values('neko', 3, 'cat is cute')")
    results = cur.fetchall
    
    print(results)
    
    cur.close()
    return

def main():
    
    write()
    show()
    
    conn.commit()
    conn.close()
    return

if __name__ == "__main__":
    main()
