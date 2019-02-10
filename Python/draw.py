import turtle

bob = turtle.Turtle()

def square(t, length):
    for _ in range(4):
        t.fd(length)
        t.rt(90)

def polygon(t, length, n):
    for _ in range(n):
        ex_angle = 360 / n
        t.fd(length)
        t.rt(ex_angle)

def circle(t, r):
    polygon(t, )


square(bob, 150)
polygon(bob, 5, 30)

turtle.mainloop()