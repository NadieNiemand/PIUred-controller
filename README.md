# Instructions.
## Components
You will need:
![Components](https://i.imgur.com/wVauXgf.jpg)

- 5 MX Switches
- 1 Microcontroller (RP2040 Pro Micro, Arduino Pro Micro, RP2040 Zero)
- 4 Heat Inserts 4.5 mm or less
- 4 M2 screws x 5 mm
- Cables for the wiring, ethernet cables work fine
- 2 Dupont female Cables

You need to print:
- 1 case (case.stl)
- 5 keycaps (keycap arrow1 x2.stl, keycap arrow2 x2.stl, keycap center x1.stl)
- 1 plate (plate.stl)
- 1 bar (bar.stl)
- 1 microcontroller holder (microcontroller.stl)

## Build
First we put the switches on the plate to later solder them.
![Switches](https://i.imgur.com/AnvdcJx.jpg)

Now we attach the heat inserts in to the holes with an soldering iron.
![Inserts](https://i.imgur.com/MbHzNHk.jpg)

Solder all the switches together using the same pin, I will use de upper one. Make sure to insert the wire though the hole in the case before to solder to the board.
![First wire](https://i.imgur.com/3rOBQm8.jpg)

Solder a wire to the other pin of every switch and pull the wire through the hole.
![Switches soldered](https://i.imgur.com/v6JmflF.jpg)

Place the dupont ends in the corner, this would let us use the controller as a second mat, if you dont plan to use it like that, you can skip this and dont solder the duponts.
![Dupont](https://i.imgur.com/Dgfcuru.jpg)

It is a good moment to flash the microcontroller before everything else. To do that use the uf2 file in the firmware folder or compile your own with qmk. 
Solder the wires to the controller, the first wire we soldered side is going to the pin 7 in my RP2040 Pro Micro and the switches goes like this:
- Up left pin 12
- Up right pin 13
- Center pin 14
- Down left pin 15
- Down right pin 16
- Second Dupont cable pin 21
![RP2040](https://i.imgur.com/l9Os39X.jpg)

Then solder the other pin and the other dupont end as follows.
![Wiring Diagram](https://i.imgur.com/6nDXdAr.png)

Put the promicro into the holder and put it in place, be careful with the cables.
![Holder](https://i.imgur.com/8FTlnH4.jpg)

Finally put the keycaps and the bar to finish the controller. 
![Finished](https://i.imgur.com/frNcckp.jpg)

Enjoy.

