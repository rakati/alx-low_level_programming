#!/usr/bin/python3
'''
This Module contains a function that calculate perimeter of an island
represented in a grid
'''


def island_perimeter(grid):
    '''
    Calculate Island perimeter, there is only one Island, ant it is surrounded
    by water and doesn't contain any lake inside

    Parameters:
    -----------
        - grid (list of list): list of list with ones and zeros,
            ones means Island, zeros means water.
    '''
    try:
        l1 = len(grid) - 1
        l2 = len(grid[0]) - 1
        res = 0
        for i in range(1, l1):
            for j in range(1, l2):
                if grid[i][j]:
                    res += (grid[i - 1][j] == 0) + (grid[i][j - 1] == 0) +\
                        (grid[i + 1][j] == 0) + (grid[i][j + 1] == 0)
        return res
    except ValueError:
        print('the function accept only list of list')
