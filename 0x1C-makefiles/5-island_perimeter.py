#!/usr/bin/python3

""" Technical interview preparation """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    leg = 0
    wid = 0
    con = True

    for i in range(len(grid)):
        if 1 in grid[i]:
            leg += 1
        for j in range(len(grid[i])):
            con = False
            if grid[i][j] == 1:
                if j != 0:
                    if grid[i][j - 1] == 1:
                        wid += 1
                        con = True
                if j != len(grid[i]) and con is False:
                    if grid[i][j + 1] == 1:
                        wid += 1

    if leg == 0 and wid >= 1:
        leg += 1
    if wid == 0 and leg >= 1:
        wid += 1

    return (leg + wid) * 2
