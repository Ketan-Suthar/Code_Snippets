def f1():
	l = ["maths","eco","science","computer"]
	l2 = ["biology","dbms"]

	print(l)
	print(l[3])
	print(l[-1]) #last item
	print(l[0:2]) # prints range from 0 to 1
	print(l[:2]) # prints range from 0 to 1
	print(l[2:]) # prints range from 2 to end

	l.append("physics") #insert at end
	print(l)

	l.insert(0,"art")
	print(l);


def f2():
	l = ["maths","eco","science","computer"]
	l2 = ["biology","dbms"]

	#l.insert(0,l2) #it will append whole list not its values
	print(l)

	l.extend(l2) #it will append lists values
	print(l)

def f3():
	l = ["maths","eco","science","computer"]
	l2 = ["biology","dbms"]

	print(l)
	l.remove("eco")
	print(l)

	l.pop() # it will return the last value also
	print(l)

	l.extend(l2)
	print(l)

	l.reverse()
	print(l)

	l.sort() #l.sort(reverse = True)
	print(l)

	l3 = sorted(l)
	print(l3)
if __name__ == '__main__':
	#f1() #basic
	#f2()
	f3()