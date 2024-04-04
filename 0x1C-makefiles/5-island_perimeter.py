#!/usr/bin/python3
'''
Create a function def island_perimeter(grid):
which returns the perimeter of the island described in grid:
'''


def neighbors(grid, up, down, row_neighbors, col_neighbors):
    '''
    Return number of the
    sides of the lake
    '''
    num_of_sides = 0

    '''
    up calc
    '''
    if up > 0 and grid[up - 1][down]:
        num_of_sides += 1

    '''
    down calc
    '''
    if up < row_neighbors - 1 and grid[up + 1][down]:
        num_of_sides += 1

    '''
    left calc
    '''
    if down > 0 and grid[up][down - 1]:
        num_of_sides += 1

    '''
    right calc
    '''
    if down < col_neighbors - 1 and grid[up][down + 1]:
        num_of_sides += 1

    return num_of_sides


def island_perimeter(grid):
    '''
    Return perimiter of the
    lake of ones inside the lake of zeros
    '''
    perimiter_count = 0
    row_length = len(grid)
    col_length = len(grid[0])

    for row in range(0, row_length):
        for col in range(0, col_length):
            if grid[row][col]:
                perimiter_count += (4 - neighbors(grid, row, col,
                                                  row_length, col_length))
    return perimiter_count
