#!/bin/bash

mkdir someSharing/{build,install}

cd someSharing/build

cmake .. -G "Ninja"  \
    -DCMAKE_INSTALL_PREFIX="../install" \
    -DCMAKE_BUILD_TYPE="Release"

ninja
ninja install

