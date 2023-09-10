# Pt1997's Linux Mobile Bootstrapping Script (PLMOB)

- PLMOB is inspired by SXMO but aims to be more touchscreen friendly. I also don't feel to comply to the suckless philosophy. It will use whatever I think is good.

- The main target hardware is the PinePhone Pro.

- This is a hobby project, I'll work on it when I work on it.

- The difference to something like Phosh is that it doesn't try to make an existing desktop environment work on Mobile hardware, but instead I just take what ever works reliable and put it together.

- Usability and stability are important for me. I'm fine with configuring things that don't need to be changed on a daily basis via CLI/TUI tools, they don't need a menu entry or button.

The first goal was to provide an installation script that can be run on the base Arch install, since [it has not been updates since February](https://github.com/dreemurrs-embedded/Pine64-Arch/releases) I'll probably have to release an image
After that, I want to make the script work on the Debian.

## Currently used Software:

| Software | Description      |
|----------|------------------|
| Hyprland     | window manager and Wayland compositor |
| lisgd    | sxmo deamon for touchscreen gestures |
| lcarsde-application-starter.py | applauncher |
| squeekboard | tochscreen keyboard from gnome/Librem 5 |
| foot     | sxmo Terminal |

## other software I tested and plan to use:
- https://mauikit.org/apps/
- https://liri.io/apps/
- mobile-config-firefox

## software used for debugging:

## please feel free to let me know any software suggestions :)
