#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

HISTSIZE=-1

alias ls='ls --color=auto'
PS1='[\u@\h \W]\$ '

export WAYLAND_DISPLAY=wayland-1
alias wayvnc='wayvnc 0.0.0.0 -Ldebug'
