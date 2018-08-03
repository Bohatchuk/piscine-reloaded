#/bin/sh

ifconfig | grep -w "ether" | cut -d " " -f2
