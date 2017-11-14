def factory(n):
    
    def current():
        return n
        
    def counter():
        return n + 1
    
    return current, counter
        
f_current, f_counter = factory(int(input()))
