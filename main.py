def find_removing(colors, numbers):
    removing = -1
    last_color = colors[0]
    for color in colors:
        if color == last_color:
            removing += 1
        last_color = color
    return removing

stone_number = int(input())
colors = input()

removing = find_removing(colors, stone_number)
print(removing)