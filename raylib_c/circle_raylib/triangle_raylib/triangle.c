#include "raylib.h"

int main(void) {

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Triangle - raylib");

    Vector2 trianglePosition = {screenWidth / 2.0f, screenHeight / 2.0f};

    float triangleSize = 30.0f; 

    int speed = 5;

    SetTargetFPS(60);

    while(!WindowShouldClose()) {

        if(IsKeyDown(KEY_RIGHT)) 

            trianglePosition.x += speed;

        if(IsKeyDown(KEY_LEFT))

            trianglePosition.x -= speed;

        if(IsKeyDown(KEY_UP))

            trianglePosition.y -= speed;

        if(IsKeyDown(KEY_DOWN))

            trianglePosition.y += speed;

        if(trianglePosition.x < triangleSize)

            trianglePosition.x = triangleSize;

        if(trianglePosition.x > screenWidth - triangleSize)

            trianglePosition.x = screenWidth - triangleSize;

        if(trianglePosition.y < triangleSize)

            trianglePosition.y = triangleSize;

        if(trianglePosition.y > screenHeight - triangleSize)

            trianglePosition.y = screenHeight - triangleSize;

        Vector2 top = {trianglePosition.x, trianglePosition.y - triangleSize};

        Vector2 bottom_left = {trianglePosition.x - triangleSize, trianglePosition.y + triangleSize};

        Vector2 bottom_right = {trianglePosition.x + triangleSize, trianglePosition.y + triangleSize};

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawTriangle(top, bottom_left, bottom_right, RED);
    
        DrawText("Use arrow key to move", 10, 10, 20, DARKGRAY);

        EndDrawing();

    }

    CloseWindow();

    return 0;

}
