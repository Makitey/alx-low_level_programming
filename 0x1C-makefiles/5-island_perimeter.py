#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    for row in range(len(grid)):
        for cell in range(len(grid[row])):
            if grid[row][cell] == 1:
                if cell != (len(grid[row]) - 1) and not grid[row][cell + 1]:
                    perimeter += 1
                if not cell or cell == len(grid[row]) - 1:
                    perimeter += 1
                if row == len(grid) - 1 or not row:
                    perimeter += 1
                if cell != 0 and not grid[row][cell - 1]:
                    perimeter += 1
                if row and not grid[row - 1][cell]:
                    perimeter += 1
                if row != (len(grid) - 1) and not grid[row + 1][cell]:
                    perimeter += 1
    return perimeter
