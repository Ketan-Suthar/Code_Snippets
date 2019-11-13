import os
def f1():
	print(os.getcwd())
	os.chdir(os.path.join(os.getcwd()+'/temp/'))
	f = open('file.txt','r+')

	print(f.name)

	f.close()

if __name__ == "__main__":
	f1()