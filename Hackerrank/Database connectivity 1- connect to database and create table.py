def main():
    connection = sqlite3.connect('SAMPLE.db')
    cursor = connection.cursor()
    cursor.execute('''CREATE TABLE items
             (item_id text, item_name text, item_description text, item_category real, quantity_in_stock real)''')
    
    connection.commit()
    connection.close()
