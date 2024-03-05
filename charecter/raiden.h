#pragma once

#include "../initGame.h"

class raiden{
public:
    raiden();
    vector<string> Ending;
    vector<vector<string>> raidenTalk, userTalk, raidenQuestions;
    vector<vector<vector<string>>> userAnswers, raidenAction;
    vector<vector<vector<int>>> actionRelation;
    vector<vector<vector<Texture>>> ActionImage;
    vector<vector<Texture>>  raidenActionImageTalk, raidenQusImageTalk;
    Texture R1;
    Texture R2;
    Texture R3;
    Texture R4; 
    Texture R5;
    
};


raiden::raiden(){
    
    // ภาพตัวแทนตัวละคร raiden
    R1.loadFromFile("../GG_Game/charecter/raiden/raidenhappy.PNG");
    R2.loadFromFile("../GG_Game/charecter/raiden/raidencold.PNG");
    R3.loadFromFile("../GG_Game/charecter/raiden/raidencry.PNG");
    R4.loadFromFile("../GG_Game/charecter/raiden/raidenoverwhelmed.PNG");
    R5.loadFromFile("../GG_Game/charecter/raiden/raidensad.PNG");



    raidenTalk = {
        // วันที่ 1
        {   
            "raiden : .................",
            "raiden : .................",
            "raiden : ................."
        },
        
        // วันที่ 2
        {   
            "raiden : raidenดูเหม่อลอย",
            "raiden : .................",
            "raiden : ต้องการอะไรอีก"
        },
        
        // วันที่ 3
        {   
            "raiden : raiden มองมาที่คุณ",
            "raiden : raiden มองไปทางอื่นและเมินคุณ",
            "raiden : raiden หันมาและยิ้มให้คุณ"
        },
        
        // วันที่ 4
        {   
            "//raidenมองเห็นคุณเดินไปหาเธอ",
            "raiden :สวัสดีตอนเช้าค่ะคุณผู้คุม",
            "raiden :วันพรุ่งนี้ คุณจะยังมาหาฉันไหม"
        },
        
        // วันที่ 5
        {   
            "raiden : //raidenตั้งตารอเพื่อที่จะได้พบคุณ",
            "raiden : ฉันอยากเจอนาย",
            "//กอดกันเงียบๆเป็นเวลานาน"
        },
        
        // วันที่ 6
        {   
            "//raiden เห็นคุณเดินมาพร้อมดอกกุหลาบสีดำในมือกับหน้าตาอันมุ่งมั่น",
            "raiden : มีอะไรรึเปล่าคะ",  
            "raiden : ฉันไม่อยากให้ถึงวันพรุ่งนี้เลย"
        },
        
        // วันที่ 7
        {   
            "raiden : วันนี้แล้วสินะ...",
            "raiden : วันนี้คือวันสุดท้ายของฉันแล้ว",
            "raiden : ฉันไม่อยากจากนายไป...ไม่อยากเลยจริงๆ"
        }
    };

    raidenActionImageTalk = {
        // วันที่ 1
        {
           R2,
           R2,
           R2
        },

        // วันที่ 2
        {
            R2,
            R2,
            R2
        },

        // วันที่ 3
        {
            R2,
            R2,
            R1
        },

        // วันที่ 4
        {
            R1,
            R1,
            R1
        },

        // วันที่ 5
        {
            R1,
            R1,
            R4
        },

        // วันที่ 6
        {
            R1,
            R1,
            R5
        },

        // วันที่ 7
        {
            R5,
            R5,
            R3
        }
    };
    userTalk = {
        // วันที่ 1
        {
            "คุณ : (เธอสวยมากเลย ไม่น่าเชื่อเลยจริงๆว่าเธอจะเป็นนักโทษประหาร)",
            "คุณ : สวัสดี ฉันเป็นผู้คุมของที่นี่ เธอชื่ออะไรหรอ",
            "คุณ : เย็นชาจังเลยนะเธอเนี่ย "
        },

    
        
        // วันที่ 2
        {
            "คุณ : ตื่นแล้วหรอ คิดอะไรอยู่น่ะ",
            "คุณ : ไม่ตอบอย่างเคยสินะ",
            "คุณ : ไม่มีแล้วล่ะ อย่างน้อยวันนี้ก็ยังได้รู้ชื่อเธอล่ะนะ"
        },
        
        // วันที่ 3
        {
            "คุณ : มีอะไรรึเปล่า มองแบบนี้ฉันก็เขินแย่",
            "คุณ : เธอนี่จริงๆเลยนะ",
            "คุณ : คุณตกตะลึงในความสวยของเธอ",
        },
        
        // วันที่ 4
        {   
            "คุณ : อรุณสวัสดิ์ครับคุณผู้หญิง",
            "คุณ : (คุณรู้สึกว่าraidenดูเปลี่ยนไป)",
            "คุณ : ฉันอยากมาเจอเธอทุกวันเลย"
        },
        
        // วันที่ 5
        {   
            "คุณ : วันนี้เป็นยังไงบ้าง ขอโทษที่ฉันมาช้า",
            "คุณ : ฉันไม่มีทางผิดคำพูดกับเธอหรอกนะ",
            "//คุณและraidenมองหน้ากัน และจูบกัน"
        },
        
        // วันที่ 6
        {
            "คุณ : raiden ฉันมีเรื่องอยากจะบอกเธอ",
            "คุณ : ฉันรักเธอ ดอกกุหลาบสีดำในมือนี้จะแสดงถึงความรักของฉันที่มีต่อเธอไปชั่วนิรันดร์ไม่เสื่อมคลาย",
            "คุณ : ไม่ต้องห่วงเราจะผ่านมันไปด้วยกัน"
        },
        
        // วันที่ 7
        {   
            "คุณ : ฉันจะอยู่ข้างๆเธอเองไม่ต้องห่วงนะ",
            "คุณ : ฉันรักเธอเชื่อฉันนะ",
            "//คุณเดินเข้าไปกอดraiden"
        }
    };

    raidenQuestions = {
        // วันที่ 1
        {   
            "raiden : .................",
            "raiden : ..... ต้องการอะไร",
            "raiden : ..... น่ารำคาญจริงๆ"
        },
        
        // วันที่ 2
        {   "raiden : ..... มีอะไรอีกล่ะ",
            "raiden : ..... raiden",
            "raiden : ..... เสร็จธุระแล้วใช่มั้ย ขอฉันอยู่คนเดียวซักที"
        },
        
        // วันที่ 3
        { 
            "raiden : ทำไมถึงเข้ามาคุยกับฉันล่ะ ทั้งที่ฉันเมินนายอยู่ตลอด",
            "raiden : ไม่เคยมีใครเข้าหาฉันแบบนี้มาก่อน...ทุกคนเห็นว่าฉันเป็นคนเย็นชาเท่านั้น",
            "raiden : ขอบคุณที่มาคุยกับฉันนะ"
        },
        
        // วันที่ 4
        {
            "raiden :นายอยากรู้ไหมว่าทำไมฉันถึงมาอยู่ในที่แบบนี้",
            "raiden :พ่อของฉันถูกใส่ร้ายว่าเป็นกบฎ จากลุงแท้ๆของฉัน ตอนนี้เหลือเพียงแค่ฉันที่ยังรอดชีวิต",
            "//raidenร้องไห้ออกมา"
        },
        
        // วันที่ 5
        {   
            "raiden : ฉันอยากหยุดเวลาไว้แบบนี้ตลอดไป แต่ฉันรู้มันคงเป็นไปไม่ได้",
            "raiden : ฉันไม่อยากจากไปแบบนี้เลย ฉันอยากเจอนายแบบนี้อีกในทุกๆวัน",
            "raiden : ถ้าการเกิดใหม่มีจริงนายจะตามหาฉันไหม"
        },
        
        // วันที่ 6
        {   

            "raiden : (raiden ตื้นตันใจ) ฉันรักนาย แต่ฉันไม่กล้าบอกเพราะฉันกำลังจะจากนายไป",
            "raiden : ฉันมีความสุขมากที่มีนายอยู่เคียงข้างฉัน",
            "raiden : ถ้าฉันจากไป ฉันอยากให้นายลืมฉันไปนะ"
                 
    
        },
        
        // วันที่ 7
        {   
            "raiden : สุดท้ายนี้ฉันอยากจะบอกนายว่า ฉันรักนาย ขอบคุณนะที่อยู่กับฉันในช่วงเวลาสุดท้ายของชีวิตฉัน",
            "raiden : นายรักฉันไหม",
            "raiden : ฉันไปแล้วนะ"
        },
    };

     raidenQusImageTalk = {
        // วันที่ 1
        {
            R2,
            R2,
            R2
        },

        // วันที่ 2
        {   R2,
            R2,
            R2
        },

        // วันที่ 3
        {
            R2,
            R2,
            R1
        },

        // วันที่ 4
        {
            R1,
            R5,
            R3
        },

        // วันที่ 5
        {
            R5,
            R5,
            R1
        },

        // วันที่ 6
        {
            R4,
            R4,
            R4
        },

        // วันที่ 7
        {
             R4,
             R4,
             R5
        }
    };


    userAnswers = {
        // วันที่ 1
        {
            // คำถามที่ 1
            {
                "ตอบฉันบ้างสิเธอน่ะ พูดฉันพูดคนเดียวแบบนี้มันเขินนะ 555",
                "................. ", 
                "เธอนี่ไม่มีมารยาทเลยนะ"
            },

            {
                "แค่อยากมาทำรู้จักเธอน่ะ เห็นเธออยู่คนเดียว", 
                "ป่าวหรอกแค่เบื่อๆน่ะ", 
                "ก็เห็นเธอสวยดี เลยอยากมาทำความรู้จัก"
            },

            {
                "อย่าพูดอย่างนั้นสิ ฉันแค่อยากชวนเธอคุยเองน่าาา", 
                "เธอนี่เป็นคนพูดตรงดีจังเลยนะเนี่ย", 
                "กล้าพูดแบบนี้กับผู้คุมเลยหรอเนี่ย ใจกล้าดีนะ"
            }

        },

        // วันที่ 2              
        {
            {
                "มันคาใจน่ะ ฉันยังไม่รู้ชื่อของเธอเลยนะ บอกฉันหน่อยเถอะนะ", 
                "แล้วตกลงเธอชื่ออะไร ฉันจะได้เรียกให้ถูก", 
                "ก็อยากรู้ชื่อของเธอน่ะสิ เล่นตัวจังนะ"
            },

            {
                "ว้าว raiden เองสินะเนี่ย ในที่สุดก็ได้รู้ชื่อซักที เป็นชื่อที่น่าจดจำดีจังเลยนะ", 
                "raiden เป็นชื่อที่แปลกดีนะ", 
                "raiden เป็นชื่อที่งดงามเหมาะกับคนที่งดงามอย่างเธอเลยนะเนี่ย" 
            },

            {
                "หวาา เย็นชาเหมือนเคยเลยสินะเนี่ย", 
                "ก็เริ่มชินกับนิสัยเย็นชาของเธอแล้วล่ะนะ", 
                "ชักจะเหลืออดกับนิสัยแบบนี้และแฮะ แต่ไม่เป็นไร เพราะเธอสวย" 
            }
        },

        // วันที่ 3
        {
            {
                "เพราะฉันไม่อยากให้เธอต้องเหงาอยู่คนเดียว ฉันอยากจะแบ่งเบาความเจ็บปวดนั้นกับเธอ", 
                "เห็นเธอเหงาๆ เลยมาอยู่เป็นเพื่อนคุยล่ะนะ",
                "ก็ฉันชอบเธอนี่หน่า สวยตรงสเปคฉันเลยล่ะนะเธอน่ะ" 
            },

            {
                "ฉันถูกดึงดูดโดยเธอตั้งแต่ครั้งแรกที่เราพบกันแล้วล่ะ มันทำให้ฉันอยากรู้จักเธอมากขึ้น", 
                "ก็จริงอย่างที่คนอื่นว่าล่ะนะ", 
                "สำหรับฉันแล้วไม่ว่าเธอจะมีนิสัยยังไงก็ไม่ส่งผลต่อความสวยของเธออยู่ดี"
            },

            {
                "ขอบคุณอะไรกันล่ะ ฉันแค่อยากคุยกับเธออยากเห็นเธอยิ้มเท่านั้นเองน่า", 
                "ไม่คิดเลยนะเนี่ยว่าจะได้ยินคำขอบคุณจากเธอ", 
                "น่าทึ่งแฮะ ที่คนแบบเธอมาขอบคุณฉัน", 
            }
        },

        // วันที่ 4
        {
            {
                "ถ้าการเล่ามันไม่ทำให้เธอลำบากใจล่ะก็ ฉันอยากรู้",
                "ถ้าเธออยากเล่าฉันก็จะรับฟัง", 
                "อยากรู้สิ" 
            },
            
            {
                "//คุณเข้าไปกอดraiden", 
                "โหดร้ายจังนะ", 
                "เป็นคนที่เลวจริงๆ" 
            },

            {
                "ร้องได้เต็มที่เลยนะตรงนี้ยังมีคนที่จะอยู่ข้างเธอทุกเมื่อที่เธอต้องการ", 
                "อยากร้องก็ร้องออกมาเถอะ อย่าเก็บมันไว้คนเดียว", 
                "ทำไมถึงเกิดเรื่องแบบนี้ขึ้นกับเธอกันนะ" 
            }   
        },

        // วันที่ 5
        {
            {
                "ฉันก็หวังว่าฉันจะได้อยู่แบบนี้กับเธอตลอดไป", 
                "มันคงจะดีถ้าเป็นแบบนั้น", 
                "มันคงเป็นไปไม่ได้" 
            }, 
            
            {
                "ฉันจะหาทางช่วยเธอเอง เชื่อฉันนะ", 
                "ฉันก็อยากอยู่กับเธอแบบนี้", 
                "ฉันจะอยู่กับเธอเสมอ"  
            },

            {
                "ไม่ต้องรอให้เกิดใหม่ ฉันจะช่วยเธอออกมาให้ได้ ถ้าไม่ได้เราจะตายไปด้วยกัน",  
                "แน่นอนสิไม่ว่าเธอจะอยู่ที่ไหนผมจะตามหาให้เจอ",  
                "แน่นอน" 
            }
        },


        // วันที่ 6
        {
            {  
                
                "เธอจะไม่จากฉันไปไหนฉันจะช่วยเธอเองเราจะอยู่ด้วยกันตลอดไป", 
                "เธอจะไม่มีวันจากฉันไปไหนเธอจะอยู่ในใจของฉันตลอดไป", 
                "เราใช้เวลาอยู่ด้วยกันให้มากที่สุดกันดีกว่า" 
            },
            
            {
                "ฉันจะทำทุกอย่างที่ทำให้เราจะได้อยู่ด้วยกัน",
                "ฉันอยากใช้เวลากับเธอให้นานกว่านี้", 
                "ฉันก็รู้สึกแบบนั้นเหมือนกัน", 
            },

            {
                "ไม่มีทาง!!! ลืมมันไปเลยมันจะไม่เกิดขึ้น",
                "ฉันจะลืมเธอได้ยังไง มันจะอยู่ในความทรงจำของผมตลอดไป",
                "ฉันจะไม่ลืมมัน" 
            }
            
        },

        // วันที่ 7
        {       
            {
                "เป็นฉันต่างหากที่ควรจะขอบคุณเธอที่ทำให้ฉันรู้ว่าความรักคืออะไร", 
                "ขอบคุณนะที่รักฉัน",
                "ฉันก็ด้วยนะ" 
            },
            
            {
                "รักมากเลยล่ะถ้าวันนี้ฉันช่วยเธอไม่ได้ฉันพร้อมจะไปพร้อมกับเธอ",
                "รักมากฉันจะไม่มีวันลืมเลย",
                "รักสิ" 
            },

            {
                "//คุณดึงraidenเข้ามากอด", 
                "//คุณถอดเสื้อคลุมของตัวเอง แล้วเอามาคลุมไหล่ให้กับตัวเล็กของคุณ", 
                "//คุณคุกเข่าลงพร้อมกับจุมพิตที่มือของraiden" 
            }
        }


    };
    raidenAction = {
        // วันแรก
        {
            {"raiden :.................",".................","................."},
            {"raiden :..... งั้นหรอ","..... งั้นหรอ","..... งั้นหรอ"},
            {"raiden :..... พูดจบรึยัง","..... พูดจบรึยัง","..... พูดจบรึยัง"}
        },
        
        // วันที่สอง
        {
            {"raiden :.................",".................","................."},
            {"raiden :..... พอใจรึยังล่ะ","..... พอใจรึยังล่ะ","..... พอใจรึยังล่ะ"},
            {"raiden :.................",".................","................."}
        },
        
        // วันที่สาม
        {
            {"raiden : (raidenดูแปลกใจกับคำตอบของคุณ)","raiden : (raidenรับฟังเงียบๆ)","................."},
            {"raiden : (raidenดูมีความสุข)","raiden : (raidenรับฟังเงียบๆ)","................."},
            {"raiden : (raidenดูสนุกกับท่าทางของคุณ)","raiden : (raidenรับฟังเงียบๆ)","................."}
        },
        
        // วันที่สี่
        {
            {"raiden : (raiden เศร้า)", "raiden : (raiden เศร้า)", "raiden : (raiden เศร้า)"},
            {"raiden : (raiden ร้องไห้)", "raiden : (raiden ร้องไห้)", "raiden : (raiden ร้องไห้)"},
            {"raiden : (raiden ร้องไห้)", "raiden : (raiden ร้องไห้)", "raiden : (raiden ร้องไห้)"}
        },
        
        // วันที่ห้า
        {
            {"raiden : แค่นี้ฉันก็มีความสุขมากๆแล้วล่ะ ขอบคุณนะคุณผู้คุม", "raiden : (raiden มีความสุข)", "raiden : (raiden ยิ้ม)"},
            {"raiden : นายไม่จำเป็นต้องทำถึงขนาดนั้นหรอกนะ ฉันดีใจจริงๆที่ได้พบกับนาย", "raiden : (raiden มีความสุข)", "raiden : (raiden ยิ้ม)"},
            {"raiden : ฉันมีความสุข...มีความสุขมากจริงๆ(raiden ตื้นตัน)", "raiden : (raiden มีความสุข)", "raiden : (raiden ยิ้ม)"}
        },
        
        // วันที่หก
        {
            {"raiden : (raiden ตื้นตันใจ)", "raiden: (raiden มีความสุข)", "raiden :ขอบคุณนะ"},
            {"raiden : ฉันเชื่อนายนะ","raiden : (raiden มีความสุข)", "raiden : อื้ม!"},
            {"raiden : คนโง่... ","raiden :  (raiden มีความสุข)", "raiden : (raiden ยิ้ม)"}
        },
        
        // วันที่เจ็ด
        {
            {"raiden : (raiden ตื้นตันใจ)", "raiden: (raiden มีความสุข)", "raiden :ขอบคุณนะ"},
            {"raiden : (raiden ตื้นตันใจ)", "raiden: (raiden มีความสุข)", "raiden :ขอบคุณนะ"},
            {"raiden :raidenได้เอาหัวมาซบกับไหล่กว้างๆของคุณ","raidenรู้สึกอบอุ่นและมีความสุข", "raidenกำลังตกใจกับการกระทำของคุณ"}
        }
    };

    ActionImage = {
        // วันแรก
        {
            {R2,R2,R2},
            {R2,R2,R2},
            {R2,R2,R2},
        },

        // วันที่สอง
        {
            {R2,R2,R2},
            {R2,R2,R2},
            {R2,R2,R2},
        },

        // วันที่สาม
        {
            {R2,R2,R2},
            {R1,R2,R2},
            {R1,R2,R2}
        },

        // วันที่สี่
        {
            {R5,R5,R5},
            {R3,R3,R3},
            {R3,R3,R3}
        },

        // วันที่ห้า
        {
            {R4,R1,R1},
            {R4,R1,R1},
            {R4,R1,R1}
        },

        // วันที่หก
        {
            {R4,R1,R1},
            {R4,R1,R1},
            {R4,R1,R1}
        },

        // วันที่เจ็ด
        {
            {R4,R1,R1},
            {R4,R1,R1},
            {R4,R1,R1}
        }
    };
    
    actionRelation = {
        // วันแรก
        {
            {5, 0, -5},
            {5, 0, -5},
            {5, 0, -5}
        },
        // วันที่สอง
        {
            {5, 0, -5},
            {5, 0, -5},
            {5, 0, -5}
        },
        // วันที่สาม
        {
            {5, 0, -5},
            {5, 0, -5},
            {5, 0, -5}
        },
        // วันที่สี่
        {
            {10, 5, -10},
            {10, 5, -10},
            {10, 5, -10}
        },
        // วันที่ห้า
        {
            {10, 5, 0},
            {10, 5, 0},
            {10, 5, 0}
        },
        // วันที่หก
        {
            {10, 5, 0},
            {10, 5, 0},
            {10, 5, 0}
        },
        // วันที่เจ็ด
        {
            {10, 5, 0},
            {10, 5, 0},
            {10, 5, 0}
        }
    };
    Ending = {
        "แย่  คุณเห็น raiden ถูกประหารต่อหน้าของคุณ",
        "ดี คุณได้ก่อความวุ่นวายสร้างโอกาสให้raidenหนีไป",
        "ดีมาก คุณพาraidenหนีไปกับคุณและไปใช้ชีวิตอยู่ด้วยกันอย่างมีความสุข\nในที่ที่จะไม่มีใครหาคุณเจอ"
    };
}
