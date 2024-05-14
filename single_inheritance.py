class Laptop:
    def __init__(self, memory, ssd) -> None:
        self.memory = memory
        self.ssd = ssd

    def coding(self):
        return 'Learning Python and practicing'


class Phone:
    def __init__(self, brand, price, color, origin, dual_sim) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin
        self.dual_sim = dual_sim

    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with: {text}'

    def __repr__(self) -> str:
        return f'phone: {self.brand} {self.price} {self.dual_sim}'


my_phone = Phone('iphone', 120000, 'silver', 'china', True)
print(my_phone.brand)
print(my_phone)
