def jugWater2(x,y,z):
    if z > x + y:
        return -1
    elif z == 0:
        return 0
    new_states = {0: {(0, 0)}}
    # i.e. new_states is a dictionary s.t. new_states[0] equals the set {(0, 0)}
    all_states = new_states[0]
    step = 0

    def fill_x(s):
        return (x, s[1])
    def fill_y(s):
        return (s[0], y)
    def empty_x(s):
        return (0, s[1])
    def empty_y(s):
        return (s[0], 0)
    #def x_to_y(s):
    #    if s[0] == 0:
    #        return s
    #    else:
    #        amount = min(y-s[1], s[0])
    #        return (s[0] - amount, s[1] + amount)
    def x_to_y(s):
        amount = min(y-s[1], s[0])
        return (s[0] - amount, s[1] + amount)
    def y_to_x(s):
        #return tuple(reversed(x_to_y((s[1], s[0]))))  # Wrong? Yes, wrong.
        amount = min(x-s[0], s[1])
        return (s[0] + amount, s[1] - amount)

    def achieve_z(s):
        return s[0] == z or s[1] == z or s[0] + s[1] == z

    all_moves = (fill_x, fill_y, empty_x, empty_y, x_to_y, y_to_x)

    while len(new_states[step]) != 0:
        #logging.debug(f"new_states[{step}] = {new_states}")
        new_states[step+1] = set()
        for state in new_states[step]:
            for move in all_moves:
                next_state = move(state)
                if next_state in all_states or next_state in new_states[step+1]:
                    continue
                else:
                    new_states[step+1].add(next_state)
                if achieve_z(next_state):
                    return step + 1
        # now that new_states[step+1] constructed, update/notify all_states
        all_states.update(new_states[step+1])
        # increment step before entering next iteration
        step += 1
    return -1


