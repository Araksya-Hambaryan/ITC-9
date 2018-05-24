#!/bin/bash

ps -eo comm,pid | grep "1$" > procPID.txt
