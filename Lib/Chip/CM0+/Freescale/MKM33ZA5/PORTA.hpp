#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortaGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x40046080,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortaGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x40046084,0x00000000,0x00000000,unsigned>;
        ///Global Pin Write Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> gpwe{}; 
    }
    namespace PortaIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x400460a0,0x00000000,0x00000000,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
    namespace PortaPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046000,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046004,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046008,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004600c,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046010,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046014,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x40046018,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
    namespace PortaPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004601c,0xfef078f8,0x00000000,unsigned>;
        ///Pull Select
        enum class PsVal {
            v0=0x00000000,     ///<Internal pulldown resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
            v1=0x00000001,     ///<Internal pullup resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable field is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Pull Enable
        enum class PeVal {
            v0=0x00000000,     ///<Internal pullup or pulldown resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pullup or pulldown resistor is enabled on the corresponding pin, if the pin is configured as a digital input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::v1> v1{};
        }
        ///Slew Rate Enable
        enum class SreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if the pin is configured as a digital output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Pin Mux Control
        enum class MuxVal {
            v000=0x00000000,     ///<Pin disabled (analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip-specific).
            v011=0x00000003,     ///<Alternative 3 (chip-specific).
            v100=0x00000004,     ///<Alternative 4 (chip-specific).
            v101=0x00000005,     ///<Alternative 5 (chip-specific).
            v110=0x00000006,     ///<Alternative 6 (chip-specific).
            v111=0x00000007,     ///<Alternative 7 (chip-specific).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,MuxVal> mux{}; 
        namespace MuxValC{
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v000> v000{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v001> v001{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v010> v010{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v011> v011{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v100> v100{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v101> v101{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v110> v110{};
            constexpr Register::FieldValue<decltype(mux)::Type,MuxVal::v111> v111{};
        }
        ///Lock Register
        enum class LkVal {
            v0=0x00000000,     ///<Pin Control Register fields [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register fields [15:0] are locked and cannot be updated until the next system reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LkVal> lk{}; 
        namespace LkValC{
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lk)::Type,LkVal::v1> v1{};
        }
        ///Interrupt Configuration
        enum class IrqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA request disabled.
            v0001=0x00000001,     ///<DMA request on rising edge.
            v0010=0x00000002,     ///<DMA request on falling edge.
            v0011=0x00000003,     ///<DMA request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,IrqcVal> irqc{}; 
        namespace IrqcValC{
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(irqc)::Type,IrqcVal::v1100> v1100{};
        }
        ///Interrupt Status Flag
        enum class IsfVal {
            v0=0x00000000,     ///<Configured interrupt is not detected.
            v1=0x00000001,     ///<Configured interrupt is detected. If the pin is configured to generate a DMA request, then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer. Otherwise, the flag remains set until a logic one is written to the flag. If the pin is configured for a level sensitive interrupt and the pin remains asserted, then the flag is set again immediately after it is cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IsfVal> isf{}; 
        namespace IsfValC{
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(isf)::Type,IsfVal::v1> v1{};
        }
    }
}
