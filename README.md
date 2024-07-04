# Dwmblocks
Modular status bar for dwm written in c.

# Usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have
it start with dwm.

# Modifying Blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the config.h header file.

# Signaling
Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, the volume module has the update signal 10 by default. Thus,
running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster. Just add 34 to your typical signal number.
My volume module never updates on its own, instead I have this command run along
side my volume shortcuts in dwm to only update it when relevant.

Note that all modules must have different signal numbers.

# Clickable Modules(Patch)
Like i3blocks, this build allows you to build in additional actions into your
scripts in response to click events. 

For this feature to work, you need the appropriate patch in dwm as well.
See [here](https://dwm.suckless.org/patches/statuscmd/). Credit for those
patches goes to [Daniel Bylinka](daniel.bylinka@gmail.com).

This patch is added to this build.
