git clone --depth 5 https://github.com/glfw/glfw.git
cd glfw
cmake -G "Unix Makefiles"
make
sudo make install
cd ..
rm -rf glfw
