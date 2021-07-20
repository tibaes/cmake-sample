mkdir .\someSharing\build
mkdir .\someSharing\build\install

Set-Location .\someSharing\build

cmake.exe .. -G "Visual Studio 16 2019" `
    -DCMAKE_INSTALL_PREFIX="./install"

cmake.exe --build . --parallel --config Release
cmake.exe --install . --config Release