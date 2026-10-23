#include "raylib.h"

int main(void) {

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Movinig ball - raylib");

    Vector2 ballPostion = {screenWidth / 2.0f, screenHeight / 2.0f};

    float ballRadius = 30.0f;
    int speed = 5;

    SetTargetFPS(60);

    while(!WindowShouldClose()) {

        if(IsKeyDown(KEY_RIGHT))

            ballPostion.x += speed;

        if(IsKeyDown(KEY_LEFT))

            ballPostion.x -= speed;

        if(IsKeyDown(KEY_UP))

            ballPostion.y -= speed;

        if(IsKeyDown(KEY_DOWN))

            ballPostion.y += speed;

        if(ballPostion.x < ballRadius)

            ballPostion.x = ballRadius;

        if(ballPostion.x > screenWidth - ballRadius)

            ballPostion.x = screenWidth - ballRadius;

        if(ballPostion.y < ballRadius)

            ballPostion.y = ballRadius;

        if(ballPostion.y > screenHeight - ballRadius)

            ballPostion.y = screenHeight - ballRadius;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPostion, ballRadius, RED);
        DrawText("Use ARROW KEYS to move", 10, 10, 20, DARKGRAY);
        EndDrawing();

    }

    CloseWindow();

    return 0;

}
