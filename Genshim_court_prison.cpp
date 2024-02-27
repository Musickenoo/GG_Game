#include <SFML/Graphics.hpp>

int main()
{   
    int j = 0;
    int i = 1,a = 0;
    int rela = 0;
    // กำหนดขนาด window
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");

    sf::Font amazing;
    amazing.loadFromFile("../GG_Game/Font/LoveDays-2v7Oe.ttf");
    sf::Font Thai;
    Thai.loadFromFile("../GG_Game/Font/EkkamaiNew-Regular.ttf");

    // ภาพ back1image จะเป็นภาพอยู่หลังสุด
    sf::Texture back1;
    back1.loadFromFile("../GG_Game/image/background/testb1.jpg");
    sf::Sprite back1image;
    back1image.setTexture(back1);

    sf::Texture back2;
    back2.loadFromFile("../GG_Game/image/background/testb2.jpg");

    sf::Texture back3;
    back3.loadFromFile("../GG_Game/image/background/testb3.jpg");

    sf::Texture back4;
    back4.loadFromFile("../GG_Game/image/background/testb6.PNG");

    // กำหนด starto
    sf::Text starto("Judgment Of Nevillete \n The Archon", amazing, 80);
    starto.setPosition(50, 50);
    starto.setFillColor(sf::Color(255, 0, 108));

    sf::Text thaiText("สวัสดีชาวโลก",Thai, 80);
    thaiText.setFillColor(sf::Color(255, 0, 108));;
    thaiText.setPosition(10, 10);

    // กำหนดคุยเรื่อยเปื่อย

    std::vector<std::string> ventitalk = {
        ".............................",
        "Venti : เราชื่อ Venti น่ะ",
        "Venti :วันนี้คุยสนุกมาเลย ฉันอยากรู้จักเธอจังเลย",

        "Venti :สวัสดี คุณผู้คุม",
        "Venti :จะว่าไงดีล่ะก็คนที่ชื่อว่า Neuvillette บอกว่าเขาจะพิพากษาชั้นน่ะสิ",
        "Venti :ฉันเริ่มชักจะสนใจเธอสะแล้วซิ",

        "Venti :สวัสดี คุณผู้คุม....",
        "Venti :อย่าเงียบซี่........",
        "Venti :คุยกับเธอนี่มันสนุกดีน่ะ อยากได้ของฝากอ่ะ",

        "เมื่อคุณมาถึงพบว่า Venti กำลังหลับอยู่",
        "ตอนนั้นคุณเหลือบไปเห็นรูปภาพที่วางอยู่ใกล้ๆหน้าของเวนติ",
        "Venti :วันพรุ่งนี้เดี่ยวเล่าเรื่องราว เกี่ยวกับภาพนั้นให้ฟัง",

        "วันนี้คุณได้มาหาเวนติเพื่อนั่งคุยเล่นปกติ",
        "Venti :ฉันจะเล่าให้เธอฟังเกี่ยวกับภาพนั้น แต่เล่าปกติไม่สนุกให้ทายล่ะกัน-w-",
        "Venti :ซึ่งจริงๆในภาพนั้น ก็มีชั้นที่เป็วิญญาณธาตุลมตัวน้อยกับเพื่อนสนิทของข้า",

        "วันนี้ Venti หน้าตาดูเศร้าหมอง",
        "Venti :คุณผู้คุ้มมมมมมม............................",
        "ก่อนที่คุณจะจากไปคุณได้บอกกับ Venti ",

        "วันตัดสินก็มาถึง",
        "Venti :วันสุดท้ายแล้วสิน่ะ",
        "คุณได้จากลา Venti เป็นรอบสุดท้าย",
    };

    std::vector<std::string> Usertalk = {
        "คุณ : สวัสดี! เธอชื่ออะไรหรอ",
        "คุณ : เคยเจอกันมาก่อนไหม",
        "คุณ :ยินดีที่ได้อยู่จักอีกรอบน่ะ",

        "คุณ : สงสัยอย่างหนึ่ง ทำไมถึงมาอยู่ในคุกนี้ได้ล่ะ",
        "Venti :แถมบอกว่ามีเหล้าให้ในคุกแค่นั้นก็เพียงพอแล้ว-3-",
        "คุณ :เธอนี้แปลกดีเหมือนกันไว้ชวนไปบางขวานน่ะ",

        "ทำไมมีกลิ่นเหล้าแปลกๆแถวนี้",
        "คุณ : นี่เธอแอบไปดื่มเหล้ามาใช่ไหม",
        "คุณ : ถ้าว่างเดี่ยวซื้อของฝากมาให้เจอกัน",

        "Zzzzzzzzz",
        "คุณพยายามเข้าไปดูใกล้ ทันใดนั้น Venti ก็ตื่นขึ้นพร้อมกับสีหน้าที่ตกใจแล้วถามว่า",
        "แต่ดูยังไง Venti เหมือนจะมีอะไรจะบอกสักอย่างเลยแฮะ",

        "คุณ : ฉันมาแล้วจร้า",
        "คุณ : จัดมาดิ",
        "Venti :แต่นั้นก็เป็นความทรงจำที่ดีน่ะ(Venti ยิ้มให้คุณก่อนที่คุณจะกลับไปนอน)",

        "ตอนคุณมาถึงหน้าห้อง Venti เธอได้เปลี่ยนสีหน้าเป็นดีใจอย่างเห็นได้ชัด",
        "คุณ : ทำไมวันนี้เธอดูเศร้าจังก่อนที่ฉันจะมา",
        "คุณ : จงเชื่อในลิขิตของสวรรค์",

        "คุณได้เดินไปหา Venti อีกครั้ง",
        "คุณ : เธอยังมีสิ่งที่อยากทำอยู่ไหม",
        "ในใจคุณคิด เทพลมน่ะหรอ รอดูเลย"
    };

    std::vector<std::string> ventiQuestions = {
        "Venti :เธอลองเดาซิว่าเจอกันครั้งแรกที่ไหน",
        "Venti :ความจำเธอดีนิ เครื่องเล่นดนตรีเราคืออะไรล่ะ",
        "Venti :งั้นหรอเธอรู้จักเพื่อนฉันไหม รู้ไหมเข้าชื่ออะไร",

        "Venti :ว่าแต่นายเนี่ยถามชื่อฉันเมื่อวาน แล้วนายชื่อว่าอะไร",
        "Venti :จะชื่ออะไรก็ขอเรียกว่าผู้คุมก็แล้วกัน ทำไมนายถึงมาเป็นผู้คุมล่ะ",
        "Venti :อืม....งั้นชอบกินเหล้าไหมล่ะ",

        "Venti :งั้นในทายซิว่าได้เหล้ามาจากไหน",
        "Venti :งั้นถามนายบ้างล่ะชอบตัวละครแบบไหน",
        "Venti :นายนี่ไม่เบาเลยน่ะ นายมีแฟนยัง",

        "Venti :นายมาตอนไหนเนี่ย",
        "คุณสังเกตเห็นหน้าของ Venti ดูแดง คุณเลยถาม ",
        "Venti :ถ้ามาคราวหน้าคราวหลังก็บอกด้วยเซ่",

        "Venti :ร่างในปัจจุบันที่นายเห็นอยู่ตรงหน้าคล้ายกับใคร",
        "Venti :ตอนไป ชื่อจริ่งของฉันชื่ออะไร",
        "Venti :คำถามสุดท้าย เราเป็นเพศอะไร",

        "Venti กลับไปเป็นหน้าเศร้าหมองอีกครั้ง",
        "Venti :ไม่ใช่เรื่องอะไรทั้งนั้นแหละ แค่คิดว่าพรุ่งนี้คงเป็นวันสุดท้ายแล้วสิน่ะ",
        "Venti :ถ้าเราโดนพิพากษา ประหารชีวิตเธอจะทำยังไง",

        "Venti :ฉันขอให้ทำอะไรเพื่อฉันหน่อยก่อนจากไปไหม",
        "Venti :และก่อนที่จากลา นายชอบฉันไหม",
        "Venti :ไม่ว่ายังไงก็ขอบคุณน่ะที่ดูแลฉันมาตั้ง 7 วันน่ะ",
    };

    std::vector<std::string> Useranswer1 = {
        "Mondstadt",
        "gitar",
        "Barbatos",

        "Lumine",
        "Neuvillette สั่งมาน่ะ",
        "ไม่อ่ะ",

        "Jean",
        "หล่อเท่ห์ เห็นแล้วใจเกเร",
        "มีแล้ว ว้ายเธอไม่มี",

        "มาปลุกไง",
        "เป็นไข้หรอ",
        "ขอโทดๆ",

        "Vennessa วีรชนผู้ยิ่งใหญ่",
        "Annette สาวน้อยเวทลม",
        "ชาย",
        
        "มีอะไรก็เล่าให้ฟังก็ได้น่ะ",
        "...............",
        "ฉันจะเป็นคนขัดความการพิพากษาเอง",

        "เอาเหล้าที่แพงที่สุดให้",
        "ชอบสิ",
        "ด้วยความยินดี"
    };

    std::vector<std::string> Useranswer2 = {
        "Liyue Harbor",
        "piano",
        "Decarabian",

        "Aether",
        "ชั้นอยากมาเจอเธอน่ะสิ",
        "ถ้าฟรีก็เอา",

        "Klee",
        "สวย เบิ้มๆคือลือน่ะ",
        "ยังไม่มีเลย T-T",

        "มาดูรูปที่วางอยู่ใกล้ๆหน้าเธอไง",
        "อุ้ย เขินหรอ",
        "ราวหน้าจะมาลักหลับน่ะ",

        "เทพอสูรแห่งพายุ Decarabian",
        "Barbatos แห่งเทพลม",
        "หญิง",

        "หิวเหล้าหรอ",
        "ช่างเป็นเวลาอันแสนสั้นที่ได้ใช้รวมกับเธอ",
        "เราจะหนีไปด้วนกัน",

        "ฉันจะเก็บรูปไว้ในความทรงจำนี้เอง",
        "ไม่ชอบ แต่รักที่สุดเลย",
        "ฉันจะไปคุยกับผู่พิพากษา"
    };
    
    std::vector<std::string> Useranswer3 = {
        "Inazuma",
        "Lyre",
        "Furina",

        "ฉันไม่บอกหรอก",
        "ฉันเป็นมนุษย์เงินเดือน",
        "ชอบมาเลย",

        "Diluc",
        "น่ารัก ขี้เล่น มีเสน่ห์",
        "มีแค่คนคุยอะ",

        "อยากมาดูหน้าเธอไง",
        "เหล้าขึ้นหน้าแน่ๆ 555",
        "ไม่รู้ๆๆๆๆๆ",

        "Florentino มหาเทพแห่งการร่ายรำ",
        "Venti เทพขี้เมา",
        "แค่น่ารักก็พอแล้วป่ะ"
         
        "หมายถึงเรื่องรูปวันก่อนหรอ",
        "ฉันก็เศร้าเหมือนกันที่พรุ่งนี้เราจะอยู่ด้วยกัน",
        "มันเป็นกฏของสวรรค์ที่มิอาจหลีกเลี่ยงได้",

        "....................",
        "ไม่อ่ะ",
        "หลบหนี"
    };

    // สร้างอาร์เรย์ของ sf::Text จากประโยคคำถาม
    std::vector<sf::Text> Vtalk;
    for (const auto& question : ventitalk) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(sf::Color::Black);
        Vtalk.push_back(text);
    }

    std::vector<sf::Text>  Utalk;
    for (const auto& question : Usertalk) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(sf::Color::Black);
        Utalk.push_back(text);
    }

    std::vector<sf::Text>  Vqus;
    for (const auto& question : ventiQuestions) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(sf::Color::Black);
        Vqus.push_back(text);
    }

    std::vector<sf::Text> Uans1;
    for (const auto& question : Useranswer1) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(sf::Color::Black);
        Uans1.push_back(text);
    }

    std::vector<sf::Text> Uans2;
    for (const auto& question : Useranswer2) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(question);
        text.setCharacterSize(60);
        text.setPosition(1600, 900);
        text.setFillColor(sf::Color::Black);
        Uans2.push_back(text);
    }

    // สร้าง sf::Text สำหรับคำตอบของ Venti
    std::vector<sf::Text> Uans3;
    for (const auto& answer : Useranswer2) {
        sf::Text text;
        text.setFont(Thai);
        text.setString(answer);
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Black);
        Uans3.push_back(text);
    }

    // กำหนด choosen waifu
    sf::Text c1("choosen waifu", amazing, 80);
    c1.setPosition(1600, 900);
    c1.setFillColor(sf::Color(255, 0, 108));

    sf::Text day("DAY " + std::to_string(i), amazing, 80);
    day.setPosition(1600, 900);
    day.setFillColor(sf::Color(0,255,0));

    sf::Text relation("relation " + std::to_string(rela), amazing, 80);
    relation.setPosition(1600, 900);
    relation.setFillColor(sf::Color(0, 255, 0));

    // กำหนด buttonnoimage และ buttonckimage
    sf::Texture buttonno;
    buttonno.loadFromFile("../GG_Game/image/button/nclick1.jpg");
    sf::Sprite buttonnoimage;
    buttonnoimage.setTexture(buttonno);
    buttonnoimage.setPosition(1200.f, 700.f);

    sf::Texture buttonck;
    buttonck.loadFromFile("../GG_Game/image/button/click1.jpg");
    sf::Sprite buttonckimage;
    buttonckimage.setTexture(buttonck);
    buttonckimage.setPosition(1200.f, 700.f);

    //หน้าเลือกตัวตัวละคร
    sf::Texture waifu1Texture;
    waifu1Texture.loadFromFile("../GG_Game/image/test_charec/a_profile.jpg");
    sf::Sprite waifu1;
    waifu1.setTexture(waifu1Texture);
    waifu1.setPosition(1600.f, 900.f);

    sf::Texture waifu2Texture;
    waifu2Texture.loadFromFile("../GG_Game/image/test_charec/ac_profile.jpg");

    // ภาพตัวแทนตัวละคร Venti
    sf::Texture waifuface1Texture;
    waifuface1Texture.loadFromFile("../GG_Game/image/test_charec/IMG_0273.PNG");
    sf::Texture waifuface2Texture;
    waifuface2Texture.loadFromFile("../GG_Game/image/test_charec/2a_yes.png");
    sf::Texture waifuface3Texture;
    waifuface3Texture.loadFromFile("../GG_Game/image/test_charec/3a_sadd.png");
    sf::Texture waifuface4Texture;
    waifuface4Texture.loadFromFile("../GG_Game/image/test_charec/4a_cry.png");
    sf::Texture waifuface5Texture;
    waifuface5Texture.loadFromFile("../GG_Game/image/test_charec/5a_angry.png");
    sf::Texture waifuface6Texture;
    waifuface6Texture.loadFromFile("../GG_Game/image/test_charec/6a_happyy.png");
    sf::Sprite waifu2;
    waifu2.setTexture(waifuface1Texture);
    waifu2.setPosition(1600.f, 900.f);
    waifu2.setScale(1.7f, 1.8f);

    sf::RectangleShape rectangle(sf::Vector2f(1600, 150));
    rectangle.setPosition(1600, 900);
    rectangle.setFillColor(sf::Color(200, 200, 200, 100));

    bool buttonHovered = false;
    int state = 0;
    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    // ตรวจสอบว่าคลิกที่ buttonckimage หรือไม่
                    sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
                    if (buttonckimage.getGlobalBounds().contains(mousePos))
                    {
                        starto.setPosition(1600, 900);
                        back1image.setTexture(back2);
                        buttonnoimage.setPosition(1600.f, 900.f);
                        c1.setPosition(10, 10);
                        waifu1.setPosition(600.f, 40.f);
                    }
                    else if (waifu1.getGlobalBounds().contains(mousePos) && state >= 0) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {
                        // เปลี่ยนรูป waifu1Texture เป็น waifu12Texture
                        waifu1.setTexture(waifu2Texture);

                        // กำหนดเวลาในการเปลี่ยนรูปภาพเป็น 3 วินาที (3000 milliseconds)
                        clock.restart();
                        while (clock.getElapsedTime().asMilliseconds() < 3000)
                        {
                            // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
                            window.clear();
                            window.draw(back1image);
                            window.draw(c1);
                            window.draw(waifu1);
                            window.display();
                        }

                        // เลื่อนตำแหน่ง waifu1 และ c1 ไปยังตำแหน่งที่ระบุ (1600, 900)
                        waifu1.setPosition(700.f, 900.f);
                        c1.setPosition(1600, 900);


                        
                        day.setPosition(700, 400);
                        back1image.setTexture(back3);
                        clock.restart();
                        while (clock.getElapsedTime().asMilliseconds() < 1000)
                        {
                                // รีเฟรชหน้าจอเพื่อปรับปรุงการแสดงผล
                                window.clear();
                                window.draw(back1image);
                                window.draw(day);
                                window.draw(relation);
                                window.draw(waifu1);
                                window.display();

                        }
                        back1image.setTexture(back4);
                        day.setPosition(10, 10);
                        day.setFillColor(sf::Color(0, 0, 0));
                        relation.setPosition(1200, 10);
                        relation.setFillColor(sf::Color(0, 0, 0));

                        waifu2.setPosition(350.f, -180.f);
                        clock.restart();
                        while (clock.getElapsedTime().asMilliseconds() < 3000)
                        {
                            window.clear();
                            window.draw(back1image);
                            window.draw(day);
                            window.draw(relation);
                            window.draw(waifu2);

                            window.display();
                        }
                        rectangle.setPosition(0, 750);
                        window.draw(rectangle);
                        Vtalk[j].setPosition(600, 750);
                        Vtalk[j].setFillColor(sf::Color(0, 0, 0));
                    }
                    else if (rectangle.getGlobalBounds().contains(mousePos) && state >= 0) // เพิ่มเงื่อนไขตรวจสอบการคลิกที่ waifu1
                    {   
                        clock.restart();
                        while (clock.getElapsedTime().asMilliseconds() < 3000)
                        {
                            window.clear();
                            window.draw(back1image);
                            window.draw(day);
                            window.draw(relation);
                            window.draw(waifu2);

                            window.display();
                        }
                    }
                }
            }
        }

        // ตรวจสอบว่าเมาส์อยู่ในพื้นที่ของ buttonnoimage หรือไม่
        sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        if (buttonnoimage.getGlobalBounds().contains(mousePos))
        {
            // เมาส์อยู่ในพื้นที่ของ buttonnoimage แสดง buttonckimage
            buttonnoimage.setTexture(buttonck);
            buttonHovered = true;
        }
        else
        {
            // เมาส์ไม่อยู่ในพื้นที่ของ buttonnoimage แสดง buttonnoimage เหมือนเดิม
            if (!buttonHovered)
            {
                buttonnoimage.setTexture(buttonno);
            }
            else
            {
                // เมาส์ไม่อยู่ในพื้นที่ของ buttonnoimage เปลี่ยนกลับเป็น buttonnoimage เดิม
                buttonnoimage.setTexture(buttonno);
                buttonHovered = false;
            }
        }

        window.clear();
        //ฉากแรก
        window.draw(back1image);
        window.draw(c1);
        window.draw(day);
        window.draw(relation);
        window.draw(waifu1);
        window.draw(waifu2);
        window.draw(rectangle);
        window.draw(Vtalk[j]);
        window.draw(Utalk[j]);
        window.draw(Vqus[j]);
        window.draw(Uans1[j]);
        window.draw(Uans2[j]);
        window.draw(Uans3[j]);
        window.draw(starto);
        window.draw(buttonnoimage);
        window.display();
    }

    return 0;
}