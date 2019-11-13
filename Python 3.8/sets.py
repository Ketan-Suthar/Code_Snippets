def f1():	
	s1 = {1,2,3,4,5,1}
	s2 = {2,3,6,7,8}

	print(s1) # only unique are stored
	# we can perform all maths sets operation
	print(s1.intersection(s2))
	print(s1.difference(s2))
	print(s1.union(s2))

if __name__ == '__main__':
	f1()

