#!/bin/bash

ps ax | awk '{print $1 $5}' | grep '1$' > proc.txt
