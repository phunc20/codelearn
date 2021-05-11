def jugWater2(x,y,z):
    if z > x + y:
        return -1
    new_states = {0: {(0, 0)}}
    # i.e. new_states is a dictionary s.t. new_states[0] equals the set {(0, 0)}
    all_states = new_states[0]
    step = 0
    while len(new_states[step]) != 0:
        step += 1
