# -*- coding: utf-8 -*-
"""
Created on Tue Jan 22 13:48:55 2019

@author: SCMA-R203-
"""
"""
a circle with radius r = 1 inscribed with in a square
Area of the circle is pi*r^2 = pi
Area of the square is (2*r)^2 = 4

Area of circle / Area of square = pi/4
"""

import random
import matplotlib.pyplot as plt
import time

start = time.time()

def approx_pi(runs, show_graph = False):
    """Used Mote Carlo to approximate pi required random & matplotlib.pyplot"""
    radius = 0.5
    in_circle = 0
    
    x_in_circle = []
    y_in_circle = []
    x_out_circle = []
    y_out_circle = []

    for _ in range(runs):
        x = 2*radius*random.random()
        y = 2*radius*random.random()
        
        if (x - radius) ** 2 + (y - radius) ** 2 <= radius ** 2:
            x_in_circle.append(x)
            y_in_circle.append(y)
            in_circle += 1
        else:
            x_out_circle.append(x)
            y_out_circle.append(y)
    
    if show_graph:
        plt.plot(x_in_circle, y_in_circle, 'bo')
        plt.plot(x_out_circle, y_out_circle, 'ro')
        plt.axis([0, 2*radius, 0, 2*radius])
        plt.show()
    
    ratio = in_circle / runs #pi/4
    area_square = (2*2*radius)**2
    Estimated_Area = area_square * ratio
    
    print("num of darts = %d, num of dart in shaded area = %d" %(runs, in_circle))
    print("ratio = %.6f Estimated Area = %.6f" %(ratio, Estimated_Area))

    return Estimated_Area

for i in [100, 500, 1000, 10000, 100000]:
    approx_pi(i)

for i in [1000000, 10000000]:
    approx_pi(i)
    
end = time.time()

print(end - start)