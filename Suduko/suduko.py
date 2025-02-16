from z3 import *

file_name="data.txt"
with open (file_name,"r") as file:
    numbers=file.readlines()
numbers=[number.replace("\n","").replace(" ","") for number in numbers]
numbers=[number for number in numbers if number!=""]
my_grid=tuple([tuple([char for char in number]) for number in numbers])

x = [[Int(f"x_{i+1}_{j+1}") for j in range(9)] for i in range(9)]

cells_c = [And(1 <= x[i][j], x[i][j] <=9 ) for i in range(9) for j in range(9)]

rows_c = [Distinct(x[i]) for i in range(9)]

cols_c = [Distinct([x[i][j] for i in range(9)]) for j in range(9)]

sq_c = [Distinct([x[3*i0+i][3*j0+j] for i in range(3) for j in range(3)]) for i0 in range(3) for j0 in range(3)]

instance_c = [If(my_grid[i][j] == '0', True , x[i][j] == int(my_grid[i][j])) for i in range(9) for j in range(9)]

sudoku_c = cells_c + rows_c + cols_c + sq_c + instance_c

s = Solver()
s.add(sudoku_c)

if s.check() == sat:
    m= s.model()
    solved_grid = [[m.evaluate(x[i][j]).as_long() for j in range(9)] for i in range(9)]

    for row in solved_grid:
        print(row)
else:
    print("NO solution found.")
# # 9x9 matrix of integer variables
# X = [ [ Int("x_%s_%s" % (i+1, j+1)) for j in range(9) ]
#       for i in range(9) ]

# # each cell contains a value in {1, ..., 9}
# cells_c  = [ And(1 <= X[i][j], X[i][j] <= 9)
#              for i in range(9) for j in range(9) ]

# # each row contains a digit at most once
# rows_c   = [ Distinct(X[i]) for i in range(9) ]

# # each column contains a digit at most once
# cols_c   = [ Distinct([ X[i][j] for i in range(9) ])
#              for j in range(9) ]

# # each 3x3 square contains a digit at most once
# sq_c     = [ Distinct([ X[3*i0 + i][3*j0 + j]
#                         for i in range(3) for j in range(3) ])
#              for i0 in range(3) for j0 in range(3) ]

# sudoku_c = cells_c + rows_c + cols_c + sq_c

# # sudoku instance, we use '0' for empty cells
# instance = ((0,0,0,0,9,4,0,3,0),
#             (0,0,0,5,1,0,0,0,7),
#             (0,8,9,0,0,0,0,4,0),
#             (0,0,0,0,0,0,2,0,8),
#             (0,6,0,2,0,1,0,5,0),
#             (1,0,2,0,0,0,0,0,0),
#             (0,7,0,0,0,0,5,2,0),
#             (9,0,0,0,6,5,0,0,0),
#             (0,4,0,9,7,0,0,0,0))

# instance_c = [ If(instance[i][j] == 0,
#                   True,
#                   X[i][j] == instance[i][j])
#                for i in range(9) for j in range(9) ]

# s = Solver()
# s.add(sudoku_c + instance_c)
# if s.check() == sat:
#     m = s.model()
#     r = [ [ m.evaluate(X[i][j]) for j in range(9) ]
#           for i in range(9) ]
#     print_matrix(r)
# else:
#     print ("failed to solve")