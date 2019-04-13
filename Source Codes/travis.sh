#!/bin/bash
find . -type f -print0 | while IFS= read -r -d $'\0' file; 
  do echo "$file" ;
done
