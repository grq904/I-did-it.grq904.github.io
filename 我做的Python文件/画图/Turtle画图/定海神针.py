import turtle
t = turtle
t.pencolor("blue")
t.speed(0)
for i in range(200):
    t.circle(i,180,3)
    t.left(30)
t.pencolor("red")
t.penup()
t.goto(0,200)
t.width(30)
t.pendown()
t.right(-30)
t.forward(100)
t.color("yellow")
t.forward(200)
t.color("red")
t.forward(100)
t.width(5)
t.color("blue")
t.penup()
t.right(90)
t.forward(100)
t.pendown()
print ("定海神针")