#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral BT0 
    namespace Bt8PwmTmcr{    ///< register PWM_TMCR 
        using Addr = Register::Address<0x4002540c,0xffff8080,0x00000000,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        /// bitfield RTGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        /// bitfield PMSK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt8PwmTmcr2{    ///< register PWM_TMCR2 
        using Addr = Register::Address<0x40025411,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt8PwmStc{    ///< register PWM_STC 
        using Addr = Register::Address<0x40025410,0xffffff88,0x00000000,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        /// bitfield DTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dtie{}; 
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        /// bitfield DTIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtir{}; 
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt8PwmPcsr{    ///< register PWM_PCSR 
        using Addr = Register::Address<0x40025400,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PwmPdut{    ///< register PWM_PDUT 
        using Addr = Register::Address<0x40025404,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PwmTmr{    ///< register PWM_TMR 
        using Addr = Register::Address<0x40025408,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PpgTmcr{    ///< register PPG_TMCR 
        using Addr = Register::Address<0x4002540c,0xffff8080,0x00000000,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        /// bitfield RTGEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rtgen{}; 
        /// bitfield PMSK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pmsk{}; 
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt8PpgTmcr2{    ///< register PPG_TMCR2 
        using Addr = Register::Address<0x40025411,0xfffffffd,0x00000000,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt8PpgStc{    ///< register PPG_STC 
        using Addr = Register::Address<0x40025410,0xffffffaa,0x00000000,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt8PpgPrll{    ///< register PPG_PRLL 
        using Addr = Register::Address<0x40025400,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PpgPrlh{    ///< register PPG_PRLH 
        using Addr = Register::Address<0x40025404,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PpgTmr{    ///< register PPG_TMR 
        using Addr = Register::Address<0x40025408,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8RtTmcr{    ///< register RT_TMCR 
        using Addr = Register::Address<0x4002540c,0xffff8c00,0x00000000,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> egs{}; 
        /// bitfield T32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        /// bitfield OSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> osel{}; 
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
        /// bitfield STRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> strg{}; 
    }
    namespace Bt8RtTmcr2{    ///< register RT_TMCR2 
        using Addr = Register::Address<0x40025411,0xffffff7e,0x00000000,unsigned char>;
        /// bitfield GATE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gate{}; 
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt8RtStc{    ///< register RT_STC 
        using Addr = Register::Address<0x40025410,0xffffffaa,0x00000000,unsigned char>;
        /// bitfield TGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tgie{}; 
        /// bitfield UDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udie{}; 
        /// bitfield TGIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tgir{}; 
        /// bitfield UDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> udir{}; 
    }
    namespace Bt8RtPcsr{    ///< register RT_PCSR 
        using Addr = Register::Address<0x40025400,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8RtTmr{    ///< register RT_TMR 
        using Addr = Register::Address<0x40025408,0xffffffff,0x00000000,unsigned>;
    }
    namespace Bt8PwcTmcr{    ///< register PWC_TMCR 
        using Addr = Register::Address<0x4002540c,0xffff8809,0x00000000,unsigned>;
        /// bitfield CKS2_0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> cks20{}; 
        /// bitfield EGS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> egs{}; 
        /// bitfield T32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> t32{}; 
        /// bitfield FMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> fmd{}; 
        /// bitfield MDSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdse{}; 
        /// bitfield CTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cten{}; 
    }
    namespace Bt8PwcTmcr2{    ///< register PWC_TMCR2 
        using Addr = Register::Address<0x40025411,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield CKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cks3{}; 
    }
    namespace Bt8PwcStc{    ///< register PWC_STC 
        using Addr = Register::Address<0x40025410,0xffffff2a,0x00000000,unsigned char>;
        /// bitfield ERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> err{}; 
        /// bitfield EDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> edie{}; 
        /// bitfield OVIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovie{}; 
        /// bitfield EDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> edir{}; 
        /// bitfield OVIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovir{}; 
    }
    namespace Bt8PwcDtbf{    ///< register PWC_DTBF 
        using Addr = Register::Address<0x40025404,0xffffffff,0x00000000,unsigned>;
    }
}
