#include <raylib.h>
#include "simulation.hpp"



int main()
{
    Color GREY = {29, 29, 29, 255};
    const int WINDOW_WIDTH = 750;
    const int WINDOW_HEIGHT = 750;
    const int CELL_SIZE = 25;
    int FPS = 12;
     
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE}; 
    
  
    //Simulation Loop - suspeito que aqui é a parte que mantém a janela aberta, 
    //Cuidado para não se frustrar e abandonar o programa, com a janela que fecha sozinha.
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling
        
        // 2. Updating State
        
        
        // 3. Drawing
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        
        EndDrawing();
    }
        
    CloseWindow();
  
}
