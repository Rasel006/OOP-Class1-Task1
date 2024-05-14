class Math:
    def add(self, a, b):
        return a + b
    
    def add_three(self, a, b, c):
        return a + b + c
    
    def add_many(self, *args):
        return sum(args)

math = Math()

print("Sum of 2 and 3 is:", math.add(2, 3))
print("Sum of 2, 3, and 4 is:", math.add_three(2, 3, 4))
print("Sum of 2, 3, 4, and 5 is:", math.add_many(2, 3, 4, 5))
