#!/usr/bin/python3
"""Module to calculate perimeter"""


def island_perimeter(grid):
    """island_perimeter returns perimeter based on grid"""
    if grid:
        a = len(grid)
        b = len(grid[0])
        size = 0
        if (a + b) <= 200:
            for i in range(len(grid)):
                for j in grid[i]:
                    if int(j) == 1:
                        size = size + 1
            if size <= b:
                return (size + 1) * 2
            elif size == 0:
                return size
            else:
                perimeter = (b + 1) * 2
                while size > 0:
                    size = size - b
                    perimeter = perimeter + (size + 1) * 2 - size
                    return perimeter
    return 0
