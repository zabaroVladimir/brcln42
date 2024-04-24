#!/bin/bash

#+-

id -u -n | cut -d ' ' -f 1 | tr '\n' ','
