class InvalidItemType(Exception):
    def __init__(self):
        super().__init__

class OutOfStock(Exception):
    def __init__(self):
        super().__init__
        

class UnlockedItem(Exception):
    def __init__(self):
        super().__init__




class Item:
    def __init__(self, item_type, quantity):
        self.item_type = item_type
        self.quantity = quantity
        self.locked = False
    
    


        
class Inventory:

    def __init__(self):
        self.items = []
    
    def add_item(self, item):
        self.items.append(item)
        
    def lock(self, item_type):
        for x in self.items:
            if x.item_type == item_type:
                x.locked = True
    
    def unlock(self, item_type):
        for x in self.items:
            if x.item_type == item_type:
                x.locked = False
        
    def purchase(self, item_to_purchase):
        for x in self.items:
            if x.item_type == item_to_purchase:
                
                if x.locked == False:
                    raise UnlockedItem
                
                if x.quantity <= 0:
                    raise OutOfStock
                
                x.quantity-=1
                return x.quantity
        else:
            raise InvalidItemType           
    
    def addMore(self, item_type, y):
        for x in self.items:
            if x.item_type == item_type:
                x.quantity+=y
            
        
    
    
    
    
    
itm1 = Item("Iphone", 2)
itm2 = Item("Samsung", 1)

inv = Inventory()
inv.add_item(itm1)
inv.add_item(itm2)


item_type = "Iphone"
inv.lock(item_type)
try:
    num_left = inv.purchase(item_type)
except InvalidItemType:
    print("Sorry, we don't sell {}".format(item_type))
except OutOfStock:
    print("Sorry, this item is out of stock.")
else:
    print("Purchase complete. There are ""{} {}s left".format(num_left, item_type))
finally:
    inv.unlock(item_type)    


inv.addMore("Samsung", 10)   
for x in inv.items:
    print(x.item_type,x.locked,x.quantity)   
