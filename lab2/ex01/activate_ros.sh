#!/bin/bash
# Source Virtual Environment

# Использую MacOS. этот скрипт был в репозитории с которого я установил ROS
# активирую ros2_venv через него
# https://github.com/IOES-Lab/ROS2_Jazzy_MacOS_Native_AppleSilicon?ysclid=m0m6ygu1wh794277492

# shellcheck disable=SC1091
source "$HOME/.ros2_venv/bin/activate"

# Source ROS
if [[ $SHELL == *"bash"* ]]; then
    # shellcheck disable=SC1091
    source "$HOME/ros2_jazzy/install/setup.bash"
    # shellcheck disable=SC1091
    source "$HOME/gz_harmonic/install/setup.bash"
elif [[ $SHELL == *"zsh"* ]]; then
    # shellcheck disable=SC1091
    source "$HOME/ros2_jazzy/install/setup.zsh"
    # shellcheck disable=SC1091
    source "$HOME/gz_harmonic/install/setup.zsh"
else
    echo "Unsupported shell. Please use bash or zsh."
    exit 1
fi

