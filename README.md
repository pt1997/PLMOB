# Pt1997's Linux Mobile Bootstrapping Script (PLMOB)

- PLMOB is inspired by SXMO but aims to be more touchscreen friendly, It also doesn't feel to comply with the luckless philosophy, it will use what ever I think is good.

- The main target hardware is the Pinephone Pro.

- This is a hobby project, I'll work on it when I work on it.

- The difference to something like phosh is that it doesn't try to make an existing desktop environment work on Mobile hardware but instead I just take what ever works reliable and put it together.

- Usability and stability are important for me. I'm fine with configuring things that don't need to be changed on a daily basis via CLI/Tui tools, they don't need a menu entry or button.

The first goal is to provide an install script that can be run on the base Arch install. After that I want to make the script work on the Debian.

## Currently used Software:

| Software | Description      |
|----------|------------------|
| Sway     | window manager and Wayland compositor |
| lisgd    | sxmo deamon for touchscreen gestures |
| lcarsde-application-starter.py | applauncher |
| squeekboard | tochscreen keyboard from gnome/Librem 5 |
| swaywsr  | workspace renamer |
| foot     | sxmo Terminal |

## other software I tested and plan to use:
- https://mauikit.org/apps/
- https://liri.io/apps/
- mobile-config-firefox
- fingerterm

## software used for debugging:
wayvnc

## please feel free to let me know any software suggestions :)
