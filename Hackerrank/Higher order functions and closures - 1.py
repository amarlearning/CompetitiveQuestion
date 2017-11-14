def detecter(element):
    
    def isIn(sequence):
        if element in sequence:
            return True
        else:
            return False
    return isIn

detect30 = detecter(30)
detect45 = detecter(45)
