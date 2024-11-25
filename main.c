 InitWindow(screenWidth, screenHeight, "Raylib Template");
    play:
    srand(time(0));
    Texture2D boxTexture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\box.png");
    Texture2D boxTexture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box.png");
    if (boxTexture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
   /* box1= LoadTexture("poze_minesweeper/box1.png");
    box2= LoadTexture("poze_minesweeper/box2.png");
    box3= LoadTexture("poze_minesweeper/box3.png");
    box4= LoadTexture("poze_minesweeper/box4.png");
    box5= LoadTexture("poze_minesweeper/box5.png");
    box6= LoadTexture("poze_minesweeper/box6.png");
    box7= LoadTexture("poze_minesweeper/box7.png");
    box8= LoadTexture("poze_minesweeper/box8.png");
    box0= LoadTexture("poze_minesweeper/box0.png");
    bomb= LoadTexture("poze_minesweeper/bomb.png");
    flag= LoadTexture("poze_minesweeper/flag.png");*/
    Texture2D box1Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box1.png");
    if (box1Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box2Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box2.png");
    if (box2Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box3Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box3.png");
    if (box3Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box4Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box4.png");
    if (box4Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box5Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box5.png");
    if (box5Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box6Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box6.png");
    if (box6Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box7Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box7.png");
    if (box7Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    Texture2D box8Texture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\box8.png");
    if (box8Texture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }
    /*Texture2D flagTexture = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\flag.png");
    if (flagTexture.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }*/
    Texture2D bomb = LoadTexture("C:\\Users\\Stefan\\CLionProjects\\untitled\\texturi\\bomb.png");
    if (bomb.id == 0)
    {
        // Print an error message if the texture failed to load
        printf("Failed to load texture!\n");
        CloseWindow();
        return 1;
    }

    for (int i = 0; i <= COLS + 1; i++)
    {
@@ -172,43 +240,43 @@ int main()
                if(grid[i][j].revealed==false)
                    DrawTextureEx(boxTexture, (Vector2){ ((float)(grid[i][j].x - 1)) * cellsWidth, ((float)(grid[i][j].y - 1)) * cellsHeight},0,0.07f,WHITE);

                /*
                else
                {
                    if(grid[i][j].adjMines==1)
                        DrawTextureEx(box1, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box1Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==2)
                        DrawTextureEx(box2, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box2Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==3)
                        DrawTextureEx(box3, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box3Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==4)
                        DrawTextureEx(box4, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box4Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==5)
                        DrawTextureEx(box5, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box5Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==6)
                        DrawTextureEx(box6, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box6Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==7)
                        DrawTextureEx(box7, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box7Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==8)
                        DrawTextureEx(box8, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                        DrawTextureEx(box8Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);

                    if(grid[i][j].adjMines==0)
                        DrawTextureEx(box0, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);
                    //if(grid[i][j].adjMines==0)
                        //DrawTextureEx(box0Texture, (Vector2){ (grid[i][j].x-1)*cellsWidth, (grid[i][j].y-1)*cellsHeight},0,0.07f,WHITE);



                }
*/


                CellDraw(grid[i][j]);
                //CellDraw(grid[i][j]);

            }
        }
