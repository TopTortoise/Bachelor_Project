#!/bin/sh
PROJECT_FOLDER=/project
SRC_FOLDER=$(realpath .)
mkdir -p ${SRC_FOLDER}

if docker ps --format '{{.Names}}' | grep -q "^verilog_project$"; then
  docker attach verilog_project
else
  docker run --rm --name "verilog_project" -it -v ${SRC_FOLDER}:${PROJECT_FOLDER} verilog-ubuntu:22.04
fi
