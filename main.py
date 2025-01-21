import tkinter as tk
from tkinter import *

window = tk.Tk()
window.geometry("460x400")
window.title("calulator")
lable_num1 = Label(window,text="enter num1")
lable_num1.place(x=3,y=256)
entry = Entry(width=20)
entry.config()
entry.place(x=3,y=284)

lable_num2 = Label(window,text="enter num2")
lable_num2.place(x=330,y=256)
entry2 = Entry(width=20)
entry2.config()
entry2.place(x=330,y=284)

lable_operation = Label(window,text=" enter one of (|1+|2-|3*|4/|) to select Arithmetic operation:")
lable_operation.place(x=70,y=310)
entry3 = Entry(width=5)
entry3.config()
entry3.place(x=200,y=340)

g = StringVar()

b = (entry.get())
j = (entry2.get())
h = (entry3.get())

def e (y,x,c):
   if c == "1":
       g.set(str(float(y) + float(x)))
   if c == "2":
       g.set(str(float(y) - float(x)))
   if c == "3":
       g.set(str(float(y) * float(x)))
   if c == "4":
       g.set(str(float(y) / float(x)))
bot = Button(window,width=5,text="=")
bot.place(x=162,y=200)
bot.config(font=("free",30))
bot.config(command=lambda :e((entry.get()),(entry2.get()),entry3.get()))

lable = Label(window, textvariable=g, width=18, height=2)
lable.config(font=("free",30))
lable.place(x=19,y=50)

window.config(bg="black")
window.mainloop()