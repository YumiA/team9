import math
import string

address_width = 2**32

f = open("newMem.mem","w")
for i in range(address_width):

    if (i == 0):
        f.write(str(0x0ff00313))
    elif (i == 1):
        f.write(str(0x00000513))
    elif (i == 2):
        f.write(str(0x00000593))
    elif (i == 3):
        f.write(str(0x00058513))
    elif (i == 4):
        f.write(str(0x00158593))
    elif (i == 5):
        f.write(str(0xfe659ce3))
    elif (i == 6):
        f.write(str(0xfe0318e3))
    else:
        f.write(str(0x0))

    print(i)


f.close()