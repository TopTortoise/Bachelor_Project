# Use the Ubuntu 22.04 as the base image
FROM ubuntu:22.04

# Update the package repository and install necessary software
RUN apt-get update && \
    apt-get install -y \
    software-properties-common \
    apt-utils \
    wget \
    git \
    python3 \
    python3-pip \
    neovim \
    verilator && \
    pip3 install --upgrade fusesoc


ENV WORKSPACE=/project
ENV SERV=${WORKSPACE}/fusesoc_libraries/serv
# ENV REPO="https://github.com/TopTortoise/Bachelor_Project" # check git clone below

WORKDIR /project

# RUN git clone ${REPO} ${WORKSPACE} # only usefull if there is no mounted dir on run at the folder

# Clean up
RUN apt-get clean && rm -rf /var/lib/apt/lists/*

# Set the default command to run when the container starts
CMD ["bash"]

