# include cs50

def main():
    while True:
        try:
            height = int(input("Height: "))
            if 0 < height < 9:
                break
        except ValueError:
            pass  # input not int, loop continues

    mario_pyramid(height)


def mario_pyramid(height):

    # for (i = 0; i < height; i++)
    for i in range(1, height+1, 1):  # generates a sequence of numbers from 0 up to (but not including)
        print(" "*(height-i), end='')
        print("#"*i)


main()
