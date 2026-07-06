source /etc/bash_completion
# if running bash
if [ -n "$BASH_VERSION" ]; then
    # include .bashrc if it exists
    if [ -f "$HOME/.bashrc" ]; then
	. "$HOME/.bashrc"
    fi
fi

# set PATH so it includes user's private bin directories
PATH="$HOME/bin:$HOME/.local/bin:$PATH"

#start_vpn
export TERM=xterm-256color
export PYTHONSTARTUP="$HOME/.pythonrc"
export PYTHONPATH=/opt/openrobots/lib/python2.7/site-packages/:$PYTHONPATH
