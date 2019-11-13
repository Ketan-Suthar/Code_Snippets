def f1():
	std = {'name': 'ketan','age':21,'course':['cs603','it215']}

	print(std['name'])
	print(std['course'])
	print(std.get('age'))
	print(std.get('phone')) #will return None, not generate error

	std['phone'] = '555-555'
	print(std.get('phone'))

	std['name'] = 'kishan'
	print(std)

	std.update({'age':25,'phone':'666-666'})
	print(std)

	del std['age']
	print(std)

	print(std.pop('phone'))

	print(std.keys())
	print(std.values())
	print(std.items()) #returns pair

	for key, value in std.items():
		print(key,' ',value)

if __name__ == '__main__':
	f1()