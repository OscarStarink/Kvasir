#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Remote Control Signal Preprocessor (RMC)
    namespace RmcEn{    ///<RMC Enable Register
        using Addr = Register::Address<0x400e7000,0xfffffffe,0x00000000,unsigned>;
        ///RMCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcen{}; 
    }
    namespace RmcRen{    ///<RMC Receive Enable Register
        using Addr = Register::Address<0x400e7004,0xfffffffe,0x00000000,unsigned>;
        ///RMCREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcren{}; 
    }
    namespace RmcRbuf1{    ///<RMC Receive Data Buffer Register 1
        using Addr = Register::Address<0x400e7008,0x00000000,0x00000000,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrbuf{}; 
    }
    namespace RmcRbuf2{    ///<RMC Receive Data Buffer Register 2
        using Addr = Register::Address<0x400e700c,0x00000000,0x00000000,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrbuf{}; 
    }
    namespace RmcRbuf3{    ///<RMC Receive Data Buffer Register 3
        using Addr = Register::Address<0x400e7010,0xffffff00,0x00000000,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrbuf{}; 
    }
    namespace RmcRcr1{    ///<RMC Receive Control Register 1
        using Addr = Register::Address<0x400e7014,0x00000000,0x00000000,unsigned>;
        ///RMCLLMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rmcllmin{}; 
        ///RMCLLMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rmcllmax{}; 
        ///RMCLCMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rmclcmin{}; 
        ///RMCLCMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> rmclcmax{}; 
    }
    namespace RmcRcr2{    ///<RMC Receive Control Register 2
        using Addr = Register::Address<0x400e7018,0x3cff0000,0x00000000,unsigned>;
        ///RMCDMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rmcdmax{}; 
        ///RMCLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rmcll{}; 
        ///RMCPHM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmcphm{}; 
        ///RMCLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rmcld{}; 
        ///RMCEDIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rmcedien{}; 
        ///RMCLIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rmclien{}; 
    }
    namespace RmcRcr3{    ///<RMC Receive Control Register 3
        using Addr = Register::Address<0x400e701c,0xffff8080,0x00000000,unsigned>;
        ///RMCDATL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcdatl{}; 
        ///RMCDATH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rmcdath{}; 
    }
    namespace RmcRcr4{    ///<RMC Receive Control Register 4
        using Addr = Register::Address<0x400e7020,0xffffff70,0x00000000,unsigned>;
        ///RMCNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rmcnc{}; 
        ///RMCPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rmcpo{}; 
    }
    namespace RmcRstat{    ///<RMC Receive Status Register
        using Addr = Register::Address<0x400e7024,0xffff0f00,0x00000000,unsigned>;
        ///RMCRNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrnum{}; 
        ///RMCRLDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrldr{}; 
        ///RMCEDIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcedif{}; 
        ///RMCDMAXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcdmaxif{}; 
        ///RMCLOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcloif{}; 
        ///RMCRLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rmcrlif{}; 
    }
    namespace RmcEnd1{    ///<RMC Receive End Bit Number Register 1
        using Addr = Register::Address<0x400e7028,0xffffff80,0x00000000,unsigned>;
        ///RMCEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend1{}; 
    }
    namespace RmcEnd2{    ///<RMC Receive End Bit Number Register 2
        using Addr = Register::Address<0x400e702c,0xffffff80,0x00000000,unsigned>;
        ///RMCEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend2{}; 
    }
    namespace RmcEnd3{    ///<RMC Receive End Bit Number Register 3
        using Addr = Register::Address<0x400e7030,0xffffff80,0x00000000,unsigned>;
        ///RMCEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend3{}; 
    }
    namespace RmcFssel{    ///<RMC Frequency Selection Register
        using Addr = Register::Address<0x400e7034,0xfffffffe,0x00000000,unsigned>;
        ///RMCCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcclk{}; 
    }
}
