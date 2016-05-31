#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Micro Trace Buffer
    namespace MtbPosition{    ///<MTB Position Register
        using Addr = Register::Address<0xf0000000,0x00000003,0x00000000,unsigned>;
        ///WRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrap{}; 
        ///Trace Packet Address Pointer[28:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> pointer{}; 
    }
    namespace MtbMaster{    ///<MTB Master Register
        using Addr = Register::Address<0xf0000004,0x7ffffc00,0x00000000,unsigned>;
        ///Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
        ///Trace Start Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tstarten{}; 
        ///Trace Stop Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tstopen{}; 
        ///Special Function Register Write Privilege
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sfrwpriv{}; 
        ///RAM Privilege
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rampriv{}; 
        ///Halt Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> haltreq{}; 
        ///Main Trace Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace MtbFlow{    ///<MTB Flow Register
        using Addr = Register::Address<0xf0000008,0x00000004,0x00000000,unsigned>;
        ///AUTOSTOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> autostop{}; 
        ///AUTOHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autohalt{}; 
        ///WATERMARK[28:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> watermark{}; 
    }
    namespace MtbBase{    ///<MTB Base Register
        using Addr = Register::Address<0xf000000c,0x00000000,0x00000000,unsigned>;
        ///BASEADDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> baseaddr{}; 
    }
    namespace MtbModectrl{    ///<Integration Mode Control Register
        using Addr = Register::Address<0xf0000f00,0x00000000,0x00000000,unsigned>;
        ///MODECTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> modectrl{}; 
    }
    namespace MtbTagset{    ///<Claim TAG Set Register
        using Addr = Register::Address<0xf0000fa0,0x00000000,0x00000000,unsigned>;
        ///TAGSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tagset{}; 
    }
    namespace MtbTagclear{    ///<Claim TAG Clear Register
        using Addr = Register::Address<0xf0000fa4,0x00000000,0x00000000,unsigned>;
        ///TAGCLEAR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tagclear{}; 
    }
    namespace MtbLockaccess{    ///<Lock Access Register
        using Addr = Register::Address<0xf0000fb0,0x00000000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lockaccess{}; 
    }
    namespace MtbLockstat{    ///<Lock Status Register
        using Addr = Register::Address<0xf0000fb4,0x00000000,0x00000000,unsigned>;
        ///LOCKSTAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lockstat{}; 
    }
    namespace MtbAuthstat{    ///<Authentication Status Register
        using Addr = Register::Address<0xf0000fb8,0xfffffff0,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bit0{}; 
        ///BIT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bit1{}; 
        ///BIT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bit2{}; 
        ///BIT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bit3{}; 
    }
    namespace MtbDevicearch{    ///<Device Architecture Register
        using Addr = Register::Address<0xf0000fbc,0x00000000,0x00000000,unsigned>;
        ///DEVICEARCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> devicearch{}; 
    }
    namespace MtbDevicecfg{    ///<Device Configuration Register
        using Addr = Register::Address<0xf0000fc8,0x00000000,0x00000000,unsigned>;
        ///DEVICECFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> devicecfg{}; 
    }
    namespace MtbDevicetypid{    ///<Device Type Identifier Register
        using Addr = Register::Address<0xf0000fcc,0x00000000,0x00000000,unsigned>;
        ///DEVICETYPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> devicetypid{}; 
    }
    namespace MtbPeriphid4{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd0,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid5{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd4,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid6{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fd8,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid7{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fdc,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid0{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe0,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid1{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe4,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid2{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fe8,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbPeriphid3{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0000fec,0x00000000,0x00000000,unsigned>;
        ///PERIPHID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> periphid{}; 
    }
    namespace MtbCompid0{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff0,0x00000000,0x00000000,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> compid{}; 
    }
    namespace MtbCompid1{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff4,0x00000000,0x00000000,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> compid{}; 
    }
    namespace MtbCompid2{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ff8,0x00000000,0x00000000,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> compid{}; 
    }
    namespace MtbCompid3{    ///<Component ID Register
        using Addr = Register::Address<0xf0000ffc,0x00000000,0x00000000,unsigned>;
        ///Component ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> compid{}; 
    }
}
