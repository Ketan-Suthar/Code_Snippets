import os

def f1():
	print(os.getcwd())
	#os.chdir('path to dir ') # change path

	#print(os.listdir())

	#os.mkdir('new folder') 
	#os.makedirs('new folder/inner folder/abc')

	#os.rmdir()
	#os.removedirs()

	#os.rename('os.py','os_functions.py')
	
	print(os.listdir())

	print(os.stat('song.mp3'))

if __name__ == "__main__":
	f1()