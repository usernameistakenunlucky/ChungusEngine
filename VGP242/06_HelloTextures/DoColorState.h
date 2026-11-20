#pragma once

#include <ChungusEngine.h>

class DoColorState : public ChungusEngine::AppState
{
public:
	void Initialize() override;
	void Update(float deltaTime) override;
	void Render() override;
	void Terminate() override;
private:

	ChungusEngine::Graphics::MeshBuffer mMeshBuffer;
	ChungusEngine::Graphics::VertexShader mVertexShader;
	ChungusEngine::Graphics::PixelShader mPixelShader;
	ChungusEngine::Graphics::Camera mCamera;
	ChungusEngine::Graphics::ConstantBuffer mTransformBuffer;

	ChungusEngine::Graphics::TextureId mTextureId;
	ChungusEngine::Graphics::Sampler mSampler;
};