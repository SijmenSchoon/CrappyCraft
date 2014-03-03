#ifndef SHADER_H
#define SHADER_H
#include <string>

namespace Graphics
{
    class Shader
    {
    public:
        Shader();
        Shader(int shaderType);
        Shader(int shaderType, std::string path);
        ~Shader();

    private:
        unsigned int mShaderID;
    };
}

#endif
