#!/bin/bash
configpath="$HOME/.config/sway"

mobile="include $configpath/mobile-mode"
desktop="include $configpath/desktop-mode"

current="$(cat $configpath/config)"

if [[ "$current" == "$mobile" ]]; then
	echo $desktop > $configpath/config
elif [[ "$current" == "$desktop" ]]; then
	echo $mobile > $configpath/config
fi

# Reload Sway with the new configuration
swaymsg reload
