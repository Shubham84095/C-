
import tkinter as tk
from tkinter import messagebox

# Function to update the expression in the text entry
def btn_click(item):
    global expression
    expression += str(item)
    input_text.set(expression)

# Function to clear the input field
def btn_clear():
    global expression
    expression = ""
    input_text.set("")

# Function to calculate the result of the expression
def btn_equal():
    global expression
    try:
        result = str(eval(expression))  # eval function evaluates the expression
        input_text.set(result)
        expression = result  # Update expression with the result
    except Exception as e:
        messagebox.showerror("Error", "Invalid Input")
        expression = ""

# Create main window
root = tk.Tk()
root.title("Calculator")
root.geometry("400x500")

expression = ""

# StringVar is used to get the instance of the input field
input_text = tk.StringVar()

# Create a text entry box for the input field
input_frame = tk.Frame(root, bd=10, relief=tk.RIDGE)
input_frame.pack(side=tk.TOP)

# Input field inside the frame
input_field = tk.Entry(input_frame, font=('arial', 18, 'bold'), textvariable=input_text, bd=10, relief=tk.SUNKEN, justify='right')
input_field.grid(row=0, column=0)
input_field.pack(ipady=20)  # internal padding for better appearance

# Creating a frame for the buttons
btns_frame = tk.Frame(root)
btns_frame.pack()

# First row (7, 8, 9, /)
btn7 = tk.Button(btns_frame, text="7", width=10, height=3, command=lambda: btn_click(7))
btn7.grid(row=0, column=0)

btn8 = tk.Button(btns_frame, text="8", width=10, height=3, command=lambda: btn_click(8))
btn8.grid(row=0, column=1)

btn9 = tk.Button(btns_frame, text="9", width=10, height=3, command=lambda: btn_click(9))
btn9.grid(row=0, column=2)

btn_div = tk.Button(btns_frame, text="/", width=10, height=3, command=lambda: btn_click("/"))
btn_div.grid(row=0, column=3)

# Second row (4, 5, 6, *)
btn4 = tk.Button(btns_frame, text="4", width=10, height=3, command=lambda: btn_click(4))
btn4.grid(row=1, column=0)

btn5 = tk.Button(btns_frame, text="5", width=10, height=3, command=lambda: btn_click(5))
btn5.grid(row=1, column=1)

btn6 = tk.Button(btns_frame, text="6", width=10, height=3, command=lambda: btn_click(6))
btn6.grid(row=1, column=2)

btn_mul = tk.Button(btns_frame, text="*", width=10, height=3, command=lambda: btn_click("*"))
btn_mul.grid(row=1, column=3)

# Third row (1, 2, 3, -)
btn1 = tk.Button(btns_frame, text="1", width=10, height=3, command=lambda: btn_click(1))
btn1.grid(row=2, column=0)

btn2 = tk.Button(btns_frame, text="2", width=10, height=3, command=lambda: btn_click(2))
btn2.grid(row=2, column=1)

btn3 = tk.Button(btns_frame, text="3", width=10, height=3, command=lambda: btn_click(3))
btn3.grid(row=2, column=2)

btn_sub = tk.Button(btns_frame, text="-", width=10, height=3, command=lambda: btn_click("-"))
btn_sub.grid(row=2, column=3)

# Fourth row (0, ., =, +)
btn0 = tk.Button(btns_frame, text="0", width=10, height=3, command=lambda: btn_click(0))
btn0.grid(row=3, column=0)

btn_dot = tk.Button(btns_frame, text=".", width=10, height=3, command=lambda: btn_click("."))
btn_dot.grid(row=3, column=1)

btn_clear = tk.Button(btns_frame, text="C", width=10, height=3, command=btn_clear)
btn_clear.grid(row=3, column=2)

btn_add = tk.Button(btns_frame, text="+", width=10, height=3, command=lambda: btn_click("+"))
btn_add.grid(row=3, column=3)

# Fifth row for equal button (spanning all columns)
btn_equal = tk.Button(btns_frame, text="=", width=43, height=3, command=btn_equal)
btn_equal.grid(row=4, column=0, columnspan=4)

# Start the GUI event loop
root.mainloop()
calculator - Akshat Kaushik.py
Displaying calculator - Akshat Kaushik.py.