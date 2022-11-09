FROM amytabb/docker_ubuntu16_essentials AS builder
COPY . /HelloWorld
WORKDIR /HelloWorld/
RUN g++ -o HelloWorld helloworld.cpp
ENTRYPOINT ["./HelloWorld"]
