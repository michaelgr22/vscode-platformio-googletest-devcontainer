FROM ubuntu:20.04

ENV TZ=Europe/Berlin
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update
RUN apt-get upgrade -y
RUN apt-get install -y python3 python3-venv curl nano build-essential cmake

RUN useradd -m vscode
USER vscode
WORKDIR /home/vscode

RUN python3 -c "$(curl -fsSL https://raw.githubusercontent.com/platformio/platformio/master/scripts/get-platformio.py)"
RUN echo "export PATH=$PATH:$HOME/.platformio/penv/bin/" >> /home/vscode/.bashrc