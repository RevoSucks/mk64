# Mario Kart 64

This repo contains a work in progress disassembly of Mario Kart 64 (U).
The source and data have been partially disassembled and labeled.

It builds the following ROMs:

* Does not build any roms

This repo does not include all assets necessary for compiling the ROMs.
A prior copy of the game is required to extract the required assets.

## Progress

Stage: Dissasembly

Make: Needs making and linking

To contribute:

Requires [n64split](https://github.com/queueRAM/sm64tools)

Check n64split folder in this repo for latest YAML file. This file is used for telling n64split how to split the mk64 rom.

decompile asm with [mips to c online](https://simonsoftware.se/other/mips_to_c.py)

## Contributing

Pull requests are welcome.

Label sections of assembly (asm located in mk64.u.s) by decompiling a function with mips to c. Interpret the code and label what the function possibly is or does. Labeling is ddone in the YAML file under n64split. Can also find functions through memory view while running the game then find that asm in mk64.u.s and label it in the YAML.

Note that none of the credit for the current progress can be attributed to MegaMech.

