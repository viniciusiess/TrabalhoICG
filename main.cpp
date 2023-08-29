#include <GL/glut.h>
#include <windows.h>
#include <cmath>

void Paisagem() {
    // Cor de fundo como azul representando céu
    glClearColor(0.19f, 0.6f, 0.8f, 0.0f);
    // Limpa todas renderização e deixa a janela limpa
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Chão   
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.32f, 0.49f, 0.46f); // cor do quadrado
        glVertex2f(-1.0f, -0.8f);  // Canto superior esquerdo
        glVertex2f(1.0f, -0.8f);   // Canto superior direito
        glVertex2f(1.0f, -1.0f);   // Canto inferior direito
        glVertex2f(-1.0f, -1.0f);  // Canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Detalhes chao
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(0.01f, -0.87f); // canto superior esquerdo
        glVertex2f(0.2f, -0.87f); // canto superior direito 
        glVertex2f(0.2f, -0.90f); // Canto inferior direito
        glVertex2f(0.01f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.09f, -0.87f); // canto superior esquerdo
        glVertex2f(0.0f, -0.87f); // canto superior direito 
        glVertex2f(0.0f, -0.90f); // Canto inferior direito
        glVertex2f(-0.09f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.2f, -0.87f); // canto superior esquerdo
        glVertex2f(-0.1f, -0.87f); // canto superior direito 
        glVertex2f(-0.1f, -0.90f); // Canto inferior direito
        glVertex2f(-0.2f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição

    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.31f, -0.87f); // canto superior esquerdo
        glVertex2f(-0.21f, -0.87f); // canto superior direito 
        glVertex2f(-0.21f, -0.90f); // Canto inferior direito
        glVertex2f(-0.31f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição

    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.42f, -0.87f); // canto superior esquerdo
        glVertex2f(-0.32f, -0.87f); // canto superior direito 
        glVertex2f(-0.32f, -0.90f); // Canto inferior direito
        glVertex2f(-0.42f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição

     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.53f, -0.87f); // canto superior esquerdo
        glVertex2f(-0.43f, -0.87f); // canto superior direito 
        glVertex2f(-0.43f, -0.90f); // Canto inferior direito
        glVertex2f(-0.53f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.66f, 0.66f, 0.66f); // cor do quadrado
        glVertex2f(-0.65f, -0.87f); // canto superior esquerdo
        glVertex2f(-0.54f, -0.87f); // canto superior direito 
        glVertex2f(-0.54f, -0.90f); // Canto inferior direito
        glVertex2f(-0.65f, -0.90f); // canto inferior esquerdo
    glEnd(); // encerra a definição
         
    // Montanha
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.80f, 0.80f, 0.80f); // cor do triangulo
        glVertex2f(0.6f, -0.8f); // esquerda
        glVertex2f(1.2f, -0.8f); // direita
        glVertex2f(0.9f, -0.6f); // topo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.80f, 0.80f, 0.80f); // cor do triangulo
        glVertex2f(0.2f, -0.8f); // esquerda
        glVertex2f(0.7f, -0.8f); // direita
        glVertex2f(0.5f, -0.4f); // topo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.80f, 0.80f, 0.80f); // cor do triangulo
        glVertex2f(-0.2f, -0.8f); // esquerda
        glVertex2f(0.2f, -0.8f); // direita
        glVertex2f(0.0f, -0.3f); // topo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.80f, 0.80f, 0.80f); // cor do triangulo
        glVertex2f(-0.1f, -0.8f); // esquerda
        glVertex2f(0.3f, -0.8f); // direita
        glVertex2f(0.1f, -0.3f); // topo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.80f, 0.80f, 0.80f); // cor do triangulo
        glVertex2f(-1.2f, -0.8f); // esquerda
        glVertex2f(-0.5f, -0.8f); // direita
        glVertex2f(-0.8f, -0.3f); // topo
    glEnd(); // encerra a definição
    
    // Cerca
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(-0.66f, -0.75f);
        glVertex2f(-0.65f, -0.75f);
        glVertex2f(-0.65f,-0.85f);
        glVertex2f(-0.66f, -0.85f);
    glEnd(); // encerra a definição

    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(-1.0f, -0.75f);
        glVertex2f(-0.99f, -0.75f);
        glVertex2f(-0.99f,-0.85f);
        glVertex2f(-1.0f, -0.85f);
    glEnd(); // encerra a definição
    
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(-1.0f, -0.78f);
        glVertex2f(-0.65f, -0.78f);
        glVertex2f(-0.65f,-0.79f);
        glVertex2f(-1.0f, -0.79f);
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(-1.0f, -0.8f);
        glVertex2f(-0.65f, -0.8f);
        glVertex2f(-0.65f,-0.81f);
        glVertex2f(-1.0f, -0.81f);
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(-1.0f, -0.82f);
        glVertex2f(-0.65f, -0.82f);
        glVertex2f(-0.65f,-0.83f);
        glVertex2f(-1.0f, -0.83f);
    glEnd(); // encerra a definição
    
    // cerca lado direito
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.99f, -0.75f);
        glVertex2f(1.0f, -0.75f);
        glVertex2f(1.0f,-0.85f);
        glVertex2f(0.99f, -0.85f);
    glEnd(); // encerra a definição

    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.51f, -0.75f);
        glVertex2f(0.52f, -0.75f);
        glVertex2f(0.52f,-0.85f);
        glVertex2f(0.51f, -0.85f);
    glEnd(); // encerra a definição
    
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.51f, -0.78f);
        glVertex2f(1.0f, -0.78f);
        glVertex2f(1.0f,-0.79f);
        glVertex2f(0.51f, -0.79f);
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.51f, -0.8f);
        glVertex2f(1.0f, -0.8f);
        glVertex2f(1.0f,-0.81f);
        glVertex2f(0.51f, -0.81f);
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.51f, -0.82f);
        glVertex2f(1.0f, -0.82f);
        glVertex2f(1.0f,-0.83f);
        glVertex2f(0.51f, -0.83f);
    glEnd(); // encerra a definição
    
    // Casa
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.85f, 0.43f, 0.42f); // cor do quadrado
        glVertex2f(-0.65f, -0.3f); // canto superior esquerdo
        glVertex2f(-0.1f, -0.3f); // canto superior direito
        glVertex2f(-0.1f, -0.85f); // canto inferior direito
        glVertex2f(-0.65f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Telhado
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.75f, 0.43f, 0.36f); // cor do triangulo
        glVertex2f(-0.7f, -0.3f); // esquerda
        glVertex2f(-0.05f, -0.3f); // direita
        glVertex2f(-0.38f, 0.0f); // topo
    glEnd(); // encerra a definição
    
    // Porta
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.647059f, 0.164706f, 0.164706f); // cor do quadrado
        glVertex2f(-0.6f, -0.5f); // canto superior esquerdo
        glVertex2f(-0.45f, -0.5f); // canto superior direito
        glVertex2f(-0.45f, -0.85f); // canto inferior direito
        glVertex2f(-0.6f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Janela
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.847059f, 0.847059f, 0.74902f); // cor do quadrado
        glVertex2f(-0.2f, -0.4f); // canto superior esquerdo
        glVertex2f(-0.35f, -0.4f); // canto superior direito
        glVertex2f(-0.35f, -0.62f); // canto inferior direito
        glVertex2f(-0.2f, -0.62f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Chao Carro
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.55f, 0.34f, 0.23f); // cor do quadrado
        glVertex2f(0.1f, -0.8f); // canto superior esquerdo
        glVertex2f(0.5f, -0.8f); // canto superior direito
        glVertex2f(0.55f, -1.0f); // canto inferior direito
        glVertex2f(0.15f, -1.0f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Carro
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.0f, 0.0f, 0.0f); // cor do quadrado
        glVertex2f(0.1f, -0.7f); // canto superior esquerdo
        glVertex2f(0.5f, -0.7f); // canto superior direito
        glVertex2f(0.5f, -0.82f); // canto inferior direito
        glVertex2f(0.1f, -0.82f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.658824f, 0.658824f, 0.658824f); // cor do quadrado
        glVertex2f(0.18f, -0.5f); // canto superior esquerdo
        glVertex2f(0.42f, -0.5f); // canto superior direito
        glVertex2f(0.47f, -0.7f); // Canto inferior direito
        glVertex2f(0.13f, -0.7f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Detalhes do Carro
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(1.0f, 1.0f, 1.0f); // cor do quadrado
        glVertex2f(0.15f, -0.72f); // canto superior esquerdo
        glVertex2f(0.20f, -0.72f); // canto superior direito
        glVertex2f(0.20f, -0.85f); // Canto inferior direito
        glVertex2f(0.15f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(1.0f, 1.0f, 1.0f); // cor do quadrado
        glVertex2f(0.45f, -0.72f); // canto superior esquerdo
        glVertex2f(0.40f, -0.72f); // canto superior direito
        glVertex2f(0.40f, -0.85f); // Canto inferior direito
        glVertex2f(0.45f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição

    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(1.0f, 1.0f, 1.0f); // cor do quadrado
        glVertex2f(0.25f, -0.78f); // canto superior esquerdo
        glVertex2f(0.35f, -0.78f); // canto superior direito
        glVertex2f(0.35f, -0.80f); // Canto inferior direito
        glVertex2f(0.25f, -0.80f); // canto inferior esquerdo
    glEnd(); // encerra a definição
        
    // Pneus
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.0f, 0.0f, 0.0f); // cor do quadrado
        glVertex2f(0.15f, -0.75f); // canto superior esquerdo
        glVertex2f(0.20f, -0.75f); // canto superior direito 
        glVertex2f(0.20f, -0.85f); // Canto inferior direito
        glVertex2f(0.15f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.0f, 0.0f, 0.0f); // cor do quadrado
        glVertex2f(0.45f, -0.75f); // canto superior esquerdo
        glVertex2f(0.40f, -0.75f); // canto superior direito 
        glVertex2f(0.40f, -0.85f); // Canto inferior direito
        glVertex2f(0.45f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    // Arvores
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.52f, 0.37f, 0.26f); // cor do quadrado
        glVertex2f(0.8f, -0.3f); // canto superior esquerdo
        glVertex2f(0.9f, -0.3f); // canto superior direito
        glVertex2f(0.9f, -0.85f); // Canto inferior direito
        glVertex2f(0.8f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um quadrado
        glColor3f(0.32f, 0.49f, 0.46f); // cor do triangulo
        glVertex2f(1.0f, -0.3f); // Esquerda
        glVertex2f(0.7f, -0.3f); // Direita
        glVertex2f(0.85f, -0.01f); // Topo
    glEnd(); // encerra a definição
    
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.52f, 0.37f, 0.26f); // cor do quadrado
        glVertex2f(0.7f, -0.6f); // canto superior esquerdo
        glVertex2f(0.75f, -0.6f); // canto superior direito
        glVertex2f(0.75f, -0.8f); // Canto inferior direito
        glVertex2f(0.7f, -0.8f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.32f, 0.49f, 0.46f); // cor do triangulo
        glVertex2f(0.65f, -0.6f);  // Esquerda
        glVertex2f(0.80f, -0.6f); // Direita
        glVertex2f(0.725f, -0.5f); // Topo
    glEnd(); // encerra a definição
    
     glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor3f(0.52f, 0.37f, 0.26f); // cor do quadrado
        glVertex2f(-0.8f, -0.2f); // canto superior esquerdo
        glVertex2f(-0.9f, -0.2f); // canto superior direito
        glVertex2f(-0.9f, -0.85f); // Canto inferior direito
        glVertex2f(-0.8f, -0.85f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_TRIANGLES); // Define as vertices para renderizar um triangulo
        glColor3f(0.32f, 0.49f, 0.46f); // cor do triangulo
        glVertex2f(-1.0f, -0.2f); // Esquerda
        glVertex2f(-0.7f, -0.2f); // Direita
        glVertex2f(-0.85f, 0.5f); // Topo
    glEnd(); // encerra a definição
    
    // Sol
    glBegin(GL_TRIANGLE_FAN); // primitiva para renderizar um poligono
        glColor3f(1.0f, 1.0f, 0.0f); // defini a cor
        float centerX = 1.0, centerY = 1.0, radius = 0.5; // definindo as coordenadas e raio
        int numSegments = 100; // numero de segmentos

        glVertex2f(centerX, centerY); // colocando os pontos
        for(int i = 0; i <= numSegments; i++) {
            float angle = 2.0 * M_PI * static_cast<float>(i) / static_cast<float>(numSegments);
            float x = radius * cos(angle) + centerX;
            float y = radius * sin(angle) + centerY;
            glVertex2f(x, y);
        }
    glEnd(); // encerra a definição
    
    // Nuvem
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor4f(1.0f, 1.0f, 1.0f, 0.8f); // cor do quadrado
        glVertex2f(-0.8f, 0.8f); // canto superior esquerdo
        glVertex2f(-0.3f, 0.8f); // canto superior direito
        glVertex2f(-0.3f, 0.7f); // Canto inferior direito
        glVertex2f(-0.8f, 0.7f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glBegin(GL_QUADS); // Define as vertices para renderizar um quadrado
        glColor4f(1.0f, 1.0f, 1.0f, 0.8f); // cor do quadrado
        glVertex2f(0.1f, 0.5f); // canto superior esquerdo
        glVertex2f(0.6f, 0.5f); // canto superior direito
        glVertex2f(0.6f, 0.7f); // Canto inferior direito
        glVertex2f(0.1f, 0.7f); // canto inferior esquerdo
    glEnd(); // encerra a definição
    
    glFlush(); // envia os comandos de renderização para a GPU
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // inicia a biblioteca glut
    glutInitWindowSize(800, 700); // tamanho da janela
    glutCreateWindow("Trabalho ICG - Vinicius Siess"); // nome da janela
    glutDisplayFunc(Paisagem); // chamando a função Paisagem para exibir na janela
    glutMainLoop(); // loop onde as renderizações são tratadas
    return 0;
}
