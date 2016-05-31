#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral EXBUS 
    namespace ExbusMode0{    ///< register MODE0 
        using Addr = Register::Address<0x4003f000,0xffffc400,0x00000000,unsigned>;
        /// bitfield MOEXEUP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> moexeup{}; 
        /// bitfield MPXCSOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mpxcsof{}; 
        /// bitfield MPXDOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mpxdoff{}; 
        /// bitfield ALEINV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> aleinv{}; 
        /// bitfield MPXMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mpxmode{}; 
        /// bitfield SHRTDOUT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> shrtdout{}; 
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rdy{}; 
        /// bitfield PAGE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> page{}; 
        /// bitfield NAND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nand{}; 
        /// bitfield WEOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> weoff{}; 
        /// bitfield RBMON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbmon{}; 
        /// bitfield WDTH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wdth{}; 
    }
    namespace ExbusMode1{    ///< register MODE1 
        using Addr = Register::Address<0x4003f004,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode2{    ///< register MODE2 
        using Addr = Register::Address<0x4003f008,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode3{    ///< register MODE3 
        using Addr = Register::Address<0x4003f00c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode4{    ///< register MODE4 
        using Addr = Register::Address<0x4003f010,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode5{    ///< register MODE5 
        using Addr = Register::Address<0x4003f014,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode6{    ///< register MODE6 
        using Addr = Register::Address<0x4003f018,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusMode7{    ///< register MODE7 
        using Addr = Register::Address<0x4003f01c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim0{    ///< register TIM0 
        using Addr = Register::Address<0x4003f020,0x00000000,0x00000000,unsigned>;
        /// bitfield WIDLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> widlc{}; 
        /// bitfield WWEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wwec{}; 
        /// bitfield WADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> wadc{}; 
        /// bitfield WACC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wacc{}; 
        /// bitfield RIDLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ridlc{}; 
        /// bitfield FRADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fradc{}; 
        /// bitfield RADC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> radc{}; 
        /// bitfield RACC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> racc{}; 
    }
    namespace ExbusTim1{    ///< register TIM1 
        using Addr = Register::Address<0x4003f024,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim2{    ///< register TIM2 
        using Addr = Register::Address<0x4003f028,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim3{    ///< register TIM3 
        using Addr = Register::Address<0x4003f02c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim4{    ///< register TIM4 
        using Addr = Register::Address<0x4003f030,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim5{    ///< register TIM5 
        using Addr = Register::Address<0x4003f034,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim6{    ///< register TIM6 
        using Addr = Register::Address<0x4003f038,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusTim7{    ///< register TIM7 
        using Addr = Register::Address<0x4003f03c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusArea0{    ///< register AREA0 
        using Addr = Register::Address<0x4003f040,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea1{    ///< register AREA1 
        using Addr = Register::Address<0x4003f044,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea2{    ///< register AREA2 
        using Addr = Register::Address<0x4003f048,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea3{    ///< register AREA3 
        using Addr = Register::Address<0x4003f04c,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea4{    ///< register AREA4 
        using Addr = Register::Address<0x4003f050,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea5{    ///< register AREA5 
        using Addr = Register::Address<0x4003f054,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea6{    ///< register AREA6 
        using Addr = Register::Address<0x4003f058,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusArea7{    ///< register AREA7 
        using Addr = Register::Address<0x4003f05c,0xff80ff00,0x00000000,unsigned>;
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace ExbusAtim0{    ///< register ATIM0 
        using Addr = Register::Address<0x4003f060,0xfffff000,0x00000000,unsigned>;
        /// bitfield ALEW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> alew{}; 
        /// bitfield ALES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ales{}; 
        /// bitfield ALC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> alc{}; 
    }
    namespace ExbusAtim1{    ///< register ATIM1 
        using Addr = Register::Address<0x4003f064,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim2{    ///< register ATIM2 
        using Addr = Register::Address<0x4003f068,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim3{    ///< register ATIM3 
        using Addr = Register::Address<0x4003f06c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim4{    ///< register ATIM4 
        using Addr = Register::Address<0x4003f070,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim5{    ///< register ATIM5 
        using Addr = Register::Address<0x4003f074,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim6{    ///< register ATIM6 
        using Addr = Register::Address<0x4003f078,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusAtim7{    ///< register ATIM7 
        using Addr = Register::Address<0x4003f07c,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExbusSmode{    ///< register SMODE 
        using Addr = Register::Address<0x4003f100,0xfffe00c8,0x00000000,unsigned>;
        /// bitfield MSDCLKOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> msdclkoff{}; 
        /// bitfield BASEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> basel{}; 
        /// bitfield RASEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rasel{}; 
        /// bitfield CASEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> casel{}; 
        /// bitfield ROFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> roff{}; 
        /// bitfield PDON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdon{}; 
        /// bitfield SDON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sdon{}; 
    }
    namespace ExbusReftim{    ///< register REFTIM 
        using Addr = Register::Address<0x4003f104,0xfe000000,0x00000000,unsigned>;
        /// bitfield PREF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pref{}; 
        /// bitfield NREF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nref{}; 
        /// bitfield REFC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> refc{}; 
    }
    namespace ExbusPwrdwn{    ///< register PWRDWN 
        using Addr = Register::Address<0x4003f108,0xffff0000,0x00000000,unsigned>;
        /// bitfield PDC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pdc{}; 
    }
    namespace ExbusSdtim{    ///< register SDTIM 
        using Addr = Register::Address<0x4003f10c,0xfc00000c,0x00000000,unsigned>;
        /// bitfield TDPL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tdpl{}; 
        /// bitfield TREFC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trefc{}; 
        /// bitfield TRAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tras{}; 
        /// bitfield TRCD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trcd{}; 
        /// bitfield TRP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trp{}; 
        /// bitfield TRC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> trc{}; 
        /// bitfield CL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cl{}; 
    }
    namespace ExbusSdcmd{    ///< register SDCMD 
        using Addr = Register::Address<0x4003f110,0x7fe00000,0x00000000,unsigned>;
        /// bitfield PEND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        /// bitfield SDCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sdcke{}; 
        /// bitfield SDCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sdcs{}; 
        /// bitfield SDRAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sdras{}; 
        /// bitfield SDCAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sdcas{}; 
        /// bitfield SDWE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sdwe{}; 
        /// bitfield SDAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sdad{}; 
    }
    namespace ExbusMemcerr{    ///< register MEMCERR 
        using Addr = Register::Address<0x4003f200,0xfffffff0,0x00000000,unsigned>;
        /// bitfield SDION 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdion{}; 
        /// bitfield SFION 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sfion{}; 
        /// bitfield SDER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sder{}; 
        /// bitfield SFER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sfer{}; 
    }
    namespace ExbusDclkr{    ///< register DCLKR 
        using Addr = Register::Address<0x4003f300,0xffffffe0,0x00000000,unsigned>;
        /// bitfield MCLKON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mclkon{}; 
        /// bitfield MDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mdiv{}; 
    }
    namespace ExbusEst{    ///< register EST 
        using Addr = Register::Address<0x4003f304,0xfffffffe,0x00000000,unsigned>;
        /// bitfield WERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> werr{}; 
    }
    namespace ExbusWead{    ///< register WEAD 
        using Addr = Register::Address<0x4003f308,0x00000000,0x00000000,unsigned>;
        /// bitfield ADDR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
    }
    namespace ExbusEsclr{    ///< register ESCLR 
        using Addr = Register::Address<0x4003f30c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield WERRCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> werrclr{}; 
    }
    namespace ExbusAmode{    ///< register AMODE 
        using Addr = Register::Address<0x4003f310,0xfffffffe,0x00000000,unsigned>;
        /// bitfield WAEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waen{}; 
    }
}
