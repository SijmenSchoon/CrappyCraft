#ifndef CRAPPYCRAFTLAUNCHER_H
#define CRAPPYCRAFTLAUNCHER_H

#include <vector>
#include <string>

namespace Launcher
{
    class CrappyCraftLauncher
    {
    public:
        int Main(std::vector<std::string> &arguments);

        void LaunchCrappyCraft();
    };
}

#endif // _CRAPPYCRAFTLAUNCHER_H
