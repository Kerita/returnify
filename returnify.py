#!/usr/bin/python3
import sys
import binascii

if len(sys.argv) > 1:
    initial = "6a4c"
    hexdata = ""
    userinput = sys.argv[1]
    if len(userinput) > 255:
        print("Size of return too large for op 4c.")
        sys.exit(0)
    hexdata = binascii.hexlify(bytes(userinput, 'ascii'))
    initial += binascii.hexlify(bytes(chr(len(userinput)), 'ascii')).decode('ascii')
    initial += hexdata.decode('ascii')
    print("Script: " + initial)
else:
    print("You didn't enter the script data.")
    sys.exit(0)
