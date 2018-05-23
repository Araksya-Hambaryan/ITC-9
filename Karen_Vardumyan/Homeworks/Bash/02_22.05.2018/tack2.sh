#!/bin/bash
read -p "Enter yout text " text
read -p "Enter your word " word
awk -F"${word}" '{print NF-1}' <<< "${text}"
