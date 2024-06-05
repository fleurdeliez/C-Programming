# define two functions
def add_one(x):
    return x + 1

def multiply_by_two(x):
    return x * 2

# define a composition function
def compose(f, g):
    def h(x):
        return f(g(x))
    return h

# create a composed function
composed_function = compose(add_one, multiply_by_two)

# call the composed function
result = composed_function(3)
print(result)  # output: 7





