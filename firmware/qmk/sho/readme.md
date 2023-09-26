#SHO 

![sho](pictures/1.jpeg)

Low-profile split keyboard with 36 keys using XIAO controllers.

-   Keyboard Maintainer: [fmash16](https://github.com/fmash16)
-   Hardware Supported: sho PCBs, XIAO RP2040/nRF52840
-   Hardware Availability: [GitHub](https://github.com/fmash16/sho)

Make example for this keyboard (after setting up your build environment):

    make sho:default

Flashing example for this keyboard:

    make sho:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `RESET` if it is available
