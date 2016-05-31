#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Clkctrl0Control{    ///<Module Control
        using Addr = Register::Address<0x4002d000,0xcffef8f8,0x00000000,unsigned>;
        ///AHB Clock Source Select. 
        enum class AhbselVal {
            lposc0=0x00000000,     ///<AHB clock source is the Low-Power Oscillator.
            lfosc0=0x00000001,     ///<AHB clock source is the Low-Frequency Oscillator.
            rtc0osc=0x00000002,     ///<AHB clock source is the RTC Oscillator.
            extosc0=0x00000003,     ///<AHB clock source is the External Oscillator.
            pll0osc=0x00000005,     ///<AHB clock source is the PLL.
            lposc0Div=0x00000006,     ///<AHB clock source is a divided version of the Low-Power Oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AhbselVal> ahbsel{}; 
        namespace AhbselValC{
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::lposc0> lposc0{};
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::lfosc0> lfosc0{};
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::rtc0osc> rtc0osc{};
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::extosc0> extosc0{};
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::pll0osc> pll0osc{};
            constexpr Register::FieldValue<decltype(ahbsel)::Type,AhbselVal::lposc0Div> lposc0Div{};
        }
        ///AHB Clock Divider. 
        enum class AhbdivVal {
            div1=0x00000000,     ///<AHB clock divided by 1.
            div2=0x00000001,     ///<AHB clock divided by 2.
            div4=0x00000002,     ///<AHB clock divided by 4.
            div8=0x00000003,     ///<AHB clock divided by 8.
            div16=0x00000004,     ///<AHB clock divided by 16.
            div32=0x00000005,     ///<AHB clock divided by 32.
            div64=0x00000006,     ///<AHB clock divided by 64.
            div128=0x00000007,     ///<AHB clock divided by 128.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,AhbdivVal> ahbdiv{}; 
        namespace AhbdivValC{
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div16> div16{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div32> div32{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div64> div64{};
            constexpr Register::FieldValue<decltype(ahbdiv)::Type,AhbdivVal::div128> div128{};
        }
        ///APB Clock Divider. 
        enum class ApbdivVal {
            div1=0x00000000,     ///<APB clock is the same as the AHB clock (divided by 1).
            div2=0x00000001,     ///<APB clock is the AHB clock divided by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ApbdivVal> apbdiv{}; 
        namespace ApbdivValC{
            constexpr Register::FieldValue<decltype(apbdiv)::Type,ApbdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(apbdiv)::Type,ApbdivVal::div2> div2{};
        }
        ///External Clock Edge Select. 
        enum class ExteselVal {
            bothEdges=0x00000000,     ///<External clock generated by both rising and falling edges of the external oscillator.
            risingOnly=0x00000001,     ///<External clock generated by only rising edges of the external oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ExteselVal> extesel{}; 
        namespace ExteselValC{
            constexpr Register::FieldValue<decltype(extesel)::Type,ExteselVal::bothEdges> bothEdges{};
            constexpr Register::FieldValue<decltype(extesel)::Type,ExteselVal::risingOnly> risingOnly{};
        }
        ///Oscillators Busy Flag. 
        enum class ObusyfVal {
            notSet=0x00000000,     ///<AHB and APB oscillators are not busy.
            set=0x00000001,     ///<AHB and APB oscillators are busy and the AHBSEL, AHBDIV, and APBDIV fields should not be modified.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ObusyfVal> obusyf{}; 
        namespace ObusyfValC{
            constexpr Register::FieldValue<decltype(obusyf)::Type,ObusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(obusyf)::Type,ObusyfVal::set> set{};
        }
    }
    namespace Clkctrl0Ahbclkg{    ///<AHB Clock Gate
        using Addr = Register::Address<0x4002d010,0xfffffff0,0x00000000,unsigned>;
        ///RAM Clock Enable. 
        enum class RamcenVal {
            disabled=0x00000000,     ///<Disable the AHB clock to the RAM.
            enabled=0x00000001,     ///<Enable the AHB clock to the RAM (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RamcenVal> ramcen{}; 
        namespace RamcenValC{
            constexpr Register::FieldValue<decltype(ramcen)::Type,RamcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ramcen)::Type,RamcenVal::enabled> enabled{};
        }
        ///DMA Controller Clock Enable. 
        enum class DmacenVal {
            disabled=0x00000000,     ///<Disable the AHB clock to the DMA Controller (default).
            enabled=0x00000001,     ///<Enable the AHB clock to the DMA Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DmacenVal> dmacen{}; 
        namespace DmacenValC{
            constexpr Register::FieldValue<decltype(dmacen)::Type,DmacenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dmacen)::Type,DmacenVal::enabled> enabled{};
        }
        ///Flash Clock Enable. 
        enum class FlashcenVal {
            disabled=0x00000000,     ///<Disable the AHB clock to the Flash.
            enabled=0x00000001,     ///<Enable the AHB clock to the Flash (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FlashcenVal> flashcen{}; 
        namespace FlashcenValC{
            constexpr Register::FieldValue<decltype(flashcen)::Type,FlashcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flashcen)::Type,FlashcenVal::enabled> enabled{};
        }
        ///EMIF Clock Enable. 
        enum class Emif0cenVal {
            disabled=0x00000000,     ///<Disable the AHB clock to the External Memory Interface (EMIF) (default).
            enabled=0x00000001,     ///<Enable the AHB clock to the External Memory Interface (EMIF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Emif0cenVal> emif0cen{}; 
        namespace Emif0cenValC{
            constexpr Register::FieldValue<decltype(emif0cen)::Type,Emif0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(emif0cen)::Type,Emif0cenVal::enabled> enabled{};
        }
    }
    namespace Clkctrl0Apbclkg0{    ///<APB Clock Gate 0
        using Addr = Register::Address<0x4002d020,0x90000000,0x00000000,unsigned>;
        ///PLL Module Clock Enable. 
        enum class Pll0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the PLL0 registers (default).
            enabled=0x00000001,     ///<Enable the APB clock to the PLL0 registers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pll0cenVal> pll0cen{}; 
        namespace Pll0cenValC{
            constexpr Register::FieldValue<decltype(pll0cen)::Type,Pll0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pll0cen)::Type,Pll0cenVal::enabled> enabled{};
        }
        ///Port Bank Module Clock Enable. 
        enum class Pb0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the Port Bank Modules (default).
            enabled=0x00000001,     ///<Enable the APB clock to the Port Bank Modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pb0cenVal> pb0cen{}; 
        namespace Pb0cenValC{
            constexpr Register::FieldValue<decltype(pb0cen)::Type,Pb0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pb0cen)::Type,Pb0cenVal::enabled> enabled{};
        }
        ///USART0 Module Clock Enable. 
        enum class Usart0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the USART0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the USART0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Usart0cenVal> usart0cen{}; 
        namespace Usart0cenValC{
            constexpr Register::FieldValue<decltype(usart0cen)::Type,Usart0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart0cen)::Type,Usart0cenVal::enabled> enabled{};
        }
        ///USART1 Module Clock Enable. 
        enum class Usart1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the USART1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the USART1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Usart1cenVal> usart1cen{}; 
        namespace Usart1cenValC{
            constexpr Register::FieldValue<decltype(usart1cen)::Type,Usart1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(usart1cen)::Type,Usart1cenVal::enabled> enabled{};
        }
        ///UART0 Module Clock Enable. 
        enum class Uart0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the UART0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the UART0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Uart0cenVal> uart0cen{}; 
        namespace Uart0cenValC{
            constexpr Register::FieldValue<decltype(uart0cen)::Type,Uart0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart0cen)::Type,Uart0cenVal::enabled> enabled{};
        }
        ///UART1 Module Clock Enable. 
        enum class Uart1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the UART1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the UART1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Uart1cenVal> uart1cen{}; 
        namespace Uart1cenValC{
            constexpr Register::FieldValue<decltype(uart1cen)::Type,Uart1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(uart1cen)::Type,Uart1cenVal::enabled> enabled{};
        }
        ///SPI0 Module Clock Enable. 
        enum class Spi0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SPI0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SPI0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Spi0cenVal> spi0cen{}; 
        namespace Spi0cenValC{
            constexpr Register::FieldValue<decltype(spi0cen)::Type,Spi0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi0cen)::Type,Spi0cenVal::enabled> enabled{};
        }
        ///SPI1 Module Clock Enable. 
        enum class Spi1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SPI1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SPI1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Spi1cenVal> spi1cen{}; 
        namespace Spi1cenValC{
            constexpr Register::FieldValue<decltype(spi1cen)::Type,Spi1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi1cen)::Type,Spi1cenVal::enabled> enabled{};
        }
        ///SPI2 Module Clock Enable. 
        enum class Spi2cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SPI2 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SPI2 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Spi2cenVal> spi2cen{}; 
        namespace Spi2cenValC{
            constexpr Register::FieldValue<decltype(spi2cen)::Type,Spi2cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(spi2cen)::Type,Spi2cenVal::enabled> enabled{};
        }
        ///I2C0 Module Clock Enable. 
        enum class I2c0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the I2C0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the I2C0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,I2c0cenVal> i2c0cen{}; 
        namespace I2c0cenValC{
            constexpr Register::FieldValue<decltype(i2c0cen)::Type,I2c0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c0cen)::Type,I2c0cenVal::enabled> enabled{};
        }
        ///I2C1 Module Clock Enable. 
        enum class I2c1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the I2C1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the I2C1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,I2c1cenVal> i2c1cen{}; 
        namespace I2c1cenValC{
            constexpr Register::FieldValue<decltype(i2c1cen)::Type,I2c1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2c1cen)::Type,I2c1cenVal::enabled> enabled{};
        }
        ///EPCA0 Module Clock Enable. 
        enum class Epca0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the EPCA0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the EPCA0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Epca0cenVal> epca0cen{}; 
        namespace Epca0cenValC{
            constexpr Register::FieldValue<decltype(epca0cen)::Type,Epca0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(epca0cen)::Type,Epca0cenVal::enabled> enabled{};
        }
        ///PCA0 Module Clock Enable. 
        enum class Pca0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the PCA0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the PCA0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Pca0cenVal> pca0cen{}; 
        namespace Pca0cenValC{
            constexpr Register::FieldValue<decltype(pca0cen)::Type,Pca0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pca0cen)::Type,Pca0cenVal::enabled> enabled{};
        }
        ///PCA1 Module Clock Enable. 
        enum class Pca1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the PCA1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the PCA1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Pca1cenVal> pca1cen{}; 
        namespace Pca1cenValC{
            constexpr Register::FieldValue<decltype(pca1cen)::Type,Pca1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pca1cen)::Type,Pca1cenVal::enabled> enabled{};
        }
        ///SSG0 Module Clock Enable. 
        enum class Ssg0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SSG0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SSG0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ssg0cenVal> ssg0cen{}; 
        namespace Ssg0cenValC{
            constexpr Register::FieldValue<decltype(ssg0cen)::Type,Ssg0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssg0cen)::Type,Ssg0cenVal::enabled> enabled{};
        }
        ///TIMER0 Module Clock Enable. 
        enum class Timer0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the TIMER0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the TIMER0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Timer0cenVal> timer0cen{}; 
        namespace Timer0cenValC{
            constexpr Register::FieldValue<decltype(timer0cen)::Type,Timer0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timer0cen)::Type,Timer0cenVal::enabled> enabled{};
        }
        ///TIMER1 Module Clock Enable. 
        enum class Timer1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the TIMER1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the TIMER1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Timer1cenVal> timer1cen{}; 
        namespace Timer1cenValC{
            constexpr Register::FieldValue<decltype(timer1cen)::Type,Timer1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(timer1cen)::Type,Timer1cenVal::enabled> enabled{};
        }
        ///SARADC0 Module Clock Enable. 
        enum class Adc0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SARADC0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SARADC0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Adc0cenVal> adc0cen{}; 
        namespace Adc0cenValC{
            constexpr Register::FieldValue<decltype(adc0cen)::Type,Adc0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adc0cen)::Type,Adc0cenVal::enabled> enabled{};
        }
        ///SARADC1 Module Clock Enable. 
        enum class Adc1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the SARADC1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the SARADC1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Adc1cenVal> adc1cen{}; 
        namespace Adc1cenValC{
            constexpr Register::FieldValue<decltype(adc1cen)::Type,Adc1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adc1cen)::Type,Adc1cenVal::enabled> enabled{};
        }
        ///Comparator 0 Module Clock Enable. 
        enum class Cmp0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the Comparator 0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the Comparator 0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp0cenVal> cmp0cen{}; 
        namespace Cmp0cenValC{
            constexpr Register::FieldValue<decltype(cmp0cen)::Type,Cmp0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0cen)::Type,Cmp0cenVal::enabled> enabled{};
        }
        ///Comparator 1 Module Clock Enable. 
        enum class Cmp1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the Comparator 1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the Comparator 1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Cmp1cenVal> cmp1cen{}; 
        namespace Cmp1cenValC{
            constexpr Register::FieldValue<decltype(cmp1cen)::Type,Cmp1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1cen)::Type,Cmp1cenVal::enabled> enabled{};
        }
        ///Capacitive Sensing (CAPSENSE0) Module Clock Enable. 
        enum class Cs0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the CAPSENSE0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the CAPSENSE0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Cs0cenVal> cs0cen{}; 
        namespace Cs0cenValC{
            constexpr Register::FieldValue<decltype(cs0cen)::Type,Cs0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cs0cen)::Type,Cs0cenVal::enabled> enabled{};
        }
        ///AES0 Module Clock Enable. 
        enum class Aes0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the AES0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the AES0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Aes0cenVal> aes0cen{}; 
        namespace Aes0cenValC{
            constexpr Register::FieldValue<decltype(aes0cen)::Type,Aes0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aes0cen)::Type,Aes0cenVal::enabled> enabled{};
        }
        ///CRC0 Module Clock Enable. 
        enum class Crc0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the CRC0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the CRC0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Crc0cenVal> crc0cen{}; 
        namespace Crc0cenValC{
            constexpr Register::FieldValue<decltype(crc0cen)::Type,Crc0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crc0cen)::Type,Crc0cenVal::enabled> enabled{};
        }
        ///IDAC0 Module Clock Enable. 
        enum class Idac0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the IDAC0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the IDAC0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Idac0cenVal> idac0cen{}; 
        namespace Idac0cenValC{
            constexpr Register::FieldValue<decltype(idac0cen)::Type,Idac0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idac0cen)::Type,Idac0cenVal::enabled> enabled{};
        }
        ///IDAC1 Module Clock Enable. 
        enum class Idac1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the IDAC1 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the IDAC1 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Idac1cenVal> idac1cen{}; 
        namespace Idac1cenValC{
            constexpr Register::FieldValue<decltype(idac1cen)::Type,Idac1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(idac1cen)::Type,Idac1cenVal::enabled> enabled{};
        }
        ///Low Power Timer (LPTIMER0) Module Clock Enable. 
        enum class Lpt0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the LPTIMER0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the LPTIMER0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Lpt0cenVal> lpt0cen{}; 
        namespace Lpt0cenValC{
            constexpr Register::FieldValue<decltype(lpt0cen)::Type,Lpt0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpt0cen)::Type,Lpt0cenVal::enabled> enabled{};
        }
        ///I2S0 Module Clock Enable. 
        enum class I2s0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the I2S0 Module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the I2S0 Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,I2s0cenVal> i2s0cen{}; 
        namespace I2s0cenValC{
            constexpr Register::FieldValue<decltype(i2s0cen)::Type,I2s0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(i2s0cen)::Type,I2s0cenVal::enabled> enabled{};
        }
        ///External Regulator Clock Enable. 
        enum class EvregcenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the External Regulator Module (EXTVREG0) (default).
            enabled=0x00000001,     ///<Enable the APB clock to the External Regulator Module (EXTVREG0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,EvregcenVal> evregcen{}; 
        namespace EvregcenValC{
            constexpr Register::FieldValue<decltype(evregcen)::Type,EvregcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(evregcen)::Type,EvregcenVal::enabled> enabled{};
        }
        ///Flash Controller Clock Enable. 
        enum class FlctrlcenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the Flash Controller Module (FLASHCTRL0) (default).
            enabled=0x00000001,     ///<Enable the APB clock to the Flash Controller Module (FLASHCTRL0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,FlctrlcenVal> flctrlcen{}; 
        namespace FlctrlcenValC{
            constexpr Register::FieldValue<decltype(flctrlcen)::Type,FlctrlcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(flctrlcen)::Type,FlctrlcenVal::enabled> enabled{};
        }
    }
    namespace Clkctrl0Apbclkg1{    ///<APB Clock Gate 1
        using Addr = Register::Address<0x4002d030,0xfffffff8,0x00000000,unsigned>;
        ///Miscellaneous 0 Clock Enable. 
        enum class Misc0cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the RSTSRC0, LOCK0, VMON0, VREG0, LDO0, VREF0, EXTOSC0, LPOSC0, EXTVREG0, IVC0 and RTC0 modules (default).
            enabled=0x00000001,     ///<Enable the APB clock to the  RSTSRC0, LOCK0, VMON0, VREG0, LDO0, VREF0, EXTOSC0, LPOSC0, EXTVREG0, IVC0 and RTC0 modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Misc0cenVal> misc0cen{}; 
        namespace Misc0cenValC{
            constexpr Register::FieldValue<decltype(misc0cen)::Type,Misc0cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(misc0cen)::Type,Misc0cenVal::enabled> enabled{};
        }
        ///Miscellaneous 1 Clock Enable. 
        enum class Misc1cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the  Watchdog Timer (WDTIMER0), EMIF0, and DMA Crossbar (DMAXBAR0) modules.
            enabled=0x00000001,     ///<Enable the APB clock to the  Watchdog Timer (WDTIMER0), EMIF0, and DMA Crossbar (DMAXBAR0) modules (default).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Misc1cenVal> misc1cen{}; 
        namespace Misc1cenValC{
            constexpr Register::FieldValue<decltype(misc1cen)::Type,Misc1cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(misc1cen)::Type,Misc1cenVal::enabled> enabled{};
        }
        ///Miscellaneous 2 Clock Enable. 
        enum class Misc2cenVal {
            disabled=0x00000000,     ///<Disable the APB clock to the  OSCVLDF flag in the EXTOSC module (default).
            enabled=0x00000001,     ///<Enable the APB clock to the  OSCVLDF flag in the EXTOSC module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Misc2cenVal> misc2cen{}; 
        namespace Misc2cenValC{
            constexpr Register::FieldValue<decltype(misc2cen)::Type,Misc2cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(misc2cen)::Type,Misc2cenVal::enabled> enabled{};
        }
    }
    namespace Clkctrl0Pm3cn{    ///<Power Mode 3 Clock Control
        using Addr = Register::Address<0x4002d040,0xfffefff8,0x00000000,unsigned>;
        ///Power Mode 3 Fast-Wake Clock Source. 
        enum class Pm3cselVal {
            lposc0=0x00000000,     ///<Power Mode 3 clock source is the Low-Power Oscillator.
            lfosc0=0x00000001,     ///<Power Mode 3 clock source is the Low-Frequency Oscillator.
            rtc0osc=0x00000002,     ///<Power Mode 3 clock source is the RTC Oscillator.
            extosc0=0x00000003,     ///<Power Mode 3 clock source is the External Oscillator.
            pll0osc=0x00000005,     ///<Power Mode 3 clock source is the PLL.
            lposc0Div=0x00000006,     ///<Power Mode 3 clock source is a divided version of the Low-Power Oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,Pm3cselVal> pm3csel{}; 
        namespace Pm3cselValC{
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::lposc0> lposc0{};
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::lfosc0> lfosc0{};
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::rtc0osc> rtc0osc{};
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::extosc0> extosc0{};
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::pll0osc> pll0osc{};
            constexpr Register::FieldValue<decltype(pm3csel)::Type,Pm3cselVal::lposc0Div> lposc0Div{};
        }
        ///Power Mode 3 Fast-Wake Clock Enable. 
        enum class Pm3cenVal {
            disabled=0x00000000,     ///<Disable the core clock when in Power Mode 3.
            enabled=0x00000001,     ///<The core clock is enabled and runs off the clock selected by PM3CSEL in Power Mode 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Pm3cenVal> pm3cen{}; 
        namespace Pm3cenValC{
            constexpr Register::FieldValue<decltype(pm3cen)::Type,Pm3cenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pm3cen)::Type,Pm3cenVal::enabled> enabled{};
        }
    }
}
