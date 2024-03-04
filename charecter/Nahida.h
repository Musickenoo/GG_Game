#pragma once

#include "../initGame.h"

class Nahida{
    vector<string> endingScreenFile;
public:
    Nahida();
    vector<string> Ending;
    vector<Texture> endScreen;
    vector<vector<string>> NahidaTalk, userTalk, NahidaQuestions;
    vector<vector<vector<string>>> userAnswers, NahidaAction;
    vector<vector<vector<int>>> actionRelation;
    vector<vector<vector<Texture>>> ActionImage;
    vector<vector<Texture>>  NahidaActionImageTalk, NahidaQusImageTalk;
    Texture N1;
    Texture N2;
    Texture N3;
    Texture N4; 
    Texture N5;
    Texture N6;
    Texture N7;
    Texture N8;
    Texture N9;
    
};


Nahida::Nahida(){
    
    // ภาพตัวแทนตัวละคร Nahida
    N1.loadFromFile("../GG_Game/charecter/Nahida/Nahidaangry.PNG");
    N2.loadFromFile("../GG_Game/charecter/Nahida/Nahidaannoy.PNG");
    N3.loadFromFile("../GG_Game/charecter/Nahida/Nahidabadmood.PNG");
    N4.loadFromFile("../GG_Game/charecter/Nahida/Nahidaconfuse.PNG");
    N5.loadFromFile("../GG_Game/charecter/Nahida/Nahidacry.PNG");
    N6.loadFromFile("../GG_Game/charecter/Nahida/Nahidanormal.PNG");
    N7.loadFromFile("../GG_Game/charecter/Nahida/Nahidasleep.PNG");
    N8.loadFromFile("../GG_Game/charecter/Nahida/Nahidasmile.PNG");
    N9.loadFromFile("../GG_Game/charecter/Nahida/Nahidaverysmile.PNG");


    endingScreenFile = {"../GG_Game/image/background/Nahidafinal1.png", 
                        "../GG_Game/image/background/Nahidafinal2.png",
                        "../GG_Game/image/background/Nahidafinal3.png"
                    };

    endScreen.resize(endingScreenFile.size());
    
    for (i = 0; i < 3; i++){
        endScreen[i].loadFromFile(endingScreenFile[i]);
    }    
   
    NahidaTalk = {

        // วันที่ 1
        {
            ".............................",
            "nahida : สวัสดีจ้า ฉันชื่อ nahida ",
            "nahida :ได้เลย! ยินดีที่ได้รู้จักนะ"
        },

        // วันที่ 2
        {
            "nahida :อรุณสวัสดิ์ เจอกันอีกแล้วนะ",
            "nahida :เธอมีความฝันว่าอยากจะไปเที่ยวที่ไหนบ้างไหม?",
            "nahida :ฉันอยากไปเที่ยวต่างประเทศบ้างน่ะ "
        },

        // วันที่ 3
        {
            "nahida :มาเช้าจัง...",
            "nahida :ขอโทษนะพอดีว่ามีปัญหานิดหน่อย",
            "nahida :ฉันไม่โอเค วันนี้ฉันต้องไปรับการพิพากษาน่ะสิTT"
        },

        // วันที่ 4
        {
            "เมื่อคุณมาถึงพบว่า nahida กำลังร้องไห้เพราะเธอถูกตัดสินประหารชีวิต",
            "nahida : สวัสดี มาแล้วหรอ?",
            "nahida : ประเทศที่ฉันอยากไปน่ะคือประเทศออสเตรเลีย"
        },

        // วันที่ 5
        {
            "วันนี้คุณได้มาเจอกันเพื่อคุยกันตามปกติ",
            "nahida : ถ้าให้ฉันทาย ฉันขอทายว่าประเทศฝรั่งเศส",
            "nahida :ฉันเก่งยังไงล่ะ"
        },

        // วันที่ 6
        {
            "วันนี้ nahida หน้าตาดูเศร้าหมอง",
            "nahida : เมื่อคืนฉันไม่อยากนอนเลย",
            "nahida : ฉันนึกว่าเธอจะไม่มาหาฉันแล้ว"
        },

        // วันที่ 7
        {
            "วันนี้เป็นวันที่ nahida โดนประหาร",
            "nahida : วันนี้เป็นวันสุดท้ายที่เธอจะได้เจอฉันแล้วนะ",
            "nahida : ยินดีที่ได้รู้จักนะ"
        }
    };
    // NahidaActionImageTalk = {
    //     // วันที่ 1
    //     {
    //        S6,
    //        S4,
    //        S4
    //     },

    //     // วันที่ 2
    //     {
    //         S5,
    //         S5,
    //         S6
    //     },

    //     // วันที่ 3
    //     {
    //         S4,
    //         S5,
    //         S4
    //     },

    //     // วันที่ 4
    //     {
    //         S5,
    //         S4,
    //         S6
    //     },

    //     // วันที่ 5
    //     {
    //         S2,
    //         S1,
    //         S5
    //     },

    //     // วันที่ 6
    //     {
    //         S2,
    //         S6,
    //         S4
    //     },

    //     // วันที่ 7
    //     {
    //         S2,
    //         S4,
    //         S4
    //     }
    // };
    userTalk = {
        // วันที่ 1
        {
            "คุณ : สวัสดีจ้า! เธอมีชื่อว่าอะไร",
            "คุณ : ต่อจากนี้ฉันจะเรียกเธอว่า nahida นะ",
            "คุณ : ยินดีที่ได้รู้จักเช่นกันนะ"
        },

        // วันที่ 2
        {
            "คุณ : อรุณสวัสดิ์จ้า",
            "คุณ : ฉันมีความฝันว่าอยากไปเที่ยวทะเลน่ะ แล้วเธอล่ะ?",
            "คุณ : งั้นพรุ่งนี้มาเล่าประเทศที่เธออยากไปให้ฉันฟังนะ"
        },

        // วันที่ 3
        {
            "คุณ : ใช่! ฉันมารอเธอนานแล้วนะ",
            "คุณ : เธอโอเคใช่ไหม",
            "คุณ : ไม่เป็นไรนะ เธอต้องผ่านมันไปได้",
        },

        // วันที่ 4
        {
            "Zzzzzzzzz",
            "คุณไม่อยากให้ nahida ร้องไห้ คุณจึงชวนเธอคุย",
            "คุณ : มาแล้ว ไหนว่าจะเล่าประเทศที่อยากไปให้ฟังไง",
            "คุณ : น่าไปเหมือนกันนะ"
        },

        // วันที่ 5
        {
            "คุณ : เธออยากรู้มั้ยว่าประเทศที่ฉันอยากไปคือที่ไหน",
            "คุณ : ใช่เลย! เธอรู้ได้ยังไง",
            "คุณ : โอเคๆ เธอก็เก่งจริงๆนั่นแหล่ะ"
        },

        // วันที่ 6
        {
            "เมื่อคุณมาถึงหน้าห้อง nahida เธอได้เปลี่ยนสีหน้าเป็นดีใจอย่างเห็นได้ชัด",
            "คุณ : ทำไมล่ะ",
            "คุณ : ไม่เป็นไรนะ มันเป็นแค่ฝันร้าย"
        },

        // วันที่ 7
        {
            "คุณได้เดินไปคุยกับ nahida แบบจริงจัง",
            "คุณ : อื้ม ฉันจะอยู่ข้างเธอเสมอนะ",
            "คุณได้จากลากับ mahida เป็นครั้งสุดท้าย"
        }
    };

    NahidaQuestions = {
        // วันที่ 1
        {   
            "Nahida : // ก้มหน้า ",
            "Nahida : ไอ้นี่คือใครวะเนี่ย (พูดในใจ)",
            "Nahida : คือ...เรา..."
        },
        
        // วันที่ 2
        {   "Nahida : คุณใจดีจัง ",
            "Nahida :พรุ่งนี้ฉันได้รับพิพากษาแล้วสินะ",
            "Nahida ://ซากุระหน้ามืดคล้ายจะเป็นลม คุณเดินเข้าไปใกล้ซากุระ จากนั้นซากุระถามคุณว่า\n คุณจะพาฉันไปไหน "
        },
        
        // วันที่ 3
        { 
            "Nahida :โอ๊ยย //ซากุะร้องเสียงดัง หลังจากที่คุณดึงแขนซากุระขึ้นมา ",
            "Nahida :เห้อ น่าเบื่อจริงๆเลย ",
            "//ตอนนี้คุณกำลังพาซากุระกลับไปที่ห้องขัง คุณเห็นแสงดวงอาทิตย์ตอนเย็นพาดผ่านริมหน้าต่าง\n แสงตกกระทบกับแววตาของซากุระ คุณเลือกที่จะ..."
        },
        
        // วันที่ 4
        {
            "//ซากุระสบตากับคุณ และคุณก็สบตากับซากุระ ",
            "Nahida :คุณอยากรู้ความจริงไหนว่าทำไมฉันถึงมาอยู่ที่นี่",
            "Nahida :วันนี้อากาศดีจัง ฉันอยากไปเดินเล่น"
        },
        
        // วันที่ 5
        {   
            "//คุณมองรอบๆ เพื่อให้แน่ใจว่าไม่มีคนอื่น เพราะคุณตั้งใจที่จะ ...",
            "Nahida : ฉันหิว ",
            "Nahida :ฉันหวังว่าเราจะได้เจอกันในอีกซักวัน"
        },
        
        // วันที่ 6
        {   

            "Nahida : คุณรู้ได้ยังไงว่าฉันชอบดอกคามิเลียสีขาว ",
            "Nahida : แต่ก็...ขอบคุณนะ... แค่คุณอยู่ตรงนี้ฉันก็มีความสุขมากๆแล้ว ",
            "Nahida : ทำไม คุณถึงใจดีกับฉันขนาดนี้ ... "
                 
    
        },
        
        // วันที่ 7
        {   
            "Nahida :คุณมีอะไรจะบอกฉัน ก่อนที่เราจะจากกันไหม",
            "Nahida :คุณรักฉันไหม",
            "Nahida :นี่!!! คุณกำลังจะทำอะไรน่ะ"
        },
    };

    //  NahidaQusImageTalk = {
    //     // วันที่ 1
    //     {
    //         S5,
    //         S1,
    //         S2
    //     },

    //     // วันที่ 2
    //     {   S3,
    //         S4,
    //         S1
    //     },

    //     // วันที่ 3
    //     {
    //         S2,
    //         S1,
    //         S6
    //     },

    //     // วันที่ 4
    //     {
    //         S5,
    //         S6,
    //         S6
    //     },

    //     // วันที่ 5
    //     {
    //         S6,
    //         S2,
    //         S6
    //     },

    //     // วันที่ 6
    //     {
    //         S6,
    //         S6,
    //         S6
    //     },

    //     // วันที่ 7
    //     {
    //          S4,
    //          S3,
    //          S2
    //     }
    // };

    // NahidaQusImageTalk = {
    //     // วันที่ 1
    //     {
    //         V10,
    //         V16,
    //         V12
    //     },

    //     // วันที่ 2
    //     {   V12,
    //         V8,
    //         V12
    //     },

    //     // วันที่ 3
    //     {
    //         V7,
    //         V19,
    //         V7
    //     },

    //     // วันที่ 4
    //     {
    //         V13,
    //         V13,
    //         V21
    //     },

    //     // วันที่ 5
    //     {
    //         V2,
    //         V2,
    //         V22
    //     },

    //     // วันที่ 6
    //     {
    //         V16,
    //         V2,
    //         V22
    //     },

    //     // วันที่ 7
    //     {
    //          V2,
    //          V7,
    //          V22
    //     }
    // };

    userAnswers = {
        // วันที่ 1
        {
            // คำถามที่ 1
            {
                "กีต้าร์",
                "เปียโน",
                "กลอง"
            },

            {
                "ไม่บอกหรอก",
                "ฉันเรียนมาตั้งแต่เด็กน่ะสิ",
                "ฉันอยากเท่บ้าง"
            },

            {
                "//คุณคิดว่าเธอเล่นดนตรีแล้วมีเสน่ห์มาก",
                "//คุณคิดว่าเธอเล่นดนตรีแล้วไม่เก่งเลย",
                "//คุณคิดว่าเธอเล่นดนตรีแล้วเท่สุดๆ"
            }

        },

        // วันที่ 2
        {
            {
                "ฉันอยากไป opera house น่ะ",
                "ฉันอยากไปเจอจิงโจ้",
                "ฉันไม่บอกหรอก"
            },

            {
                "Levi",
                "Travis",
                "Luna"
            },

            {
                "Neuvillette สั่งให้ฉันมาเป็นน่ะสิ",
                "ฉันโดนบังคับให้มาเป็นน่ะ",
                "ฉันไม่รู้ว่าจะทำอะไรดี"
            }
        },

        // วันที่ 3
        {
            {
                "วันนี้เธออยากนอนพักผ่อนมั้ย",
                "ไปทำอะไรมาล่ะ",
                "//คุณหายามาให้ nahida"
            },

            {
                "เธอควรพักผ่อนเยอะๆนะ",
                "อดทนไปก่อนนะ เดี๋ยวก็หาย",
                "ฉันพาเธอไปหาหมอได้นะ"
            },

            {
                "ไม่เป็นไรเลย",
                "เธอก็ดูแลตัวเองดีๆ",
                "ก็เธอไม่สบายอยู่หนิ",
            }
        },

        // วันที่ 4
        {
            {
                "บอกแล้วว่าให้พักผ่อนเยอะๆ",
                "งั้นฉันก็ต้องพาเธอไปหาหมอแล้วล่ะ",
                "หรือจะให้ฉันลากเธอไปหาหมอ"
            },

            {
                "ทำไมล่ะ เธอต้องไปหาหมอนะ",
                "ฉันต้องให้หมอมาตรวจเธอแล้วแหละ",
                "เธอจะไปดีๆมั้ยหรือจะไปด้วยน้ำตา"
            },

            {
                "หมอไม่ฉีดยาเธอหรอก",
                "ไม่เห็นน่ากลัวเลย",
                "เธอโดนหมอฉีดยาแน่"
            }
        },

        // วันที่ 5
        {
            {
                "ฉันอยากไปเห็นหอไอเฟลน่ะ",
                "ฉันชอบน้ำหอมมากเลยนะ",
                "ฉันอยากลองกินขนมปังที่ฝรั่งเศสดู"
            },

            {
                "อยากอยู่นะ",
                "อยากมากเลยล่ะ",
                "ไม่เห็นจะอยากไปเลย"
            },

            {
                "อยากสิ",
                "ไม่อยากไปหรอก",
                "ทำไมจะไม่อยากกันล่ะ"
            }
        },

        // วันที่ 6
        {
            {
                "ฉันกลัวน่ะสิ",
                "ฉันไม่ได้ทำหน้าบึ้งตึงสักหน่อย",
                "ฉันเศร้าอยู่นะTT"
            },

            {
                "ฉันไม่มาหาเธอแน่นอน",
                "ฉันต้องมาหาเธออยู่แล้ว",
                "ฉันมาหาเธอแน่นอน ฉันอยู่ข้างเธอเสมอ"
            },

            {
                "แน่นอนอยู่แล้ว",
                "ฉันจะอยู่ข้างเธอตลอดไปเลย",
                "ไม่มีทางหรอก"
            }
        },

        // วันที่ 7
        {
            {
                "ฉันอยากจะบอกว่าฉันชอบเธอ",
                "ไม่มีนะ ทำไมหรอ",
                "ฉันไม่ได้ชอบเธอ"
            },

            {
                "เธอแน่ใจได้แล้วล่ะ",
                "ฉัน",
                "ไม่อ่ะ"
            },

            {
                "ไม่เป็นไรเลย เธอสำคัญสำหรับเราที่สุด",
                "ฉันอยู่ข้างเธอตลอดไปอยู่แล้ว",
                "หลบหนี"
            }
        }

    };
    NahidaAction = {
        // วันแรก
        {
            {"Nahida :ฉันรู้อยู่แล้วแหละน่า!!","Nahida : (;´༎ຶٹ༎ຶ`)","Nahida : ขอบคุณนะ "},
            {"Nahida :อือ ... ","Nahida :ฉันอยากกลับบ้านจัง ","Nahida : เขิน "},
            {"Nahida :ขอบคุณนะ", "Nahida :อยู่คุยกันก่อนสิ ", "Nahida : ฉันไม่ได้อยากพูดกับเธอหรอกนะ "}
        },
        
        // วันที่สอง
        {
            {"Nahida : ༼ ༎ຶ ෴ ༎ຶ༽ ม่ายน้าา าา าาาาา ", "Nahida : อะไรของเค้า ಠ╭╮ಠ  ", "Nahida : รับขนมพร้อมกับยิ้มให้  "},
            {"Nahida : ทำให้ได้อย่างที่พูดเถอะ ", "เธอจะรู้ไปทำไม ความลับน่ะ","Nahida : ฉันเคยกลัวด้วยหรอ หึหึ (จริงๆกลัวแต่ไม่พูด)"},
            {"Nahida : ฉันทำเวรกรรมอะไรไว้ถึงได้มาเจออิตานี่!", "Nahida : //ฮึ่มมม ช่วยฉันเพราะแบบนี้เองสินะ", "Nahida : //ซากุระเงียบ..."}
        },
        
        // วันที่สาม
        {
            {"Nahida : ก็ฉันขี้เกียจตัวเป็นขนน่ะสิ", "Nahida :  ฉันตัวหนักมากเดี๋ยวก็แขนหักหรอก ฮ่าๆ", "Nahida : เห้อ จะทำอะไรก็ทำเถอะ"},
            {"Nahida : เธอช่างรู้ใจฉันจริงๆ", "Nahida : อือ","Nahida :  ก็ฉันบอกว่าฉันเบื่อ เธอจะทำไมห๊าา"},
            {"Nahida : ซากุระทำหน้าเหมือนลูกแมวตัวน้อยที่อยู่ในอ้อมกอดของคุณ","Nahida : ซากุระหอมแก้มคุณ", "Nahida : คุณและซากุระได้เดินกลับห้องขังท่ามกลางแสงแดดที่อบอุ่น"}
        },
        
        // วันที่สี่
        {
            {"ตอนนี้ซากุระเหมือนกับลูกหมาตัวเล็กๆในอ้อมกอดของคุณ", "ซากุระจูบคุณกลับด้วยความเร่าร้อน", "ฉันอยากหยุดช่วงเวลาตอนนี้ที่ได้อยู่กับเธอเอาไว้"},
            {"Nahida :เพราะฉันโดนใส่ร้ายว่าเป็นฆาตกร ทั้งๆที่ฉันยังไม่ได้ทำอะไรผิดเลย\n แต่คนอื่นกลับเชื่อว่าฉันฆ่าคน ", "Nahida :อย่าปากแข็งได้ไหม ถ้าอยากรู้ ก็บอกว่าอยากรู้สิ", "Nahida :เพราะฉันโดนใส่ร้ายว่าเป็นฆาตกร ทั้งๆที่ฉันยังไม่ได้ทำอะไรผิดเลย \nแต่คนอื่นกลับเชื่อว่าฉันฆ่าคน"},
            {"Nahida :เย้ ขอบคุณนะ (ซากุระทำตัวเหมือนหมาโกลเด้นที่ตี่กำลังตื่นเต้นที่จะได้ออกไปข้างนอก)", "Nahida :ซากุระทำหน้าหงอย", "Nahida  : ได้สิ คุณสัญญานะ..."}
        },
        
        // วันที่ห้า
        {
            {"Nahida :คุณอย่ากอดฉันแรงนักสิฉันหายใจไม่ออก", "Nahida :ฉันจะไม่หนีไปถ้าไม่มีคุณ", "Nahida :คุณจะเข้ามาทำไม เดี๋ยวคนอื่นก็เข้าใจผิดหรอก"},
            {"Nahida :เอ่อ...", "Nahida : ขอบคุณน้าเจ้าทาส", "Nahida : ก็บอกแล้วฉันน่ะเด็กดี ดื้อเป็นที่ไหนล่ะ"},
            {"Nahida :งื้ออ", "Nahida :ฮ่าๆ เธอพูดอะไรแบบนี้แล้วฉันจั๊กจี้หัวใจสุดๆเลย", "Nahida  :อุ้ย...พูดมาก็ถูกต้อง(เขิน)"}
        },
        
        // วันที่หก
        {
            {"Nahida : เธอมันโครตโรแมนติคสุดๆเลย ", "Nahida:เลิกเบียวสักวันแล้วมันจะตายไหม", "Nahida :ขอบคุณนะ"},
            {"Nahida : งั้นคุณต้องทำอะไรสักอย่างแล้วแหละนะ หึหึ","Nahida ://ซากุระเข้ามากอดคุณพร้อมกับทำตัวเหมือนลูกหมา", "ซากุระ : //ฉันจะรอดูละกัน หึหึ"},
            {"Nahida : ฉันเชื่อ ตั้งแต่ที่ฉันได้มาเจอกับคุณ ","Nahida :  เห้อออ - - ", "Nahida : จริงๆฉันก็พอจะรู้ หึหึ"}
        },
        
        // วันที่เจ็ด
        {
            {"Nahida : งั้นเราหนีไปด้วยกันเถอะนะ", "Nahida : ฉันไม่อยากไปคนเดียว... ", "Nahida : น่าสนใจ..."},
            {"Nahida : นั่นเป็นเพราะพรหมลิขิตสินะ","Nahida : เลิกปากแข็งสักที ชั้นจะโดนประหารอยู่แล้วนะ","Nahida : เธออย่าพูดแบบนี้สิ ฉันก็เศร้าเหมือนกันนะ"},
            {"Nahida :ซากุระได้เอาหัวมาซบกับไหล่กว้างๆของคุณ","ซากุระรู้สึกอบอุ่นและมีความสุข", "ซากุระกำลังตกใจกับการกระทำของคุณ"}
        }
    };

    // ActionImage = {
    //     // วันแรก
    //     {
    //         {S1,S5,S6},
    //         {S6,S4,S3},
    //         {S3,S4,S1}
    //     },

    //     // วันที่สอง
    //     {
    //         {S4,S1,S6},
    //         {S1,S1,S1},
    //         {S2,S2,S2}
    //     },

    //     // วันที่สาม
    //     {
    //         {S5,S2,S1},
    //         {S6,S2,S1},
    //         {S3,S3,S6}
    //     },

    //     // วันที่สี่
    //     {
    //         {S3,S3,S3},
    //         {S4,S1,S6},
    //         {S3,S2,S4}
    //     },

    //     // วันที่ห้า
    //     {
    //         {S3,S4,S5},
    //         {S2,S6,S1},
    //         {S3,S1,S1}
    //     },

    //     // วันที่หก
    //     {
    //         {S3,S1,S6},
    //         {S6,S3,S2},
    //         {S3,S2,S2}
    //     },

    //     // วันที่เจ็ด
    //     {
    //         {S4,S2,S6},
    //         {S3,S1,S2},
    //         {S3,S3,S3}
    //     }
    // };
    
    // actionRelation = {
    //     // วันแรก
    //     {
    //         {4, 4, 3},
    //         {1, 1, 0},
    //         {2, 0, 0}
    //     },
    //     // วันที่สอง
    //     {
    //         {4, 4, 4},
    //         {0, 0, 0},
    //         {1, 2, 1}
    //     },
    //     // วันที่สาม
    //     {
    //         {1, 2, 2},
    //         {0, 0, 0},
    //         {11, 11, 2}
    //     },
    //     // วันที่สี่
    //     {
    //         {4, 4, 5},
    //         {0, 0, 0},
    //         {5, -5, -5}
    //     },
    //     // วันที่ห้า
    //     {
    //         {5, 3, 4},
    //         {-3, 5, 5},
    //         {-3, 4, 3}
    //     },
    //     // วันที่หก
    //     {
    //         {5, 0, 4},
    //         {4, 3, 4},
    //         {5, -3, 3}
    //     },
    //     // วันที่เจ็ด
    //     {
    //         {3, 5, 3},
    //         {3, -4, -3},
    //         {30, 50, -50}
    //     }
    // };

    Ending = {
        "แย่  คุณหลอกซากุระไปฆ่า เพราะแท้จริงแล้ว คุณเป็นฆาตกรต่อเนื่องคนนั้น \nแต่คุณจัดฉากทั้งหมดให้ซากุระเป็นคนร้าย",
        "ดี คุณได้ไปคุยกับผู้คุมทำให้ซากุระได้รับพิพากษาโทษใหม่อีกครั้ง",
        "ดีมาก คุณพาซากุระหนีไปกับคุณและไปใช้ชีวิตอยู่ด้วยกันอย่างมีความสุข\nในที่ที่จะไม่มีใครหาคุณเจอ"
    };


}
