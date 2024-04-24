#!/bin/sh
touch value
git status --ignored -s | grep "!!" | cut -c4- 
rm value
