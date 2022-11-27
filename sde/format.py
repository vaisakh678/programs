import pyperclip

str = input("enter string: ")
str = str.replace("[", "{").replace("]", "}")
print(str)
pyperclip.copy(str)
