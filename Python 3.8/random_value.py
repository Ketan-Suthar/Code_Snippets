import random

def f1():
	v = random.random()
	print(v)

	v = random.uniform(1,10)
	print(v)

	v = random.randint(1,6)
	print(v)

def f2():
	l1 = ['hii','hello','good morning','hola','hey']

	print(random.choice(l1))

	colors = ['red','green','yellow']
	result = random.choices(colors, weights = [10,10,2], k=10)
	print(result)

	dec = list(range(1,53))
	random.shuffle(dec)
	print(dec)

	hand = random.sample(dec, k=6) #unique six values
	print(hand)


if __name__ == "__main__":
	#f1()
	f2()