#ifndef ESP32_REGISTERS_H
#define ESP32_REGISTERS_H

/**
GPIO Registers
**/
#define GPIO_OUT_REG             (0x3FF44004)
#define GPIO_OUT_W1TS_REG        (0x3FF44008)
#define GPIO_OUT_W1TC_REG        (0x3FF4400C)
#define GPIO_OUT1_REG            (0x3FF44010)
#define GPIO_OUT1_W1TS_REG       (0x3FF44014)
#define GPIO_OUT1_W1TC_REG       (0x3FF44018)
   
#define GPIO_ENABLE_REG          (0x3FF44020)
#define GPIO_ENABLE_W1TS_REG     (0x3FF44024)
#define GPIO_ENABLE_W1TC_REG     (0x3FF44028)
#define GPIO_ENABLE1_REG         (0x3FF4402C)
#define GPIO_ENABLE1_W1TS_REG    (0x3FF44030)
#define GPIO_ENABLE1_W1TC_REG    (0x3FF44034)

#define GPIO_IN_REG              (0x3FF4403C)
#define GPIO_IN1_REG             (0x3FF44040)

#define GPIO_PIN0_REG            (0x3FF44088)
#define GPIO_PIN1_REG            (0x3FF4408C)
#define GPIO_PIN2_REG            (0x3FF44090)
#define GPIO_PIN3_REG            (0x3FF44094)
#define GPIO_PIN4_REG            (0x3FF44098)
#define GPIO_PIN5_REG            (0x3FF4409C)
#define GPIO_PIN6_REG            (0x3FF440A0)
#define GPIO_PIN7_REG            (0x3FF440A4)
#define GPIO_PIN8_REG            (0x3FF440A8)
#define GPIO_PIN9_REG            (0x3FF440AC)
#define GPIO_PIN10_REG            (0x3FF440B0)
#define GPIO_PIN11_REG            (0x3FF440B4)
#define GPIO_PIN12_REG            (0x3FF440B8)
#define GPIO_PIN13_REG            (0x3FF440BC)
#define GPIO_PIN14_REG            (0x3FF440C0)
#define GPIO_PIN15_REG            (0x3FF440C4)
#define GPIO_PIN16_REG            (0x3FF440C8)
#define GPIO_PIN17_REG            (0x3FF440CC)
#define GPIO_PIN18_REG            (0x3FF440D0)
#define GPIO_PIN19_REG            (0x3FF440D4)
#define GPIO_PIN20_REG            (0x3FF440D8)
#define GPIO_PIN21_REG            (0x3FF440DC)
#define GPIO_PIN22_REG            (0x3FF440E0)
#define GPIO_PIN23_REG            (0x3FF440E4)
#define GPIO_PIN24_REG            (0x3FF440E8)
#define GPIO_PIN25_REG            (0x3FF440EC)
#define GPIO_PIN26_REG            (0x3FF440F0)
#define GPIO_PIN27_REG            (0x3FF440F4)
#define GPIO_PIN28_REG            (0x3FF440F8)
#define GPIO_PIN29_REG            (0x3FF440FC)
#define GPIO_PIN30_REG            (0x3FF44100)
#define GPIO_PIN31_REG            (0x3FF44104)
#define GPIO_PIN32_REG            (0x3FF44108)
#define GPIO_PIN33_REG            (0x3FF4410C)
#define GPIO_PIN34_REG            (0x3FF44110)
#define GPIO_PIN35_REG            (0x3FF44114)
#define GPIO_PIN36_REG            (0x3FF44118)
#define GPIO_PIN37_REG            (0x3FF4411C)
#define GPIO_PIN38_REG            (0x3FF44120)
#define GPIO_PIN39_REG            (0x3FF44124)


#define IO_MUX_MCU_OE_Pos         (0)   // Output Enable 
#define IO_MUX_SLP_SEL_Pos        (1)   // Pad Sleep Mode
#define IO_MUX_MCU_WPD_Pos        (2)   // Pad Pulldown Enable during Sleep
#define IO_MUX_MCU_WPU_Pos        (3)   // Pad Pullup Enable during Sleep
#define IO_MUX_MCU_IE_Pos         (4)   // Input Enable during Sleep 
#define IO_MUX_MCU_DRV_Pos        (5)   // Drive Strength of Pad during Sleep
#define IO_MUX_FUN_WPD_Pos        (7)   // Pad Pulldown Enable
#define IO_MUX_FUN_WPU_Pos        (8)   // Pad Pullup Enable
#define IO_MUX_FUN_IE_Pos         (9)   // Input Enable
#define IO_MUX_FUN_DRV_Pos        (10)  // Select Drive Strength
#define IO_MUX_MCU_SEL_Pos        (12)  // IO MUX functions 

#define IO_MUX_PIN_CTRL_REG      (0x3FF49000)
#define IO_MUX_GPIO36_REG        (0x3FF49004)
#define IO_MUX_GPIO37_REG        (0x3FF49008)
#define IO_MUX_GPIO38_REG        (0x3FF4900C)
#define IO_MUX_GPIO39_REG        (0x3FF49010)
#define IO_MUX_GPIO34_REG        (0x3FF49014)
#define IO_MUX_GPIO35_REG        (0x3FF49018)
#define IO_MUX_GPIO32_REG        (0x3FF4901C)
#define IO_MUX_GPIO33_REG        (0x3FF49020)
#define IO_MUX_GPIO26_REG        (0x3FF49028)
#define IO_MUX_GPIO25_REG        (0x3FF49024)
#define IO_MUX_GPIO27_REG        (0x3FF4902C)
#define IO_MUX_MTMS_REG          (0x3FF49030)
#define IO_MUX_MTDI_REG          (0x3FF49034)
#define IO_MUX_MTCK_REG          (0x3FF49038)
#define IO_MUX_MTDO_REG          (0x3FF4903C)
#define IO_MUX_GPIO2_REG         (0x3FF49040)
#define IO_MUX_GPIO0_REG         (0x3FF49044)
#define IO_MUX_GPIO4_REG         (0x3FF49048)
#define IO_MUX_GPIO16_REG        (0x3FF4904C)
#define IO_MUX_GPIO17_REG        (0x3FF49050)
#define IO_MUX_SD_DATA2_REG      (0x3FF49054)
#define IO_MUX_SD_DATA3_REG      (0x3FF49058)
#define IO_MUX_SD_CMD_REG        (0x3FF4905C)
#define IO_MUX_SD_CLK_REG        (0x3FF49060)
#define IO_MUX_SD_DATA0_REG      (0x3FF49064)
#define IO_MUX_SD_DATA1_REG      (0x3FF49068)
#define IO_MUX_GPIO5_REG         (0x3FF4906C)
#define IO_MUX_GPIO18_REG        (0x3FF49070)
#define IO_MUX_GPIO19_REG        (0x3FF49074)
#define IO_MUX_GPIO20_REG        (0x3FF49078)
#define IO_MUX_GPIO21_REG        (0x3FF4907C)
#define IO_MUX_GPIO22_REG        (0x3FF49080)
#define IO_MUX_U0RXD_REG         (0x3FF49084)
#define IO_MUX_U0TXD_REG         (0x3FF49088)
#define IO_MUX_GPIO23_REG        (0x3FF4908C)
#define IO_MUX_GPIO24_REG        (0x3FF49090)

#define GPIO_FUNC0_IN_SEL_CFG_REG (0x3FF44130)
#define GPIO_FUNC1_IN_SEL_CFG_REG (0x3FF44134)
#define GPIO_FUNC2_IN_SEL_CFG_REG (0x3FF44138)
#define GPIO_FUNC3_IN_SEL_CFG_REG (0x3FF4413C)
#define GPIO_FUNC4_IN_SEL_CFG_REG (0x3FF44140)
#define GPIO_FUNC5_IN_SEL_CFG_REG (0x3FF44144)
#define GPIO_FUNC6_IN_SEL_CFG_REG (0x3FF44148)
#define GPIO_FUNC7_IN_SEL_CFG_REG (0x3FF4414C)
#define GPIO_FUNC8_IN_SEL_CFG_REG (0x3FF44150)
#define GPIO_FUNC9_IN_SEL_CFG_REG (0x3FF44154)
#define GPIO_FUNC10_IN_SEL_CFG_REG (0x3FF44158)
#define GPIO_FUNC11_IN_SEL_CFG_REG (0x3FF4415C)
#define GPIO_FUNC12_IN_SEL_CFG_REG (0x3FF44160)
#define GPIO_FUNC13_IN_SEL_CFG_REG (0x3FF44164)
#define GPIO_FUNC14_IN_SEL_CFG_REG (0x3FF44168)
#define GPIO_FUNC15_IN_SEL_CFG_REG (0x3FF4416C)
#define GPIO_FUNC16_IN_SEL_CFG_REG (0x3FF44170)
#define GPIO_FUNC17_IN_SEL_CFG_REG (0x3FF44174)
#define GPIO_FUNC18_IN_SEL_CFG_REG (0x3FF44178)
#define GPIO_FUNC19_IN_SEL_CFG_REG (0x3FF4417C)
#define GPIO_FUNC20_IN_SEL_CFG_REG (0x3FF44180)
#define GPIO_FUNC21_IN_SEL_CFG_REG (0x3FF44184)
#define GPIO_FUNC22_IN_SEL_CFG_REG (0x3FF44188)
#define GPIO_FUNC23_IN_SEL_CFG_REG (0x3FF4418C)
#define GPIO_FUNC24_IN_SEL_CFG_REG (0x3FF44190)
#define GPIO_FUNC25_IN_SEL_CFG_REG (0x3FF44194)
#define GPIO_FUNC26_IN_SEL_CFG_REG (0x3FF44198)
#define GPIO_FUNC27_IN_SEL_CFG_REG (0x3FF4419C)
#define GPIO_FUNC28_IN_SEL_CFG_REG (0x3FF441A0)
#define GPIO_FUNC29_IN_SEL_CFG_REG (0x3FF441A4)
#define GPIO_FUNC30_IN_SEL_CFG_REG (0x3FF441A8)
#define GPIO_FUNC31_IN_SEL_CFG_REG (0x3FF441AC)
#define GPIO_FUNC32_IN_SEL_CFG_REG (0x3FF441B0)
#define GPIO_FUNC33_IN_SEL_CFG_REG (0x3FF441B4)
#define GPIO_FUNC34_IN_SEL_CFG_REG (0x3FF441B8)
#define GPIO_FUNC35_IN_SEL_CFG_REG (0x3FF441BC)
#define GPIO_FUNC36_IN_SEL_CFG_REG (0x3FF441C0)
#define GPIO_FUNC37_IN_SEL_CFG_REG (0x3FF441C4)
#define GPIO_FUNC38_IN_SEL_CFG_REG (0x3FF441C8)
#define GPIO_FUNC39_IN_SEL_CFG_REG (0x3FF441CC)
#define GPIO_FUNC40_IN_SEL_CFG_REG (0x3FF441D0)
#define GPIO_FUNC41_IN_SEL_CFG_REG (0x3FF441D4)
#define GPIO_FUNC42_IN_SEL_CFG_REG (0x3FF441D8)
#define GPIO_FUNC43_IN_SEL_CFG_REG (0x3FF441DC)
#define GPIO_FUNC44_IN_SEL_CFG_REG (0x3FF441E0)
#define GPIO_FUNC45_IN_SEL_CFG_REG (0x3FF441E4)
#define GPIO_FUNC46_IN_SEL_CFG_REG (0x3FF441E8)
#define GPIO_FUNC47_IN_SEL_CFG_REG (0x3FF441EC)
#define GPIO_FUNC48_IN_SEL_CFG_REG (0x3FF441F0)
#define GPIO_FUNC49_IN_SEL_CFG_REG (0x3FF441F4)
#define GPIO_FUNC50_IN_SEL_CFG_REG (0x3FF441F8)
#define GPIO_FUNC51_IN_SEL_CFG_REG (0x3FF441FC)
#define GPIO_FUNC52_IN_SEL_CFG_REG (0x3FF44200)
#define GPIO_FUNC53_IN_SEL_CFG_REG (0x3FF44204)
#define GPIO_FUNC54_IN_SEL_CFG_REG (0x3FF44208)
#define GPIO_FUNC55_IN_SEL_CFG_REG (0x3FF4420C)
#define GPIO_FUNC56_IN_SEL_CFG_REG (0x3FF44210)
#define GPIO_FUNC57_IN_SEL_CFG_REG (0x3FF44214)
#define GPIO_FUNC58_IN_SEL_CFG_REG (0x3FF44218)
#define GPIO_FUNC59_IN_SEL_CFG_REG (0x3FF4421C)
#define GPIO_FUNC60_IN_SEL_CFG_REG (0x3FF44220)
#define GPIO_FUNC61_IN_SEL_CFG_REG (0x3FF44224)
#define GPIO_FUNC62_IN_SEL_CFG_REG (0x3FF44228)
#define GPIO_FUNC63_IN_SEL_CFG_REG (0x3FF4422C)
#define GPIO_FUNC64_IN_SEL_CFG_REG (0x3FF44230)
#define GPIO_FUNC65_IN_SEL_CFG_REG (0x3FF44234)
#define GPIO_FUNC66_IN_SEL_CFG_REG (0x3FF44238)
#define GPIO_FUNC67_IN_SEL_CFG_REG (0x3FF4423C)
#define GPIO_FUNC68_IN_SEL_CFG_REG (0x3FF44240)
#define GPIO_FUNC69_IN_SEL_CFG_REG (0x3FF44244)
#define GPIO_FUNC70_IN_SEL_CFG_REG (0x3FF44248)
#define GPIO_FUNC71_IN_SEL_CFG_REG (0x3FF4424C)
#define GPIO_FUNC72_IN_SEL_CFG_REG (0x3FF44250)
#define GPIO_FUNC73_IN_SEL_CFG_REG (0x3FF44254)
#define GPIO_FUNC74_IN_SEL_CFG_REG (0x3FF44258)
#define GPIO_FUNC75_IN_SEL_CFG_REG (0x3FF4425C)
#define GPIO_FUNC76_IN_SEL_CFG_REG (0x3FF44260)
#define GPIO_FUNC77_IN_SEL_CFG_REG (0x3FF44264)
#define GPIO_FUNC78_IN_SEL_CFG_REG (0x3FF44268)
#define GPIO_FUNC79_IN_SEL_CFG_REG (0x3FF4426C)
#define GPIO_FUNC80_IN_SEL_CFG_REG (0x3FF44270)
#define GPIO_FUNC81_IN_SEL_CFG_REG (0x3FF44274)
#define GPIO_FUNC82_IN_SEL_CFG_REG (0x3FF44278)
#define GPIO_FUNC83_IN_SEL_CFG_REG (0x3FF4427C)
#define GPIO_FUNC84_IN_SEL_CFG_REG (0x3FF44280)
#define GPIO_FUNC85_IN_SEL_CFG_REG (0x3FF44284)
#define GPIO_FUNC86_IN_SEL_CFG_REG (0x3FF44288)
#define GPIO_FUNC87_IN_SEL_CFG_REG (0x3FF4428C)
#define GPIO_FUNC88_IN_SEL_CFG_REG (0x3FF44290)
#define GPIO_FUNC89_IN_SEL_CFG_REG (0x3FF44294)
#define GPIO_FUNC90_IN_SEL_CFG_REG (0x3FF44298)
#define GPIO_FUNC91_IN_SEL_CFG_REG (0x3FF4429C)
#define GPIO_FUNC92_IN_SEL_CFG_REG (0x3FF442A0)
#define GPIO_FUNC93_IN_SEL_CFG_REG (0x3FF442A4)
#define GPIO_FUNC94_IN_SEL_CFG_REG (0x3FF442A8)
#define GPIO_FUNC95_IN_SEL_CFG_REG (0x3FF442AC)
#define GPIO_FUNC96_IN_SEL_CFG_REG (0x3FF442B0)
#define GPIO_FUNC97_IN_SEL_CFG_REG (0x3FF442B4)
#define GPIO_FUNC98_IN_SEL_CFG_REG (0x3FF442B8)
#define GPIO_FUNC99_IN_SEL_CFG_REG (0x3FF442BC)
#define GPIO_FUNC100_IN_SEL_CFG_REG (0x3FF442C0)
#define GPIO_FUNC101_IN_SEL_CFG_REG (0x3FF442C4)
#define GPIO_FUNC102_IN_SEL_CFG_REG (0x3FF442C8)
#define GPIO_FUNC103_IN_SEL_CFG_REG (0x3FF442CC)
#define GPIO_FUNC104_IN_SEL_CFG_REG (0x3FF442D0)
#define GPIO_FUNC105_IN_SEL_CFG_REG (0x3FF442D4)
#define GPIO_FUNC106_IN_SEL_CFG_REG (0x3FF442D8)
#define GPIO_FUNC107_IN_SEL_CFG_REG (0x3FF442DC)
#define GPIO_FUNC108_IN_SEL_CFG_REG (0x3FF442E0)
#define GPIO_FUNC109_IN_SEL_CFG_REG (0x3FF442E4)
#define GPIO_FUNC110_IN_SEL_CFG_REG (0x3FF442E8)
#define GPIO_FUNC111_IN_SEL_CFG_REG (0x3FF442EC)
#define GPIO_FUNC112_IN_SEL_CFG_REG (0x3FF442F0)
#define GPIO_FUNC113_IN_SEL_CFG_REG (0x3FF442F4)
#define GPIO_FUNC114_IN_SEL_CFG_REG (0x3FF442F8)
#define GPIO_FUNC115_IN_SEL_CFG_REG (0x3FF442FC)
#define GPIO_FUNC116_IN_SEL_CFG_REG (0x3FF44300)
#define GPIO_FUNC117_IN_SEL_CFG_REG (0x3FF44304)
#define GPIO_FUNC118_IN_SEL_CFG_REG (0x3FF44308)
#define GPIO_FUNC119_IN_SEL_CFG_REG (0x3FF4430C)
#define GPIO_FUNC120_IN_SEL_CFG_REG (0x3FF44310)
#define GPIO_FUNC121_IN_SEL_CFG_REG (0x3FF44314)
#define GPIO_FUNC122_IN_SEL_CFG_REG (0x3FF44318)
#define GPIO_FUNC123_IN_SEL_CFG_REG (0x3FF4431C)
#define GPIO_FUNC124_IN_SEL_CFG_REG (0x3FF44320)
#define GPIO_FUNC125_IN_SEL_CFG_REG (0x3FF44324)
#define GPIO_FUNC126_IN_SEL_CFG_REG (0x3FF44328)
#define GPIO_FUNC127_IN_SEL_CFG_REG (0x3FF4432C)
#define GPIO_FUNC128_IN_SEL_CFG_REG (0x3FF44330)
#define GPIO_FUNC129_IN_SEL_CFG_REG (0x3FF44334)
#define GPIO_FUNC130_IN_SEL_CFG_REG (0x3FF44338)
#define GPIO_FUNC131_IN_SEL_CFG_REG (0x3FF4433C)
#define GPIO_FUNC132_IN_SEL_CFG_REG (0x3FF44340)
#define GPIO_FUNC133_IN_SEL_CFG_REG (0x3FF44344)
#define GPIO_FUNC134_IN_SEL_CFG_REG (0x3FF44348)
#define GPIO_FUNC135_IN_SEL_CFG_REG (0x3FF4434C)
#define GPIO_FUNC136_IN_SEL_CFG_REG (0x3FF44350)
#define GPIO_FUNC137_IN_SEL_CFG_REG (0x3FF44354)
#define GPIO_FUNC138_IN_SEL_CFG_REG (0x3FF44358)
#define GPIO_FUNC139_IN_SEL_CFG_REG (0x3FF4435C)
#define GPIO_FUNC140_IN_SEL_CFG_REG (0x3FF44360)
#define GPIO_FUNC141_IN_SEL_CFG_REG (0x3FF44364)
#define GPIO_FUNC142_IN_SEL_CFG_REG (0x3FF44368)
#define GPIO_FUNC143_IN_SEL_CFG_REG (0x3FF4436C)
#define GPIO_FUNC144_IN_SEL_CFG_REG (0x3FF44370)
#define GPIO_FUNC145_IN_SEL_CFG_REG (0x3FF44374)
#define GPIO_FUNC146_IN_SEL_CFG_REG (0x3FF44378)
#define GPIO_FUNC147_IN_SEL_CFG_REG (0x3FF4437C)
#define GPIO_FUNC148_IN_SEL_CFG_REG (0x3FF44380)
#define GPIO_FUNC149_IN_SEL_CFG_REG (0x3FF44384)
#define GPIO_FUNC150_IN_SEL_CFG_REG (0x3FF44388)
#define GPIO_FUNC151_IN_SEL_CFG_REG (0x3FF4438C)
#define GPIO_FUNC152_IN_SEL_CFG_REG (0x3FF44390)
#define GPIO_FUNC153_IN_SEL_CFG_REG (0x3FF44394)
#define GPIO_FUNC154_IN_SEL_CFG_REG (0x3FF44398)
#define GPIO_FUNC155_IN_SEL_CFG_REG (0x3FF4439C)
#define GPIO_FUNC156_IN_SEL_CFG_REG (0x3FF443A0)
#define GPIO_FUNC157_IN_SEL_CFG_REG (0x3FF443A4)
#define GPIO_FUNC158_IN_SEL_CFG_REG (0x3FF443A8)
#define GPIO_FUNC159_IN_SEL_CFG_REG (0x3FF443AC)
#define GPIO_FUNC160_IN_SEL_CFG_REG (0x3FF443B0)
#define GPIO_FUNC161_IN_SEL_CFG_REG (0x3FF443B4)
#define GPIO_FUNC162_IN_SEL_CFG_REG (0x3FF443B8)
#define GPIO_FUNC163_IN_SEL_CFG_REG (0x3FF443BC)
#define GPIO_FUNC164_IN_SEL_CFG_REG (0x3FF443C0)
#define GPIO_FUNC165_IN_SEL_CFG_REG (0x3FF443C4)
#define GPIO_FUNC166_IN_SEL_CFG_REG (0x3FF443C8)
#define GPIO_FUNC167_IN_SEL_CFG_REG (0x3FF443CC)
#define GPIO_FUNC168_IN_SEL_CFG_REG (0x3FF443D0)
#define GPIO_FUNC169_IN_SEL_CFG_REG (0x3FF443D4)
#define GPIO_FUNC170_IN_SEL_CFG_REG (0x3FF443D8)
#define GPIO_FUNC171_IN_SEL_CFG_REG (0x3FF443DC)
#define GPIO_FUNC172_IN_SEL_CFG_REG (0x3FF443E0)
#define GPIO_FUNC173_IN_SEL_CFG_REG (0x3FF443E4)
#define GPIO_FUNC174_IN_SEL_CFG_REG (0x3FF443E8)
#define GPIO_FUNC175_IN_SEL_CFG_REG (0x3FF443EC)
#define GPIO_FUNC176_IN_SEL_CFG_REG (0x3FF443F0)
#define GPIO_FUNC177_IN_SEL_CFG_REG (0x3FF443F4)
#define GPIO_FUNC178_IN_SEL_CFG_REG (0x3FF443F8)
#define GPIO_FUNC179_IN_SEL_CFG_REG (0x3FF443FC)
#define GPIO_FUNC180_IN_SEL_CFG_REG (0x3FF44400)
#define GPIO_FUNC181_IN_SEL_CFG_REG (0x3FF44404)
#define GPIO_FUNC182_IN_SEL_CFG_REG (0x3FF44408)
#define GPIO_FUNC183_IN_SEL_CFG_REG (0x3FF4440C)
#define GPIO_FUNC184_IN_SEL_CFG_REG (0x3FF44410)
#define GPIO_FUNC185_IN_SEL_CFG_REG (0x3FF44414)
#define GPIO_FUNC186_IN_SEL_CFG_REG (0x3FF44418)
#define GPIO_FUNC187_IN_SEL_CFG_REG (0x3FF4441C)
#define GPIO_FUNC188_IN_SEL_CFG_REG (0x3FF44420)
#define GPIO_FUNC189_IN_SEL_CFG_REG (0x3FF44424)
#define GPIO_FUNC190_IN_SEL_CFG_REG (0x3FF44428)
#define GPIO_FUNC191_IN_SEL_CFG_REG (0x3FF4442C)
#define GPIO_FUNC192_IN_SEL_CFG_REG (0x3FF44430)
#define GPIO_FUNC193_IN_SEL_CFG_REG (0x3FF44434)
#define GPIO_FUNC194_IN_SEL_CFG_REG (0x3FF44438)
#define GPIO_FUNC195_IN_SEL_CFG_REG (0x3FF4443C)
#define GPIO_FUNC196_IN_SEL_CFG_REG (0x3FF44440)
#define GPIO_FUNC197_IN_SEL_CFG_REG (0x3FF44444)
#define GPIO_FUNC198_IN_SEL_CFG_REG (0x3FF44448)
#define GPIO_FUNC199_IN_SEL_CFG_REG (0x3FF4444C)
#define GPIO_FUNC200_IN_SEL_CFG_REG (0x3FF44450)
#define GPIO_FUNC201_IN_SEL_CFG_REG (0x3FF44454)
#define GPIO_FUNC202_IN_SEL_CFG_REG (0x3FF44458)
#define GPIO_FUNC203_IN_SEL_CFG_REG (0x3FF4445C)
#define GPIO_FUNC204_IN_SEL_CFG_REG (0x3FF44460)
#define GPIO_FUNC205_IN_SEL_CFG_REG (0x3FF44464)
#define GPIO_FUNC206_IN_SEL_CFG_REG (0x3FF44468)
#define GPIO_FUNC207_IN_SEL_CFG_REG (0x3FF4446C)
#define GPIO_FUNC208_IN_SEL_CFG_REG (0x3FF44470)
#define GPIO_FUNC209_IN_SEL_CFG_REG (0x3FF44474)
#define GPIO_FUNC210_IN_SEL_CFG_REG (0x3FF44478)
#define GPIO_FUNC211_IN_SEL_CFG_REG (0x3FF4447C)
#define GPIO_FUNC212_IN_SEL_CFG_REG (0x3FF44480)
#define GPIO_FUNC213_IN_SEL_CFG_REG (0x3FF44484)
#define GPIO_FUNC214_IN_SEL_CFG_REG (0x3FF44488)
#define GPIO_FUNC215_IN_SEL_CFG_REG (0x3FF4448C)
#define GPIO_FUNC216_IN_SEL_CFG_REG (0x3FF44490)
#define GPIO_FUNC217_IN_SEL_CFG_REG (0x3FF44494)
#define GPIO_FUNC218_IN_SEL_CFG_REG (0x3FF44498)
#define GPIO_FUNC219_IN_SEL_CFG_REG (0x3FF4449C)
#define GPIO_FUNC220_IN_SEL_CFG_REG (0x3FF444A0)
#define GPIO_FUNC221_IN_SEL_CFG_REG (0x3FF444A4)
#define GPIO_FUNC222_IN_SEL_CFG_REG (0x3FF444A8)
#define GPIO_FUNC223_IN_SEL_CFG_REG (0x3FF444AC)
#define GPIO_FUNC224_IN_SEL_CFG_REG (0x3FF444B0)
#define GPIO_FUNC225_IN_SEL_CFG_REG (0x3FF444B4)
#define GPIO_FUNC226_IN_SEL_CFG_REG (0x3FF444B8)
#define GPIO_FUNC227_IN_SEL_CFG_REG (0x3FF444BC)
#define GPIO_FUNC228_IN_SEL_CFG_REG (0x3FF444C0)
#define GPIO_FUNC229_IN_SEL_CFG_REG (0x3FF444C4)
#define GPIO_FUNC230_IN_SEL_CFG_REG (0x3FF444C8)
#define GPIO_FUNC231_IN_SEL_CFG_REG (0x3FF444CC)
#define GPIO_FUNC232_IN_SEL_CFG_REG (0x3FF444D0)
#define GPIO_FUNC233_IN_SEL_CFG_REG (0x3FF444D4)
#define GPIO_FUNC234_IN_SEL_CFG_REG (0x3FF444D8)
#define GPIO_FUNC235_IN_SEL_CFG_REG (0x3FF444DC)
#define GPIO_FUNC236_IN_SEL_CFG_REG (0x3FF444E0)
#define GPIO_FUNC237_IN_SEL_CFG_REG (0x3FF444E4)
#define GPIO_FUNC238_IN_SEL_CFG_REG (0x3FF444E8)
#define GPIO_FUNC239_IN_SEL_CFG_REG (0x3FF444EC)
#define GPIO_FUNC240_IN_SEL_CFG_REG (0x3FF444F0)
#define GPIO_FUNC241_IN_SEL_CFG_REG (0x3FF444F4)
#define GPIO_FUNC242_IN_SEL_CFG_REG (0x3FF444F8)
#define GPIO_FUNC243_IN_SEL_CFG_REG (0x3FF444FC)
#define GPIO_FUNC244_IN_SEL_CFG_REG (0x3FF44500)
#define GPIO_FUNC245_IN_SEL_CFG_REG (0x3FF44504)
#define GPIO_FUNC246_IN_SEL_CFG_REG (0x3FF44508)
#define GPIO_FUNC247_IN_SEL_CFG_REG (0x3FF4450C)
#define GPIO_FUNC248_IN_SEL_CFG_REG (0x3FF44510)
#define GPIO_FUNC249_IN_SEL_CFG_REG (0x3FF44514)
#define GPIO_FUNC250_IN_SEL_CFG_REG (0x3FF44518)
#define GPIO_FUNC251_IN_SEL_CFG_REG (0x3FF4451C)
#define GPIO_FUNC252_IN_SEL_CFG_REG (0x3FF44520)
#define GPIO_FUNC253_IN_SEL_CFG_REG (0x3FF44524)
#define GPIO_FUNC254_IN_SEL_CFG_REG (0x3FF44528)
#define GPIO_FUNC255_IN_SEL_CFG_REG (0x3FF4452C)

#define GPIO_FUNC_OUT_SEL_CFG_OUT_SEL_Pos       (0)   // Selection Control for GPIO Output 
#define GPIO_FUNC_OUT_SEL_CFG_OUT_INV_SEL_Pos   (9)   // Invert Output Enable
#define GPIO_FUNC_OUT_SEL_CFG_OEN_SEL_Pos       (10)   // Output Select (0: GPIP_ENABLE_REG, 1: Peripheral)
#define GPIO_FUNC_OUT_SEL_CFG_OEN_IN_SEL_Pos    (11)  // Invert Output Enable Signal

#define GPIO_FUNC0_OUT_SEL_CFG_REG  (0x3FF44530)
#define GPIO_FUNC1_OUT_SEL_CFG_REG  (0x3FF44534)
#define GPIO_FUNC2_OUT_SEL_CFG_REG  (0x3FF44538)
#define GPIO_FUNC3_OUT_SEL_CFG_REG  (0x3FF4453C)
#define GPIO_FUNC4_OUT_SEL_CFG_REG  (0x3FF44540)
#define GPIO_FUNC5_OUT_SEL_CFG_REG  (0x3FF44544)
#define GPIO_FUNC6_OUT_SEL_CFG_REG  (0x3FF44548)
#define GPIO_FUNC7_OUT_SEL_CFG_REG  (0x3FF4454C)
#define GPIO_FUNC8_OUT_SEL_CFG_REG  (0x3FF44550)
#define GPIO_FUNC9_OUT_SEL_CFG_REG  (0x3FF44554)
#define GPIO_FUNC10_OUT_SEL_CFG_REG (0x3FF44558)
#define GPIO_FUNC11_OUT_SEL_CFG_REG (0x3FF4455C)
#define GPIO_FUNC12_OUT_SEL_CFG_REG (0x3FF44560)
#define GPIO_FUNC13_OUT_SEL_CFG_REG (0x3FF44564)
#define GPIO_FUNC14_OUT_SEL_CFG_REG (0x3FF44568)
#define GPIO_FUNC15_OUT_SEL_CFG_REG (0x3FF4456C)
#define GPIO_FUNC16_OUT_SEL_CFG_REG (0x3FF44570)
#define GPIO_FUNC17_OUT_SEL_CFG_REG (0x3FF44574)
#define GPIO_FUNC18_OUT_SEL_CFG_REG (0x3FF44578)
#define GPIO_FUNC19_OUT_SEL_CFG_REG (0x3FF4457C)
#define GPIO_FUNC20_OUT_SEL_CFG_REG (0x3FF44580)
#define GPIO_FUNC21_OUT_SEL_CFG_REG (0x3FF44584)
#define GPIO_FUNC22_OUT_SEL_CFG_REG (0x3FF44588)
#define GPIO_FUNC23_OUT_SEL_CFG_REG (0x3FF4458C)
#define GPIO_FUNC24_OUT_SEL_CFG_REG (0x3FF44590)
#define GPIO_FUNC25_OUT_SEL_CFG_REG (0x3FF44594)
#define GPIO_FUNC26_OUT_SEL_CFG_REG (0x3FF44598)
#define GPIO_FUNC27_OUT_SEL_CFG_REG (0x3FF4459C)
#define GPIO_FUNC28_OUT_SEL_CFG_REG (0x3FF445A0)
#define GPIO_FUNC29_OUT_SEL_CFG_REG (0x3FF445A4)
#define GPIO_FUNC30_OUT_SEL_CFG_REG (0x3FF445A8)
#define GPIO_FUNC31_OUT_SEL_CFG_REG (0x3FF445AC)
#define GPIO_FUNC32_OUT_SEL_CFG_REG (0x3FF445B0)
#define GPIO_FUNC33_OUT_SEL_CFG_REG (0x3FF445B4)
#define GPIO_FUNC34_OUT_SEL_CFG_REG (0x3FF445B8)
#define GPIO_FUNC35_OUT_SEL_CFG_REG (0x3FF445BC)
#define GPIO_FUNC36_OUT_SEL_CFG_REG (0x3FF445C0)
#define GPIO_FUNC37_OUT_SEL_CFG_REG (0x3FF445C4)
#define GPIO_FUNC38_OUT_SEL_CFG_REG (0x3FF445C8)
#define GPIO_FUNC39_OUT_SEL_CFG_REG (0x3FF445CC)


#endif // ESP32_REGISTERS_H
