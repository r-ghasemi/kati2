#!/bin/sh
egrep -rihEe "/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+/" *
#| sed -e 's/\/*\(.*\)\/*/\1/'