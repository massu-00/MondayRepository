#include <iostream>

class ScoreManager
{
private:
    int currentScore; // 現在のスコア
    int highScore;    // ハイスコア

public:
    // コンストラクト（初期値は 0）
    ScoreManager()
        : currentScore(0), highScore(0)
    {
    }

    // スコアを足す
    void addPoints(int points)
    {
        currentScore += points;
    }

    // リセット
    void resetScore()
    {
        currentScore = 0;
    }

    // 更新
    void updateHighScore()
    {
        if (currentScore > highScore)
        {
            highScore = currentScore;
        }
    }

    // スコア表示
    void displayScores() const
    {
        std::cout << "Current Score: " << currentScore << "\n"
            << "High Score: " << highScore;
    }
};