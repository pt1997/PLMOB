#!/bin/bash
# TODO: needs to be adapted for sway

cd "$(dirname "$0")"
systemctl --user is-active --quiet lisgd
if [ $? -eq 0 ]
then
	systemctl --user stop lisgd
	imv -fs crop wallpaper.jpg &
	hyprctl dispatch dpms off
else
	hyprctl dispatch dpms on
	lisgd-unlock/lisgd &
	PID=$!
	sleep 15
	systemctl --user is-active --quiet lisgd
	if [ $? -ne 0 ]
	then
		hyprctl dispatch dpms off
	fi

	kill $PID
	# todos:
	# show nwg-wrapper
fi

