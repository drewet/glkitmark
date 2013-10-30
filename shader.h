#ifndef _SHADER_H
#define _SHADER_H

#include "oglsdl.h"

#include <fcntl.h>
#include <unistd.h>

class Shader
{
public:
    ~Shader();
    void load(const char *pVertexShaderFileName, const char *pFragmentShaderFileName);
    void remove();
    void use();
    
    GLuint mVertexShader;
    GLuint mFragmentShader;
    int mShaderProgram;
};

#endif
