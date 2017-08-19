import tkinter as tk

def quit(root):
    root.destroy()

def 알림(a,b):
    root = tk.Tk()
    tk.Button(root, text="Quit", command=lambda root=root:quit(root)).pack()
    root.geometry('1x20+%d+%d' % (a,b))
    root.mainloop()

알림(1000,500)
