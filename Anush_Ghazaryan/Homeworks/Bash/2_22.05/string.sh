#!/bin/bash


echo "Matching of letters"

echo "she loves Tux" | tr -cd 'o' | wc -c
