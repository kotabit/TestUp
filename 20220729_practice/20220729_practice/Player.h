#pragma once
class CPlayer
{
private:
	int HP;
public:
	CPlayer();
	~CPlayer();
	void Init();
	void Update();
	void Draw();
	void Uninit();
};
