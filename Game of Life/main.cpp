#include <raylib.h>
#include <iostream>
#include "simulation.hpp"



int main()
{
    Color GREY = {29, 29, 29, 255};
    const int WINDOW_WIDTH = 1280;
    const int WINDOW_HEIGHT = 800;
    const int CELL_SIZE = 4;
    int FPS = 12;
     
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE}; 
   
    
    //Simulation Loop - suspeito que aqui é a parte que mantém a janela aberta, 
    //Cuidado para não se frustrar e abandonar o programa, com a janela que fecha sozinha.
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling
        if(IsKeyPressed(KEY_ENTER))
        {
            simulation.Start();
            SetWindowTitle("Game of Life is running ...");
        }
        else if(IsKeyPressed(KEY_SPACE))
        {
           simulation.Stop();
           SetWindowTitle("Game of Life has stopped.");
        }
          
        // 2. Updating State
        simulation.Update();
        
        
        // 3. Drawing
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        
        EndDrawing();
    }
        
    CloseWindow();
  
}
