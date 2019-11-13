
def f1():
	try:
		f = open("abc.txt")
	except Exception:
		print("sorry! file doesnot exist")

def f2():
	try:
		f = open('list.py')
		if f.name == 'list.py':
			raise Exception('please donot open python file')
	except FileNotFoundError:
		print("sorry! file not found")
		print(e)
	except Exception as e:
		print("sorry! something went wrong")
		print(e)
	else:
		print(e.read())
		f.close()
	finally:
		print("execution success!")
if __name__ == '__main__':
	#f1()
	f2()

