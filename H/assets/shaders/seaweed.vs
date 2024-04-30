#version 330

const int i_NUM_LIGHTS = 5;

uniform float time;
uniform mat4 modelLightProjectionMatrix[i_NUM_LIGHTS];
uniform mat4 modelMatrix;
uniform mat4 modelViewMatrix;
uniform mat4 projectionMatrix;
uniform sampler2D randomTexture;
uniform vec3 cameraPosition;
uniform vec4 clipPlane;
uniform vec4 lightPositions[i_NUM_LIGHTS];

//[
layout(location = 0) in vec3 vertexPosition;
layout(location = 1) in vec3 vertexNormal;
layout(location = 2) in vec4 vertexTangent;
layout(location = 3) in vec2 vertexTexCoord;
//]

out vec2 depth;
out vec2 texCoord;
out vec3 lightVecs[i_NUM_LIGHTS];
out vec3 normal;
out vec3 tangent;
out vec3 viewVec;
out vec4 shadowCoord[i_NUM_LIGHTS];
out vec4 objectSpacePosition;
out vec4 viewSpacePosition;
out vec4 worldSpacePosition;

#include "assets/shaders/randFunctions.fs"

void main()
{
  float intensity = valueNoiseTex(randomTexture, 0.25*time + 0.05*(modelMatrix * vec4(vertexPosition, 1.0)).xyz);
  float amplitude = mix(intensity, sin(5.*time - vertexPosition.y) + 1., 0.03) * vertexPosition.y * (1. - 1 / exp(0.1*vertexPosition.y));
  vec3 wind = transpose(mat3(modelMatrix)) * vec3(.4, 0., 1.);
  vec3 displacedVertex = vertexPosition + amplitude * wind;

  texCoord = vertexTexCoord;
  normal = normalize(mat3(modelMatrix) * vertexNormal);
  tangent = normalize(mat3(modelMatrix) * vertexTangent.xyz * vertexTangent.w);
  objectSpacePosition = vec4(displacedVertex, 1.0);
  worldSpacePosition = modelMatrix * vec4(displacedVertex, 1.0);
  viewSpacePosition = modelViewMatrix * vec4(displacedVertex, 1.0);
  viewVec = cameraPosition - worldSpacePosition.xyz;

  lightVecs[0] = lightPositions[0].xyz - lightPositions[0].w * worldSpacePosition.xyz;
  lightVecs[1] = lightPositions[1].xyz - lightPositions[1].w * worldSpacePosition.xyz;
  lightVecs[2] = lightPositions[2].xyz - lightPositions[2].w * worldSpacePosition.xyz;
  lightVecs[3] = lightPositions[3].xyz - lightPositions[3].w * worldSpacePosition.xyz;
  lightVecs[4] = lightPositions[4].xyz - lightPositions[4].w * worldSpacePosition.xyz;

  shadowCoord[0] = modelLightProjectionMatrix[0] * vec4(displacedVertex, 1.0);
  shadowCoord[1] = modelLightProjectionMatrix[1] * vec4(displacedVertex, 1.0);
  shadowCoord[2] = modelLightProjectionMatrix[2] * vec4(displacedVertex, 1.0);
  shadowCoord[3] = modelLightProjectionMatrix[3] * vec4(displacedVertex, 1.0);
  shadowCoord[4] = modelLightProjectionMatrix[4] * vec4(displacedVertex, 1.0);

  gl_Position = projectionMatrix * viewSpacePosition;
  gl_ClipDistance[0] = dot(viewSpacePosition.xyz, clipPlane.xyz) - clipPlane.w;
  depth = gl_Position.zw;
}
