#pragma once

#include "../initGame.h"

class Venti{
    public:
        Venti();
        vector<vector<string>> ventiTalk, userTalk, ventiQuestions;
        vector<vector<vector<string>>> userAnswers, ventiAction;
        vector<vector<vector<int>>> actionRelation;
        Texture waifuface1Texture;
        Texture waifuface2Texture;
        Texture waifuface3Texture;
        Texture waifuface4Texture;
        Texture waifuface5Texture;
        Texture waifuface6Texture;
        Sprite waifu2;
};


Venti::Venti(){
    
    // ภาพตัวแทนตัวละคร Venti
    waifuface1Texture.loadFromFile("../GG_Game/image/test_charec/IMG_0273.PNG");
    waifuface2Texture.loadFromFile("../GG_Game/image/test_charec/2a_yes.png");
    waifuface3Texture.loadFromFile("../GG_Game/image/test_charec/3a_sadd.png");
    waifuface4Texture.loadFromFile("../GG_Game/image/test_charec/4a_cry.png");
    waifuface5Texture.loadFromFile("../GG_Game/image/test_charec/5a_angry.png");
    waifuface6Texture.loadFromFile("../GG_Game/image/test_charec/6a_happyy.png");

    ventiTalk = {
        // วันที่ 1
        {   
            ".............................",
            "Venti : เราชื่อ Venti น่ะ",
            "Venti :วันนี้คุยสนุกมาเลย ฉันอยากรู้จักเธอจังเลย"
        },
        
        // วันที่ 2
        {   
            "Venti :สวัสดี คุณผู้คุม",
            "Venti :จะว่าไงดีล่ะก็คนที่ชื่อว่า Neuvillette บอกว่าเขาจะพิพากษาชั้นน่ะสิ",
            "Venti :ฉันเริ่มชักจะสนใจเธอสะแล้วซิ"
        },
        
        // วันที่ 3
        {   
            "Venti :สวัสดี คุณผู้คุม....",
            "Venti :อย่าเงียบซี่........",
            "Venti :คุยกับเธอนี่มันสนุกดีน่ะ อยากได้ของฝากอ่ะ"
        },
        
        // วันที่ 4
        {   
            "เมื่อคุณมาถึงพบว่า Venti กำลังหลับอยู่",
            "ตอนนั้นคุณเหลือบไปเห็นรูปภาพที่วางอยู่ใกล้ๆหน้าของเวนติ",
            "Venti :วันพรุ่งนี้เดี่ยวเล่าเรื่องราว เกี่ยวกับภาพนั้นให้ฟัง"
        },
        
        // วันที่ 5
        {   
            "วันนี้คุณได้มาหาเวนติเพื่อนั่งคุยเล่นปกติ",
            "Venti :ฉันจะเล่าให้เธอฟังเกี่ยวกับภาพนั้น แต่เล่าปกติไม่สนุกให้ทายล่ะกัน-w-",
            "Venti :ซึ่งจริงๆในภาพนั้น ก็มีชั้นที่เป็วิญญาณธาตุลมตัวน้อยกับเพื่อนสนิทของข้า"
        },
        
        // วันที่ 6
        {   
            "วันนี้ Venti หน้าตาดูเศร้าหมอง",
            "Venti :คุณผู้คุ้มมมมมมม............................",
            "ก่อนที่คุณจะจากไปคุณได้บอกกับ Venti "
        },
        
        // วันที่ 7
        {   
            "วันตัดสินก็มาถึง",
            "Venti :วันสุดท้ายแล้วสิน่ะ",
            "คุณได้จากลา Venti เป็นรอบสุดท้าย"
        }
    };

    userTalk = {
        // วันที่ 1
        {
            "คุณ : สวัสดี! เธอชื่ออะไรหรอ",
            "คุณ : เคยเจอกันมาก่อนไหม",
            "คุณ : ยินดีที่ได้อยู่จักอีกรอบน่ะ"
        },
        
        // วันที่ 2
        {
            "คุณ : สงสัยอย่างหนึ่ง ทำไมถึงมาอยู่ในคุกนี้ได้ล่ะ",
            "Venti :แถมบอกว่ามีเหล้าให้ในคุกแค่นั้นก็เพียงพอแล้ว-3-",
            "คุณ : เธอนี้แปลกดีเหมือนกันไว้ชวนไปบางขวานน่ะ"
        },
        
        // วันที่ 3
        {
            "ทำไมมีกลิ่นเหล้าแปลกๆแถวนี้",
            "คุณ : นี่เธอแอบไปดื่มเหล้ามาใช่ไหม",
            "คุณ : ถ้าว่างเดี่ยวซื้อของฝากมาให้เจอกัน",
        },
        
        // วันที่ 4
        {   
            "Zzzzzzzzz",
            "คุณพยายามเข้าไปดูใกล้ ทันใดนั้น Venti ก็ตื่นขึ้นพร้อมกับสีหน้าที่ตกใจแล้วถามว่า",
            "แต่ดูยังไง Venti เหมือนจะมีอะไรจะบอกสักอย่างเลยแฮะ"
        },
        
        // วันที่ 5
        {   
            "คุณ : ฉันมาแล้วจร้า",
            "คุณ : จัดมาดิ",
            "Venti :แต่นั้นก็เป็นความทรงจำที่ดีน่ะ(Venti ยิ้มให้คุณก่อนที่คุณจะกลับไปนอน)"
        },
        
        // วันที่ 6
        {
            "ตอนคุณมาถึงหน้าห้อง Venti เธอได้เปลี่ยนสีหน้าเป็นดีใจอย่างเห็นได้ชัด",
            "คุณ : ทำไมวันนี้เธอดูเศร้าจังก่อนที่ฉันจะมา",
            "คุณ : จงเชื่อในลิขิตของสวรรค์"
        },
        
        // วันที่ 7
        {   
            "คุณได้เดินไปหา Venti อีกครั้ง",
            "คุณ : เธอยังมีสิ่งที่อยากทำอยู่ไหม",
            "ในใจคุณคิด เทพลมน่ะหรอ รอดูเลย"
        }
    };

    ventiQuestions = {
        // วันที่ 1
        {   
            "Venti :เธอลองเดาซิว่าเจอกันครั้งแรกที่ไหน",
            "Venti :ทายซิ เครื่องเล่นดนตรีเราคืออะไรล่ะ",
            "Venti :งั้นหรอเธอรู้จักเพื่อนฉันไหม รู้ไหมเข้าชื่ออะไร"
        },
        
        // วันที่ 2
        {   "Venti :ว่าแต่นายเนี่ยถามชื่อฉันเมื่อวาน แล้วนายชื่อว่าอะไร",
            "Venti :จะชื่ออะไรก็ขอเรียกว่าผู้คุมก็แล้วกัน ทำไมนายถึงมาเป็นผู้คุมล่ะ",
            "Venti :อืม....งั้นชอบกินเหล้าไหมล่ะ"
        },
        
        // วันที่ 3
        { 
            "Venti :งั้นในทายซิว่าได้เหล้ามาจากไหน",
            "Venti :งั้นถามนายบ้างล่ะชอบตัวละครแบบไหน",
            "Venti :นายนี่ไม่เบาเลยน่ะ นายมีแฟนยัง"
        },
        
        // วันที่ 4
        {
            "Venti :นายมาตอนไหนเนี่ย",
            "คุณสังเกตเห็นหน้าของ Venti ดูแดง คุณเลยถาม ",
            "Venti :ถ้ามาคราวหน้าคราวหลังก็บอกด้วยเซ่"
        },
        
        // วันที่ 5
        {   
            "Venti :ร่างในปัจจุบันที่นายเห็นอยู่ตรงหน้าคล้ายกับใคร",
            "Venti :ต่อไป ชื่อจริ่งของฉันชื่ออะไร",
            "Venti :คำถามสุดท้าย เราเป็นเพศอะไร"
        },
        
        // วันที่ 6
        {   
            "Venti กลับไปเป็นหน้าเศร้าหมองอีกครั้ง",
            "Venti :ไม่ใช่เรื่องอะไรทั้งนั้นแหละ แค่คิดว่าพรุ่งนี้คงเป็นวันสุดท้ายแล้วสิน่ะ",
            "Venti :ถ้าเราโดนพิพากษา ประหารชีวิตเธอจะทำยังไง"
        },
        
        // วันที่ 7
        {   
            "Venti :ฉันขอให้ทำอะไรเพื่อฉันหน่อยก่อนจากไปไหม",
            "Venti :และก่อนที่จากลา นายชอบฉันไหม",
            "Venti :ไม่ว่ายังไงก็ขอบคุณน่ะที่ดูแลฉันมาตั้ง 7 วันน่ะ"
        }
    };

    userAnswers = {
        // วันที่ 1
        {
            // คำถามที่ 1
            {
                "Mondstadt", 
                "Liyue Harbor", 
                "Inazuma"
            },

            {
                "gitar", 
                "piano", 
                "Lyre"
            },

            {
                "Barbatos", 
                "Decarabian", 
                "Furina"
            }

        },

        // วันที่ 2
        {
            {
                "Lumine", 
                "Aether", 
                "ฉันไม่บอกหรอก"
            },

            {
                "Neuvillette สั่งมาน่ะ", 
                "ชั้นอยากมาเจอเธอน่ะสิ", 
                "ฉันเป็นมนุษย์เงินเดือน"
            },

            {
                "ไม่อ่ะ", 
                "ถ้าฟรีก็เอา", 
                "ชอบมาเลย"
            }
        },

        // วันที่ 3
        {
            {
                "Jean", 
                "Klee", 
                "Diluc"
            },

            {
                "หล่อเท่ห์ เห็นแล้วใจเกเร", 
                "สวย เบิ้มๆคือลือน่ะ", 
                "น่ารัก ขี้เล่น มีเสน่ห์"
            },

            {
                "มีแล้ว ว้ายเธอไม่มี", 
                "ยังไม่มีเลย T-T", 
                "มีแค่คนคุยอะ",
            }
        },

        // วันที่ 4
        {
            {
                "มาปลุกไง", 
                "มาดูรูปที่วางอยู่ใกล้ๆหน้าเธอไง", 
                "อยากมาดูหน้าเธอไง"
            },
            
            {
                "เป็นไข้หรอ", 
                "อุ้ย เขินหรอ", 
                "เหล้าขึ้นหน้าแน่ๆ 555"
            },

            {
                "ขอโทดๆ", 
                "ราวหน้าจะมาลักหลับน่ะ", 
                "ไม่รู้ๆๆๆๆๆ"
            }   
        },

        // วันที่ 5
        {
            {
                "Vennessa วีรชนผู้ยิ่งใหญ่", 
                "เทพอสูรแห่งพายุ Decarabian", 
                "Florentino มหาเทพแห่งการร่ายรำ"
            },
            
            {
                "Annette สาวน้อยเวทลม", 
                "Barbatos แห่งเทพลม", 
                "Venti เทพขี้เมา"
            },

            {
                "ชาย", 
                "หญิง", 
                "ไม่มีเพศ แค่น่ารักก็พอแล้วป่ะ"
            }
        },

        // วันที่ 6
        {
            {
                "มีอะไรก็เล่าให้ฟังก็ได้น่ะ", 
                "หิวเหล้าหรอ", 
                "หมายถึงเรื่องรูปวันก่อนหรอ"
            },
            
            {
                "...............", 
                "ช่างเป็นเวลาอันแสนสั้นที่ได้ใช้รวมกับเธอ", 
                "ฉันก็เศร้าเหมือนกันที่พรุ่งนี้เราจะอยู่ด้วยกัน"
            },

            {
                "ฉันจะเป็นคนขัดความการพิพากษาเอง", 
                "เราจะหนีไปด้วนกัน", 
                "มันเป็นกฏของสวรรค์ที่มิอาจหลีกเลี่ยงได้"
            }
        },

        // วันที่ 7
        {
            {
                "เอาเหล้าที่แพงที่สุดให้", 
                "ฉันจะเก็บรูปไว้ในความทรงจำนี้เอง", 
                "...................."
            },
            
            {
                "ชอบสิ", 
                "ไม่ชอบ แต่รักที่สุดเลย", 
                "ไม่อ่ะ"
            },

            {
                "ด้วยความยินดี", 
                "ฉันจะไปคุยกับผู่พิพากษา", 
                "หลบหนี"
            }
        }

    };
    ventiAction = {
        // วันแรก
        {
            {"Venti :นายจำได้ด้วยหรอเนี่ยเก่งจัง งั้น","Venti :นี่นายจำสลับกับเพื่อนฉันหรอ","Venti :ฉันไม่ได้อยู่ inazuma สักหน่อย"},
            {"Venti :อะไรคือ gitar -_-","Venti :อะไรคือ  piano  ชื่อแปลกจัง","Venti :ผู้คุมนี้อยู่จักเราด้วยแฮะ"},
            {"Venti :555 อันนี้เป็นนามแฝงของฉันเอง", "Venti :ใช่แล้ว หมอนั้นเป็นมังกรวายุที่อยู่กับฉัน", "Venti :เทพน้ำหรอ แค่รู้จักแต่ไม่สนิทมากอ่ะ"}
        },
        
        // วันที่สอง
        {
            {"Venti :เป็นชื่อที่น่ารักจังน่ะ", "Venti :เป็นชื่อที่เท่ห์ดี", "Venti :จองหองจัง-^-"},
            {"Venti :คงเป็นเควสหลักสิน่ะ", "หน้าของ Venti  แดงขึ้นมาทันที","Venti :Mora ขาดหรอช่วงนี้ ช่างเถอะ"},
            {"Venti :ลองหัดดื่มเหล้าสิ 555", "Venti :ได้ซิเดี่ยวฉันเลี้ยงเอง", "Venti :ใจตรงกันนิ"}
        },
        
        // วันที่สาม
        {
            {"Venti :เป็นไปไม่ได้ที่จะให้เหล้าฉัน", "Venti :คุกนี้น่าจะถล่มมามากกว่าน่ะ", "Venti :ช่ายแล้ว คนนี้แหละชงเก่งสุดเลย"},
            {"Venti :รสนิยมโครตแปลก", "Venti :นายนี่เหมือนผู้ชายปกติเลยนิ","Venti :งั้นหรอเนี่ยดีใจจัง"},
            {"Venti :หยอกแรงเหมือนกันน่ะเนี่ย","Venti :ฉันก็เหมือนกันน่ะ", "Venti :อืม....น่าสนใจ"}
        },
        
        // วันที่สี่
        {
            {"Venti :อ่อหรอ.................", "Venti :.............", "Venti :หาาาาาา............."},
            {"Venti :เปล่าหรอก...ฮึ่ม", "Venti :อย่ามากพูดบ้าๆ..ฮึ่ย", "Venti :สัสเอ้ย....555"},
            {"Venti :ไม่เป็นไร แต่ก็น่ะ", "Venti :โรคจิต แต่ก็....", "Venti  :ช่างเถอะ"}
        },
        
        // วันที่ห้า
        {
            {"Venti :ถูกแล้ว", "Venti :หมอนั้นเป็นมังกรน่ะ 555 ไม่ใชาหรอก", "Venti :ใครครับเนี่ย555"},
            {"Venti :ติดเกมหรอเนี่ย ไม่ใช่หรอ", "Venti :ถูกแล้วจร้า", "Venti :อันนั้นแค่สมที่ทุกคนคิดแบบนั้น"},
            {"Venti :ก็ใช่น่ะ แต่ไม่ถูกเสมอไป", "Venti :ฉันน่ารักขนาดนั้นเลยหรอ", "Venti  :อุ้ย...พูดมาก็ถูกต้อง(เขิน)"}
        },
        
        // วันที่หก
        {
            {"Venti :ก็น่ะ", "Venti :คิดว่าฉันเป็นขี้เหล้ามากหรือไงห่ะ", "Venti :ไม่ใช่หรอก"},
            {"Venti :..................","Venti :ฉันก็คิดอยู่เหมือนกัน", "หน้าของ Venti กลับไปเศร้าและถามว่า"},
            {"Venti :งั้นหรอฝากด้วยน่ะ","Venti :พูดจริงอ่ะ", "Venti :งั้นสิน่ะ"}
        },
        
        // วันที่เจ็ด
        {
            {"Venti :นั้นคงเป็นความทรงจำที่ดีที่จได้ดื่มด้วยกัน", "Venti :ขอบใจน่ะที่นายยังเก็บชั้นในความทรงจำ", "Venti :อย่าเงียบซิฉันก็เศร้าน่ะ"},
            {"Venti :ฉันก็ชอบนายน่ะ", "Venti ได้ดึงคุณเข้าไปจูบกะทันหันก็ที่จะพูดออก", "Venti :.............................."},
            {"Venti :เช่นกัน","คุณได้ ending เคลียร์ใจ", "คุณได้ ending  escape"}
        }
    };
    actionRelation = {
        // วันแรก
        {
            {5, 0, 0},
            {0, 0, 5},
            {2, 5, 2}
        },
        // วันที่สอง
        {
            {0, 0, 5},
            {5, 5, 4},
            {-2, 0, 5}
        },
        // วันที่สาม
        {
            {0, -2, 5},
            {0, 0, 5},
            {-5, 5, 2}
        },
        // วันที่สี่
        {
            {2, 3, 5},
            {3, 5, -5},
            {5, -5, 2}
        },
        // วันที่ห้า
        {
            {5, 0, 0},
            {0, 5, 3},
            {2, 2, 5}
        },
        // วันที่หก
        {
            {5, -5, 4},
            {0, 5, 4},
            {5, 5, 3}
        },
        // วันที่เจ็ด
        {
            {3, 5, 1},
            {3, 5, 0},
            {3, 200, 500}
        }
    };
}
