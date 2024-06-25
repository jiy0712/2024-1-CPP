#include <SFML/Graphics.hpp>


// Ball 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(10.f);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };
    }

    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = 8.f;
        else if (right() > 800) velocity.x = -8.f;

        if (top() < 0) velocity.y = 8.f;
        else if (bottom() > 600) velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);   // 초당 프레임을 60으로

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        rectangle.move(0.5f, 0);
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x 마크를 누르면
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기
        window.clear(sf::Color::white);

        // 도형 그리기
        // 화면 업데이트
        window.display();
    }

    return 0;
}
