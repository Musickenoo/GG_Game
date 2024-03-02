#pragma once

#include "../initGame.h"

class Sakura{
    public:
        Sakura();
        vector<vector<string>> SakuraTalk, userTalk, SakuraQuestions;
        vector<vector<vector<string>>> userAnswers, SakuraAction;
        vector<vector<vector<int>>> actionRelation;
        Texture waifuface1Texture;
        Texture waifuface2Texture;
        Texture waifuface3Texture;
        Texture waifuface4Texture;
        Texture waifuface5Texture;
        Texture waifuface6Texture;
        Sprite waifu2;
};


Sakura::Sakura(){
    
    // ภาพตัวแทนตัวละคร Venti
    waifuface1Texture.loadFromFile("../GG_Game/image/test_charec/IMG_0273.PNG");
    waifuface2Texture.loadFromFile("../GG_Game/image/test_charec/2a_yes.png");
    waifuface3Texture.loadFromFile("../GG_Game/image/test_charec/3a_sadd.png");
    waifuface4Texture.loadFromFile("../GG_Game/image/test_charec/4a_cry.png");
    waifuface5Texture.loadFromFile("../GG_Game/image/test_charec/5a_angry.png");
    waifuface6Texture.loadFromFile("../GG_Game/image/test_charec/6a_happyy.png");

    SakuraTalk = {
        // วันที่ 1
        {   
            ".............................",
            "Sakura : ฮึก (*′☉.̫☉) !!! ",
            "Sakura : เลิกยุ่งกับฉันทีเถอะ (,,Ծ‸Ծ,, ) "
        },
        
        // วันที่ 2
        {   
            "Sakura : //ซากุระพึ่งตื่นนอนแบบงัวเงีย หลังจากลืมตรขึ้นมาก็เจอกับคุณ",
            "Sakura : อืม ฉันตื่นเพราะคุณนั่นแหละ คุณมาที่นี่ทำไม",
            "Sakura : ขอบคุณนะ ..."
        },
        
        // วันที่ 3
        {   
            "Sakura :วันนี้ฉันต้องไปรับการพิพากษาแล้วสินะ.",
            "Sakura :( ◜◒◝ )♡ ง่วงจังง",
            "Sakura : ฉันจะโดนประหารไหม (ซากุระทำหน้ากังวล)"
        },
        
        // วันที่ 4
        {   
            "//เมื่อคุณมาถึงพบว่า Sakura กำลังหลับอยู่",
            "//ซากุระหันหน้าขึ้นมามองคุณด้วยสายตาที่เหมือนกับลูกหมาที่กำลังร้องไห้",
            "Sakura :วันพรุ่งนี้ คุณจะยังมาหาฉันไหม"
        },
        
        // วันที่ 5
        {   
            "Sakura : //ซากุระตั้งตารอเพื่อที่จะได้พบคุณ",
            "Sakura : ฉันสบายดี ไม่มีคุณฉันก็ยังหายใจได้เหมือนเดิม",
            "ครอกกก // เสียงนอนกรนของซากุระ "
        },
        
        // วันที่ 6
        {   
            "//ตอนนี้ดึกมากแล้ว แต่ซากุระยังรอคุณมาหา",
            "Sakura : คุณไปทำอะไรมา ",  
            "Sakura : ฉันไม่อยากให้ถึงวันพรุ่งนี้เลย"
        },
        
        // วันที่ 7
        {   
            "(ในที่สุดก็ถึงวันประหารซากุระ)",
            "Sakura : วันนี้คือวันสุดท้ายของฉันแล้ว",
            "ซากุระร้องไห้"
        }
    };

    userTalk = {
        // วันที่ 1
        {
            "คุณ : เงยหน้าขึ้นมา",
            "คุณ : จะร้องไห้ทำไม",
            "คุณ : ไว้เจอกันนะ หึหึ "
        },

    
        
        // วันที่ 2
        {
            "คุณ : ตื่นแล้วหรอ ",
            "คุณ : ฉันแค่เป็นห่วงเธอ",
            "คุณ : เธอไม่ต้องขอบคุณฉันหรอก ยังไงฉันก็ต้องดูแลเธออยู่แล้ว"
        },
        
        // วันที่ 3
        {
            "คุณ : เธอพร้อมหรือยัง ไม่ต้องกลัวนะ",
            "คุณ : เธอจะเดินไปดีๆ หรือจะให้ฉันลากเธอไป",
            "คุณ : ไม่ต้องห่วงนะ ",
        },
        
        // วันที่ 4
        {   
            "//คุณเดินเข้าไปใกล้ๆซากุระ คุณเห็นซากุระร้องไห้เพราะซากุระจะถูกประหารในอีก3วันข้างหน้า",
            "คุณรู้สึกว่า คุณอยากเข้าไปกุมมือของซากุระไว้เพราะดูเหมือนเขาจะกลัวมาก ",
            "ฉันอยากมาเจอเธอทุกวันเลย"
        },
        
        // วันที่ 5
        {   
            "คุณ : วันนี้เป็นยังไงบ้าง ขอโทษที่ฉันมาช้า",
            "คุณ : ทำไมต้องปากแข็งด้วย หึหึ",
            "//คุณมองซากุระแล้วยิ้ม พร้อมกับเดินจากไป"
        },
        
        // วันที่ 6
        {
            "คุณ : ฉันขอโทษที่มาช้า วันนี้ฉันมีสิ่งที่ต้องทำเยอะเลย",
            "คุณ : ฉันมีบางอย่างจะให้เธอ ฉันไม่อยากให้เธอเศร้า (คุณยื่นดอกคามิเลียสีขาวให้กับซากุระ) ",
            "คุณ : อะไรจะเกิดมันก็ต้องเกิดแหละ พักผ่อนเถอะ "
        },
        
        // วันที่ 7
        {   
            "ฉันจะอยู่ข้างๆเธอจนถึงวินาทีสุดท้าย",
            "คุณ : ชีวิตของเรา อะไรมันก็ไม่แน่นอนหรอกนะ ",
            "คุณเดินเข้าไปกอดซากุระ"
        }
    };

    SakuraQuestions = {
        // วันที่ 1
        {   
            "Sakura : // ก้มหน้า ",
            "Sakura : ไอ้นี่คือใครวะเนี่ย (พูดในใจ)",
            "Sakura : คือ...เรา..."
        },
        
        // วันที่ 2
        {   "Sakura : คุณใจดีจัง ",
            "Sakura :พรุ่งนี้ฉันได้รับพิพากษาแล้วสินะ",
            "Sakura ://ซากุระหน้ามืดคล้ายจะเป็นลม คุณเดินเข้าไปใกล้ซากุระ//จากนั้นซากุระถามคุณว่า /"คุณจะพาฉันไปไหน/" "
        },
        
        // วันที่ 3
        { 
            "Sakura :โอ๊ยย //ซากุะร้องเสียงดัง หลังจากที่คุณดึงแขนซากุระขึ้นมา ",
            "Sakura :เห้อ น่าเบื่อจริงๆเลย ",
            "//ตอนนี้คุณกำลังพาซากุระกลับไปที่ห้องขัง คุณเห็นแสงดวงอาทิตย์ตอนเย็นพาดผ่านริมหน้าต่าง แสงตกกระทบกับแววตาของซากุระ คุณเลือกที่จะ..."
        },
        
        // วันที่ 4
        {
            "//ซากุระสบตากับคุณ และคุณก็สบตากับซากุระ ",
            "Sakura :คุณอยากรู้ความจริงไหนว่าทำไมฉันถึงมาอยู่ที่นี่",
            "Sakura :วันนี้อากาศดีจัง ฉันอยากไปเดินเล่น"
        },
        
        // วันที่ 5
        {   
            "//คุณมองรอบๆ เพื่อให้แน่ใจว่าไม่มีคนอื่น เพราะคุณตั้งใจที่จะ ...,
            "Sakura : ฉันหิว ",
            "Sakura :ฉันหวังว่าเราจะได้เจอกันในอีกซักวัน"
        },
        
        // วันที่ 6
        {   

            "Sakura : คุณรู้ได้ยังไงว่าฉันชอบดอกคามิเลียสีขาว ",
            "Sakura : แต่ก็...ขอบคุณนะ... แค่คุณอยู่ตรงนี้ฉันก็มีความสุขมากๆแล้ว ",
            "Sakura : ทำไม คุณถึงใจดีกับฉันขนาดนี้ ... ",
                 
    
        },
        
        // วันที่ 7
        {   
            "Sakura :คุณมีอะไรจะบอกฉัน ก่อนที่เราจะจากกันไหม",
            "Sakura :คุณรักฉันไหม",
            "Sakura :นี่!!! คุณกำลังจะทำอะไรน่ะ"
        }
    };

    userAnswers = {
        // วันที่ 1
        {
            // คำถามที่ 1
            {
                "ใจเย็นๆนะ ", 
                "สบตาฉันสิ", 
                "ไปแก้มัดให้มัน !!!"
            },

            {
                "ไม่ต้องกลัวฉันนะ...", 
                "เธอคิดอะไรอยู่", 
                "//มองหน้า ซากุระ "
            },

            {
                "ฉันจะอยู่ข้างๆเธอ -ω(´•ω•｀)♡ ", 
                "วันนี้พักผ่อนเถอะ", 
                "รีบพูดก่อนที่จะไม่ได้พูด หึหึ "
            }

        },

        // วันที่ 2              
        {
            {
                "//คุณเปิดประตูห้องขัง และจากนั้น คุณเดินเข้าไปใกล้ๆซากุระ", 
                "//คุณมองซากุระแล้วยิ้มให้", 
                "//คุณยื่นขนมให้กับซากุระ"
            },

            {
                "อืม ฉันจะคอยดูแลเธอเอง", 
                "เธอไปทำอะไรมา ถึงได้มาอยู่ที่นี่", 
                "ใช่แล้ว แต่ไม่ต้องกลัวหรอกนะ" 
            },

            {
                "อยู่เฉยๆเถอะ ", 
                "ไปหาหมอ ถ้าเธอตายฉันคงโดนหักเงินเดือนแน่ๆ", 
                "//คุณเลือกที่จะไม่ตอบอะไร และคุณอุ้มซากุระไปหาหมอ" 
            }
        },

        // วันที่ 3
        {
            {
                "ถ้าฉันไม่ทำแบบนี้เธอจะลุกขึ้นเองไหม !!", 
                "หรือเธอจะให้ฉันต้องอุ้มเธอไปห๊ะาา",
                "//คุณเลือกที่จะเงียบและแบกร่างบางพาดไหล่" 
            },

            {
                "ใจเย็นๆสิ เธอแค่หิว", 
                "อีกสักพักจะได้กลับแล้ว ฮึบๆ", 
                "แล้วเธอคิดว่าฉันไม่เบื่อบ้างหรอ"
            },

            {
                "ดึงซากุระเข้ามากอด", 
                "บังแสงแดดให้", 
                "คุณเลือกที่จะเก็บความรู้สึกเอาไว้เพราะคุณกลัวความผูกพันธ์", 
            }
        },

        // วันที่ 4
        {
            {
                "คุณกอดซากุระและลูบหัวซากุระ",
                "คุณมอบจูบที่แสนอบอุ่นให้กับซากุระ", 
                "คุณกุมมือเล็กๆซากุระ" 
            },
            
            {
                "ถ้าเธออยากเล่าให้ฉันฟัง ฉันพร้อมเสมอนะ", 
                "จริงๆฉันรู้อยู่แล้วน่ะ", 
                "ทำไม...???" 
            },

            {
                "งั้นเราไปเดินเล่นกันไหม", 
                "วันนี้ดึกแล้ว เธอกลับไปพักผ่อนเถอะ", 
                "แย่จัง วันนี้ฉันต้องไปแล้ว ไว้เราไปกันวันหลังนะ" 
            }   
        },

        // วันที่ 5
        {
            {
                "เข้าไปนอนกอดซากุระ", 
                "ปล่อยซากุระให้หนีไป", 
                "เข้าไปนั่งคุยกับซากุระในห้องขัง ... " 
            }, 
            
            {
                "เราออกไปล่าสัตว์มากินไหม", 
                "งั้นรอแปปนึงนะ เดี๋ยวฉันไปหาอะไรให้ทาน", 
                "ถ้าเธอทำตัวเป็นเด็กดีิฉันจะพาเธออกไปกินข้าว"  
            },

            {
                "แน่นอนสิ",  
                "เหตุผลที่ฉันอยากตื่นมาทุกเช้า เพราะฉันอยากเจอเธอ",  
                "ฉันอยู่ในใจของเธอเสมอ " 
        },

        // วันที่ 6
        {
            {  
                
                "เพราะเธอเคยละเมอพูดว่าอยากไปเดินเล่นในทุ่งดอกไม้ใต้ท้องฟ้าสีคราม แต่ตอนนี้ฉันพาเธออกไปไม่ได้ ขอโทษนะ..", 
                "เพราะไม่มีอะไรที่ฉันไม่รู้น่ะสิ หึหึ", 
                "ฉันไม่รู้หรอก แต่ฉันคิดว่า มันเหมาะกับเธอมากๆเลย" 
            },
            
            {
                "ฉันอยากใช้เวลากับเธอให้นานกว่านี้", 
                "ฉันก็รู้สึกแบบนั้นเหมือนกัน", 
                "ฉันจะทำทุกอย่างที่ทำให้เราจะได้อยู่ด้วยกัน" 
            },

            {
                "เธอเชื่อในเรื่องของรักแรกพบไหม??",
                "ก็ป่าวหนิ",
                "เธอไม่รู้จริงๆหรอว่าฉันรู้สึกยังไงอยู่" 
            }
            }
        },

        // วันที่ 7
        {       
            {
                "ฉัน...อยากช่วยเธอแหกคุก เธอไม่ได้ทำอะไรผิดเลย", 
                "ถ้าจะหนี ก็รีบหนี อย่าให้โดนจับได้",
                "เราหนีไปด้วยกันไหม" 
            },
            
            {
                "ฉันรู้สึกตกหลุมรักเธอตั้งแต่ครั้งแรกที่เราได้พบกัน",
                "ก็ป่าวหนิ",
                "ถ้าฉันไม่รักเธอ ฉันคงไม่รู้สึกเสียใจขนาดนี้" 
            },

            {
                "//คุณดึงซากุระเข้ามากอด", 
                "//คุณถอดเสื้อคลุมของตัวเอง แล้วเอามาคลุมไหล่ให้กับตัวเล็กของคุณ", 
                "//คุณคุกเข่าลงพร้อมกับจุมพิตที่มือของซากุระ" 
            }
        }


    };
    SakuraAction = {
        // วันแรก
        {
            {"Sakura :ฉันใจเย็นอยู่แล้วแหละน่า!!","Sakura : (;´༎ຶٹ༎ຶ`)","Sakura : ขอบคุณนะ ʕ = •́ .̫ •̀ = ʔ "},
            {"Sakura :อือ ... ","Sakura :ฉันอยากกลับบ้านจัง ⁞ ✿ ᵒ̌ ᴥ ᵒ̌ ✿ ⁞ ","Sakura : เขิน  (⊙﹏⊙✿) "},
            {"Sakura :ขอบคุณนะ", "Sakura :อยู่คุยกันก่อนสิ ‧º·(˚ ˃̣̣̥⌓˂̣̣̥ )‧º·˚ ", "Sakura : ฉันไม่ได้อยากพูดกับเธอหรอกนะ "}
        },
        
        // วันที่สอง
        {
            {"Sakura : ༼ ༎ຶ ෴ ༎ຶ༽ ม่ายน้าา าา าาาาา ", "Sakura : อะไรของเค้า ಠ╭╮ಠ  ", "Sakura : รับขนมพร้อมกับยิ้มให้  "},
            {"Sakura : ทำให้ได้อย่างที่พูดเถอะ ", "เธอจะรู้ไปทำไม ความลับน่ะ","Sakura : ฉันเคยกลัวด้วยหรอ หึหึ (จริงๆกลัวแต่ไม่พูด)"},
            {"Sakura : ฉันทำเวรกรรมอะไรไว้ถึงได้มาเจออิตานี่!", "Sakura : //ฮึ่มมม ช่วยฉันเพราะแบบนี้เองสินะ", "Sakura : //ซากุระเงียบ..."}
        },
        
        // วันที่สาม
        {
            {"Sakura : ก็ฉันขี้เกียจตัวเป็นขนน่ะสิ", "Sakura :  ฉันตัวหนักมากเดี๋ยวก็แขนหักหรอก ฮ่าๆ", "Sakura : เห้อ จะทำอะไรก็ทำเถอะ"},
            {"Sakura : เธอช่างรู้ใจฉันจริงๆ", "Sakura : อือ","Sakura :  ก็ฉันบอกว่าฉันเบื่อ เธอจะทำไมห๊าา"},
            {"Sakura : ซากุระทำหน้าเหมือนลูกแมวตัวน้อยที่อยู่ในอ้อมกอดของคุณ","Sakura : ซากุระหอมแก้มคุณ", "Sakura : คุณและซากุระได้เดินกลับห้องขังท่ามกลางแสงแดดที่อบอุ่น"}
        },
        
        // วันที่สี่
        {
            {"ตอนนี้ซากุระเหมือนกับลูกหมาตัวเล็กๆในอ้อมกอดของคุณ", "ซากุระจูบคุณกลับด้วยความเร่าร้อน", "ฉันอยากหยุดช่วงเวลาตอนนี้ที่ได้อยู่กับเธอเอาไว้"},
            {"Sakura :เพราะฉันโดนใส่ร้ายว่าเป็นฆาตกร ทั้งๆที่ฉันยังไม่ได้ทำอะไรผิดเลย แต่คนอื่นกลับเชื่อว่าฉันฆ่าคน ", "Sakura :อย่าปากแข็งได้ไหม ถ้าอยากรู้ ก็บอกว่าอยากรู้สิ", "Sakura :เพราะฉันโดนใส่ร้ายว่าเป็นฆาตกร ทั้งๆที่ฉันยังไม่ได้ทำอะไรผิดเลย แต่คนอื่นกลับเชื่อว่าฉันฆ่าคน"},
            {"Sakura :ซากุระ:เย้ ขอบคุณนะ (ซากุระทำตัวเหมือนหมาโกลเด้นที่ตี่กำลังตื่นเต้นที่จะได้ออกไปข้างนอก)", "Sakura :ซากุระทำหน้าหงอย", "Sakura  : ซากุระ : ได้สิ คุณสัญญานะ..."}
        },
        
        // วันที่ห้า
        {
            {"Sakura :คุณอย่ากอดฉันแรงนักสิฉันหายใจไม่ออก", "Sakura :ฉันจะไม่หนีไปถ้าไม่มีคุณ", "Sakura :คุณจะเข้ามาทำไม เดี๋ยวคนอื่นก็เข้าใจผิดหรอก"},
            {"Sakura :เอ่อ...", "Sakura : ขอบคุณน้าเจ้าทาส", "Sakura : ก็บอกแล้วฉันน่ะเด็กดี ดื้อเป็นที่ไหนล่ะ"},
            {"Sakura :งื้ออ", "Sakura :ฮ่าๆ เธอพูดอะไรแบบนี้แล้วฉันจั๊กจี้หัวใจสุดๆเลย", "Sakura  :อุ้ย...พูดมาก็ถูกต้อง(เขิน)"}
        },
        
        // วันที่หก
        {
            {"Sakura : เธอมันโครตโรแมนติคสุดๆเลย ", "Sakura:เลิกเบียวสักวันแล้วมันจะตายไหม", "Sakura :ขอบคุณนะ"},
            {"Sakura : งั้นคุณต้องทำอะไรสักอย่างแล้วแหละนะ หึหึ","Sakura ://ซากุระเข้ามากอดคุณพร้อมกับทำตัวเหมือนลูกหมา", "ซากุระ : //ฉันจะรอดูละกัน หึหึ"},
            {"Sakura : ฉันเชื่อ ตั้งแต่ที่ฉันได้มาเจอกับคุณ ","Sakura :  เห้อออ - - ", "Sakura : จริงๆฉันก็พอจะรู้ หึหึ"}
        },
        
        // วันที่เจ็ด
        {
            {"Sakura : งั้นเราหนีไปด้วยกันเถอะนะ", "Sakura : ฉันไม่อยากไปคนเดียว... ", "Sakura : น่าสนใจ..."},
            {"Sakura : นั่นเป็นเพราะพรหมลิขิตสินะ","Sakura : เลิกปากแข็งสักที ชั้นจะโดนประหารอยู่แล้วนะ","Sakura : เธออย่าพูดแบบนี้สิ ฉันก็เศร้าเหมือนกันนะ"},
            {"Sakura :ซากุระได้เอาหัวมาซบกับไหล่กว้างๆของคุณ","ซากุระรู้สึกอบอุ่นและมีความสุข", "ซากุระกำลังตกใจกับการกระทำของคุณ"}
        }
    };
     actionRelation = {
        // วันแรก
        {
            {4, 4, 3},
            {1, 1, 0},
            {2, 0, 0}
        },
        // วันที่สอง
        {
            {4, 4, 4},
            {0, 0, 0},
            {1, 2, 1}
        },
        // วันที่สาม
        {
            {1, 2, 2},
            {0, 0, 0},
            {11, 11, 2}
        },
        // วันที่สี่
        {
            {4, 4, 5},
            {0, 0, 0},
            {5, -5, -5}
        },
        // วันที่ห้า
        {
            {5, 3, 4},
            {-3, 5, 5},
            {-3, 4, 3}
        },
        // วันที่หก
        {
            {5, 0, 4},
            {4, 3, 4},
            {5, -3, 3}
        },
        // วันที่เจ็ด
        {
            {3, 5, 3},
            {3, -4, -3},
            {5, 5, 5}
        }
    };
}

