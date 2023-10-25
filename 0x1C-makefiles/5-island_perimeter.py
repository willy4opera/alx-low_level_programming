#!/usr/bin/python3
"""Here, we defined an island perimeter measuring function."""


def island_perimeter(grid):
    """ Here, we returned the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    wid = len(grid[0])
    hgt = len(grid)
    edgs = 0
    size = 0

    for numi in range(hgt):
        for numj in range(wid):
            if grid[numi][numj] == 1:
                size += 1
                if (numj > 0 and grid[numi][numj - 1] == 1):
                    edgs += 1
                if (numi > 0 and grid[numi - 1][numj] == 1):
                    edgs += 1
    return size * 4 - edgs * 2
