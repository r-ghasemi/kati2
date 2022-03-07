#!/bin/sh
grep -n -ri "todo:" * | sed -re  's/^:[ \t]*/:/g' 