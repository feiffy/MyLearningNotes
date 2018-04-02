import math
import pygame,sys
from pygame.locals import *

pygame.init()
screen = pygame.display.set_mode((600,500))
pygame.display.set_caption("Drawing Circles");

while True:
    for event in pygame.event.get():
        if event.type in (QUIT, KEYDOWN):
            sys.exit()
    screen.fill((0,200,200))
    color = 255,255,0
    position = 300,250
    radius = 80
    width = 10
    pygame.draw.circle(screen, color, position, radius, width)
    pygame.draw.rect(screen, color, (50,50,100,100), 0)
    pygame.draw.line(screen, color, (50,150), (50,300), 5)
    pygame.draw.arc(screen, color, (200,150,200,200), math.radians(0), math.radians(180), 5)
    pygame.display.update()