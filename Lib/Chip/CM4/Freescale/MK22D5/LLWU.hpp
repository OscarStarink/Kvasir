#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low leakage wakeup unit
    namespace LlwuPe1{    ///<LLWU Pin Enable 1 register
        using Addr = Register::Address<0x4007c000,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable For LLWU_P0
        enum class wupe0Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe0ValC{
            constexpr MPL::Value<wupe0Val,wupe0Val::v00> v00{};
            constexpr MPL::Value<wupe0Val,wupe0Val::v01> v01{};
            constexpr MPL::Value<wupe0Val,wupe0Val::v10> v10{};
            constexpr MPL::Value<wupe0Val,wupe0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wupe0Val> wupe0{}; 
        ///Wakeup Pin Enable For LLWU_P1
        enum class wupe1Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe1ValC{
            constexpr MPL::Value<wupe1Val,wupe1Val::v00> v00{};
            constexpr MPL::Value<wupe1Val,wupe1Val::v01> v01{};
            constexpr MPL::Value<wupe1Val,wupe1Val::v10> v10{};
            constexpr MPL::Value<wupe1Val,wupe1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,wupe1Val> wupe1{}; 
        ///Wakeup Pin Enable For LLWU_P2
        enum class wupe2Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe2ValC{
            constexpr MPL::Value<wupe2Val,wupe2Val::v00> v00{};
            constexpr MPL::Value<wupe2Val,wupe2Val::v01> v01{};
            constexpr MPL::Value<wupe2Val,wupe2Val::v10> v10{};
            constexpr MPL::Value<wupe2Val,wupe2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,wupe2Val> wupe2{}; 
        ///Wakeup Pin Enable For LLWU_P3
        enum class wupe3Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe3ValC{
            constexpr MPL::Value<wupe3Val,wupe3Val::v00> v00{};
            constexpr MPL::Value<wupe3Val,wupe3Val::v01> v01{};
            constexpr MPL::Value<wupe3Val,wupe3Val::v10> v10{};
            constexpr MPL::Value<wupe3Val,wupe3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,wupe3Val> wupe3{}; 
    }
    namespace LlwuPe2{    ///<LLWU Pin Enable 2 register
        using Addr = Register::Address<0x4007c001,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable For LLWU_P4
        enum class wupe4Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe4ValC{
            constexpr MPL::Value<wupe4Val,wupe4Val::v00> v00{};
            constexpr MPL::Value<wupe4Val,wupe4Val::v01> v01{};
            constexpr MPL::Value<wupe4Val,wupe4Val::v10> v10{};
            constexpr MPL::Value<wupe4Val,wupe4Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wupe4Val> wupe4{}; 
        ///Wakeup Pin Enable For LLWU_P5
        enum class wupe5Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe5ValC{
            constexpr MPL::Value<wupe5Val,wupe5Val::v00> v00{};
            constexpr MPL::Value<wupe5Val,wupe5Val::v01> v01{};
            constexpr MPL::Value<wupe5Val,wupe5Val::v10> v10{};
            constexpr MPL::Value<wupe5Val,wupe5Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,wupe5Val> wupe5{}; 
        ///Wakeup Pin Enable For LLWU_P6
        enum class wupe6Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe6ValC{
            constexpr MPL::Value<wupe6Val,wupe6Val::v00> v00{};
            constexpr MPL::Value<wupe6Val,wupe6Val::v01> v01{};
            constexpr MPL::Value<wupe6Val,wupe6Val::v10> v10{};
            constexpr MPL::Value<wupe6Val,wupe6Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,wupe6Val> wupe6{}; 
        ///Wakeup Pin Enable For LLWU_P7
        enum class wupe7Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe7ValC{
            constexpr MPL::Value<wupe7Val,wupe7Val::v00> v00{};
            constexpr MPL::Value<wupe7Val,wupe7Val::v01> v01{};
            constexpr MPL::Value<wupe7Val,wupe7Val::v10> v10{};
            constexpr MPL::Value<wupe7Val,wupe7Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,wupe7Val> wupe7{}; 
    }
    namespace LlwuPe3{    ///<LLWU Pin Enable 3 register
        using Addr = Register::Address<0x4007c002,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable For LLWU_P8
        enum class wupe8Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe8ValC{
            constexpr MPL::Value<wupe8Val,wupe8Val::v00> v00{};
            constexpr MPL::Value<wupe8Val,wupe8Val::v01> v01{};
            constexpr MPL::Value<wupe8Val,wupe8Val::v10> v10{};
            constexpr MPL::Value<wupe8Val,wupe8Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wupe8Val> wupe8{}; 
        ///Wakeup Pin Enable For LLWU_P9
        enum class wupe9Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe9ValC{
            constexpr MPL::Value<wupe9Val,wupe9Val::v00> v00{};
            constexpr MPL::Value<wupe9Val,wupe9Val::v01> v01{};
            constexpr MPL::Value<wupe9Val,wupe9Val::v10> v10{};
            constexpr MPL::Value<wupe9Val,wupe9Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,wupe9Val> wupe9{}; 
        ///Wakeup Pin Enable For LLWU_P10
        enum class wupe10Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe10ValC{
            constexpr MPL::Value<wupe10Val,wupe10Val::v00> v00{};
            constexpr MPL::Value<wupe10Val,wupe10Val::v01> v01{};
            constexpr MPL::Value<wupe10Val,wupe10Val::v10> v10{};
            constexpr MPL::Value<wupe10Val,wupe10Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,wupe10Val> wupe10{}; 
        ///Wakeup Pin Enable For LLWU_P11
        enum class wupe11Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe11ValC{
            constexpr MPL::Value<wupe11Val,wupe11Val::v00> v00{};
            constexpr MPL::Value<wupe11Val,wupe11Val::v01> v01{};
            constexpr MPL::Value<wupe11Val,wupe11Val::v10> v10{};
            constexpr MPL::Value<wupe11Val,wupe11Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,wupe11Val> wupe11{}; 
    }
    namespace LlwuPe4{    ///<LLWU Pin Enable 4 register
        using Addr = Register::Address<0x4007c003,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable For LLWU_P12
        enum class wupe12Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe12ValC{
            constexpr MPL::Value<wupe12Val,wupe12Val::v00> v00{};
            constexpr MPL::Value<wupe12Val,wupe12Val::v01> v01{};
            constexpr MPL::Value<wupe12Val,wupe12Val::v10> v10{};
            constexpr MPL::Value<wupe12Val,wupe12Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wupe12Val> wupe12{}; 
        ///Wakeup Pin Enable For LLWU_P13
        enum class wupe13Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe13ValC{
            constexpr MPL::Value<wupe13Val,wupe13Val::v00> v00{};
            constexpr MPL::Value<wupe13Val,wupe13Val::v01> v01{};
            constexpr MPL::Value<wupe13Val,wupe13Val::v10> v10{};
            constexpr MPL::Value<wupe13Val,wupe13Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,wupe13Val> wupe13{}; 
        ///Wakeup Pin Enable For LLWU_P14
        enum class wupe14Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe14ValC{
            constexpr MPL::Value<wupe14Val,wupe14Val::v00> v00{};
            constexpr MPL::Value<wupe14Val,wupe14Val::v01> v01{};
            constexpr MPL::Value<wupe14Val,wupe14Val::v10> v10{};
            constexpr MPL::Value<wupe14Val,wupe14Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,wupe14Val> wupe14{}; 
        ///Wakeup Pin Enable For LLWU_P15
        enum class wupe15Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        namespace wupe15ValC{
            constexpr MPL::Value<wupe15Val,wupe15Val::v00> v00{};
            constexpr MPL::Value<wupe15Val,wupe15Val::v01> v01{};
            constexpr MPL::Value<wupe15Val,wupe15Val::v10> v10{};
            constexpr MPL::Value<wupe15Val,wupe15Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,wupe15Val> wupe15{}; 
    }
    namespace LlwuMe{    ///<LLWU Module Enable register
        using Addr = Register::Address<0x4007c004,0xffffff00,0,unsigned char>;
        ///Wakeup Module Enable For Module 0
        enum class wume0Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume0ValC{
            constexpr MPL::Value<wume0Val,wume0Val::v0> v0{};
            constexpr MPL::Value<wume0Val,wume0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wume0Val> wume0{}; 
        ///Wakeup Module Enable for Module 1
        enum class wume1Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume1ValC{
            constexpr MPL::Value<wume1Val,wume1Val::v0> v0{};
            constexpr MPL::Value<wume1Val,wume1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wume1Val> wume1{}; 
        ///Wakeup Module Enable For Module 2
        enum class wume2Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume2ValC{
            constexpr MPL::Value<wume2Val,wume2Val::v0> v0{};
            constexpr MPL::Value<wume2Val,wume2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wume2Val> wume2{}; 
        ///Wakeup Module Enable For Module 3
        enum class wume3Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume3ValC{
            constexpr MPL::Value<wume3Val,wume3Val::v0> v0{};
            constexpr MPL::Value<wume3Val,wume3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wume3Val> wume3{}; 
        ///Wakeup Module Enable For Module 4
        enum class wume4Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume4ValC{
            constexpr MPL::Value<wume4Val,wume4Val::v0> v0{};
            constexpr MPL::Value<wume4Val,wume4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wume4Val> wume4{}; 
        ///Wakeup Module Enable For Module 5
        enum class wume5Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume5ValC{
            constexpr MPL::Value<wume5Val,wume5Val::v0> v0{};
            constexpr MPL::Value<wume5Val,wume5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wume5Val> wume5{}; 
        ///Wakeup Module Enable For Module 6
        enum class wume6Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume6ValC{
            constexpr MPL::Value<wume6Val,wume6Val::v0> v0{};
            constexpr MPL::Value<wume6Val,wume6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wume6Val> wume6{}; 
        ///Wakeup Module Enable For Module 7
        enum class wume7Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        namespace wume7ValC{
            constexpr MPL::Value<wume7Val,wume7Val::v0> v0{};
            constexpr MPL::Value<wume7Val,wume7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wume7Val> wume7{}; 
    }
    namespace LlwuF1{    ///<LLWU Flag 1 register
        using Addr = Register::Address<0x4007c005,0xffffff00,0,unsigned char>;
        ///Wakeup Flag For LLWU_P0
        enum class wuf0Val {
            v0=0x00000000,     ///<LLWU_P0 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P0 input was a wakeup source
        };
        namespace wuf0ValC{
            constexpr MPL::Value<wuf0Val,wuf0Val::v0> v0{};
            constexpr MPL::Value<wuf0Val,wuf0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wuf0Val> wuf0{}; 
        ///Wakeup Flag For LLWU_P1
        enum class wuf1Val {
            v0=0x00000000,     ///<LLWU_P1 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P1 input was a wakeup source
        };
        namespace wuf1ValC{
            constexpr MPL::Value<wuf1Val,wuf1Val::v0> v0{};
            constexpr MPL::Value<wuf1Val,wuf1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wuf1Val> wuf1{}; 
        ///Wakeup Flag For LLWU_P2
        enum class wuf2Val {
            v0=0x00000000,     ///<LLWU_P2 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P2 input was a wakeup source
        };
        namespace wuf2ValC{
            constexpr MPL::Value<wuf2Val,wuf2Val::v0> v0{};
            constexpr MPL::Value<wuf2Val,wuf2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wuf2Val> wuf2{}; 
        ///Wakeup Flag For LLWU_P3
        enum class wuf3Val {
            v0=0x00000000,     ///<LLWU_P3 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P3 input was a wakeup source
        };
        namespace wuf3ValC{
            constexpr MPL::Value<wuf3Val,wuf3Val::v0> v0{};
            constexpr MPL::Value<wuf3Val,wuf3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wuf3Val> wuf3{}; 
        ///Wakeup Flag For LLWU_P4
        enum class wuf4Val {
            v0=0x00000000,     ///<LLWU_P4 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P4 input was a wakeup source
        };
        namespace wuf4ValC{
            constexpr MPL::Value<wuf4Val,wuf4Val::v0> v0{};
            constexpr MPL::Value<wuf4Val,wuf4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wuf4Val> wuf4{}; 
        ///Wakeup Flag For LLWU_P5
        enum class wuf5Val {
            v0=0x00000000,     ///<LLWU_P5 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P5 input was a wakeup source
        };
        namespace wuf5ValC{
            constexpr MPL::Value<wuf5Val,wuf5Val::v0> v0{};
            constexpr MPL::Value<wuf5Val,wuf5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wuf5Val> wuf5{}; 
        ///Wakeup Flag For LLWU_P6
        enum class wuf6Val {
            v0=0x00000000,     ///<LLWU_P6 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P6 input was a wakeup source
        };
        namespace wuf6ValC{
            constexpr MPL::Value<wuf6Val,wuf6Val::v0> v0{};
            constexpr MPL::Value<wuf6Val,wuf6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wuf6Val> wuf6{}; 
        ///Wakeup Flag For LLWU_P7
        enum class wuf7Val {
            v0=0x00000000,     ///<LLWU_P7 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P7 input was a wakeup source
        };
        namespace wuf7ValC{
            constexpr MPL::Value<wuf7Val,wuf7Val::v0> v0{};
            constexpr MPL::Value<wuf7Val,wuf7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wuf7Val> wuf7{}; 
    }
    namespace LlwuF2{    ///<LLWU Flag 2 register
        using Addr = Register::Address<0x4007c006,0xffffff00,0,unsigned char>;
        ///Wakeup Flag For LLWU_P8
        enum class wuf8Val {
            v0=0x00000000,     ///<LLWU_P8 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P8 input was a wakeup source
        };
        namespace wuf8ValC{
            constexpr MPL::Value<wuf8Val,wuf8Val::v0> v0{};
            constexpr MPL::Value<wuf8Val,wuf8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wuf8Val> wuf8{}; 
        ///Wakeup Flag For LLWU_P9
        enum class wuf9Val {
            v0=0x00000000,     ///<LLWU_P9 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P9 input was a wakeup source
        };
        namespace wuf9ValC{
            constexpr MPL::Value<wuf9Val,wuf9Val::v0> v0{};
            constexpr MPL::Value<wuf9Val,wuf9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wuf9Val> wuf9{}; 
        ///Wakeup Flag For LLWU_P10
        enum class wuf10Val {
            v0=0x00000000,     ///<LLWU_P10 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P10 input was a wakeup source
        };
        namespace wuf10ValC{
            constexpr MPL::Value<wuf10Val,wuf10Val::v0> v0{};
            constexpr MPL::Value<wuf10Val,wuf10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wuf10Val> wuf10{}; 
        ///Wakeup Flag For LLWU_P11
        enum class wuf11Val {
            v0=0x00000000,     ///<LLWU_P11 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P11 input was a wakeup source
        };
        namespace wuf11ValC{
            constexpr MPL::Value<wuf11Val,wuf11Val::v0> v0{};
            constexpr MPL::Value<wuf11Val,wuf11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wuf11Val> wuf11{}; 
        ///Wakeup Flag For LLWU_P12
        enum class wuf12Val {
            v0=0x00000000,     ///<LLWU_P12 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P12 input was a wakeup source
        };
        namespace wuf12ValC{
            constexpr MPL::Value<wuf12Val,wuf12Val::v0> v0{};
            constexpr MPL::Value<wuf12Val,wuf12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,wuf12Val> wuf12{}; 
        ///Wakeup Flag For LLWU_P13
        enum class wuf13Val {
            v0=0x00000000,     ///<LLWU_P13 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P13 input was a wakeup source
        };
        namespace wuf13ValC{
            constexpr MPL::Value<wuf13Val,wuf13Val::v0> v0{};
            constexpr MPL::Value<wuf13Val,wuf13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wuf13Val> wuf13{}; 
        ///Wakeup Flag For LLWU_P14
        enum class wuf14Val {
            v0=0x00000000,     ///<LLWU_P14 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P14 input was a wakeup source
        };
        namespace wuf14ValC{
            constexpr MPL::Value<wuf14Val,wuf14Val::v0> v0{};
            constexpr MPL::Value<wuf14Val,wuf14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,wuf14Val> wuf14{}; 
        ///Wakeup Flag For LLWU_P15
        enum class wuf15Val {
            v0=0x00000000,     ///<LLWU_P15 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P15 input was a wakeup source
        };
        namespace wuf15ValC{
            constexpr MPL::Value<wuf15Val,wuf15Val::v0> v0{};
            constexpr MPL::Value<wuf15Val,wuf15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wuf15Val> wuf15{}; 
    }
    namespace LlwuF3{    ///<LLWU Flag 3 register
        using Addr = Register::Address<0x4007c007,0xffffff00,0,unsigned char>;
        ///Wakeup flag For module 0
        enum class mwuf0Val {
            v0=0x00000000,     ///<Module 0 input was not a wakeup source
            v1=0x00000001,     ///<Module 0 input was a wakeup source
        };
        namespace mwuf0ValC{
            constexpr MPL::Value<mwuf0Val,mwuf0Val::v0> v0{};
            constexpr MPL::Value<mwuf0Val,mwuf0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,mwuf0Val> mwuf0{}; 
        ///Wakeup flag For module 1
        enum class mwuf1Val {
            v0=0x00000000,     ///<Module 1 input was not a wakeup source
            v1=0x00000001,     ///<Module 1 input was a wakeup source
        };
        namespace mwuf1ValC{
            constexpr MPL::Value<mwuf1Val,mwuf1Val::v0> v0{};
            constexpr MPL::Value<mwuf1Val,mwuf1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,mwuf1Val> mwuf1{}; 
        ///Wakeup flag For module 2
        enum class mwuf2Val {
            v0=0x00000000,     ///<Module 2 input was not a wakeup source
            v1=0x00000001,     ///<Module 2 input was a wakeup source
        };
        namespace mwuf2ValC{
            constexpr MPL::Value<mwuf2Val,mwuf2Val::v0> v0{};
            constexpr MPL::Value<mwuf2Val,mwuf2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mwuf2Val> mwuf2{}; 
        ///Wakeup flag For module 3
        enum class mwuf3Val {
            v0=0x00000000,     ///<Module 3 input was not a wakeup source
            v1=0x00000001,     ///<Module 3 input was a wakeup source
        };
        namespace mwuf3ValC{
            constexpr MPL::Value<mwuf3Val,mwuf3Val::v0> v0{};
            constexpr MPL::Value<mwuf3Val,mwuf3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mwuf3Val> mwuf3{}; 
        ///Wakeup flag For module 4
        enum class mwuf4Val {
            v0=0x00000000,     ///<Module 4 input was not a wakeup source
            v1=0x00000001,     ///<Module 4 input was a wakeup source
        };
        namespace mwuf4ValC{
            constexpr MPL::Value<mwuf4Val,mwuf4Val::v0> v0{};
            constexpr MPL::Value<mwuf4Val,mwuf4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,mwuf4Val> mwuf4{}; 
        ///Wakeup flag For module 5
        enum class mwuf5Val {
            v0=0x00000000,     ///<Module 5 input was not a wakeup source
            v1=0x00000001,     ///<Module 5 input was a wakeup source
        };
        namespace mwuf5ValC{
            constexpr MPL::Value<mwuf5Val,mwuf5Val::v0> v0{};
            constexpr MPL::Value<mwuf5Val,mwuf5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,mwuf5Val> mwuf5{}; 
        ///Wakeup flag For module 6
        enum class mwuf6Val {
            v0=0x00000000,     ///<Module 6 input was not a wakeup source
            v1=0x00000001,     ///<Module 6 input was a wakeup source
        };
        namespace mwuf6ValC{
            constexpr MPL::Value<mwuf6Val,mwuf6Val::v0> v0{};
            constexpr MPL::Value<mwuf6Val,mwuf6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,mwuf6Val> mwuf6{}; 
        ///Wakeup flag For module 7
        enum class mwuf7Val {
            v0=0x00000000,     ///<Module 7 input was not a wakeup source
            v1=0x00000001,     ///<Module 7 input was a wakeup source
        };
        namespace mwuf7ValC{
            constexpr MPL::Value<mwuf7Val,mwuf7Val::v0> v0{};
            constexpr MPL::Value<mwuf7Val,mwuf7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,mwuf7Val> mwuf7{}; 
    }
    namespace LlwuFilt1{    ///<LLWU Pin Filter 1 register
        using Addr = Register::Address<0x4007c008,0xffffff10,0,unsigned char>;
        ///Filter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filtsel{}; 
        ///Digital Filter On External Pin
        enum class filteVal {
            v00=0x00000000,     ///<Filter disabled
            v01=0x00000001,     ///<Filter posedge detect enabled
            v10=0x00000002,     ///<Filter negedge detect enabled
            v11=0x00000003,     ///<Filter any edge detect enabled
        };
        namespace filteValC{
            constexpr MPL::Value<filteVal,filteVal::v00> v00{};
            constexpr MPL::Value<filteVal,filteVal::v01> v01{};
            constexpr MPL::Value<filteVal,filteVal::v10> v10{};
            constexpr MPL::Value<filteVal,filteVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,filteVal> filte{}; 
        ///Filter Detect Flag
        enum class filtfVal {
            v0=0x00000000,     ///<Pin Filter 1 was not a wakeup source
            v1=0x00000001,     ///<Pin Filter 1 was a wakeup source
        };
        namespace filtfValC{
            constexpr MPL::Value<filtfVal,filtfVal::v0> v0{};
            constexpr MPL::Value<filtfVal,filtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,filtfVal> filtf{}; 
    }
    namespace LlwuFilt2{    ///<LLWU Pin Filter 2 register
        using Addr = Register::Address<0x4007c009,0xffffff10,0,unsigned char>;
        ///Filter Pin Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filtsel{}; 
        ///Digital Filter On External Pin
        enum class filteVal {
            v00=0x00000000,     ///<Filter disabled
            v01=0x00000001,     ///<Filter posedge detect enabled
            v10=0x00000002,     ///<Filter negedge detect enabled
            v11=0x00000003,     ///<Filter any edge detect enabled
        };
        namespace filteValC{
            constexpr MPL::Value<filteVal,filteVal::v00> v00{};
            constexpr MPL::Value<filteVal,filteVal::v01> v01{};
            constexpr MPL::Value<filteVal,filteVal::v10> v10{};
            constexpr MPL::Value<filteVal,filteVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,filteVal> filte{}; 
        ///Filter Detect Flag
        enum class filtfVal {
            v0=0x00000000,     ///<Pin Filter 2 was not a wakeup source
            v1=0x00000001,     ///<Pin Filter 2 was a wakeup source
        };
        namespace filtfValC{
            constexpr MPL::Value<filtfVal,filtfVal::v0> v0{};
            constexpr MPL::Value<filtfVal,filtfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,filtfVal> filtf{}; 
    }
    namespace LlwuRst{    ///<LLWU Reset Enable register
        using Addr = Register::Address<0x4007c00a,0xfffffffc,0,unsigned char>;
        ///Digital Filter On RESET Pin
        enum class rstfiltVal {
            v0=0x00000000,     ///<Filter not enabled
            v1=0x00000001,     ///<Filter enabled
        };
        namespace rstfiltValC{
            constexpr MPL::Value<rstfiltVal,rstfiltVal::v0> v0{};
            constexpr MPL::Value<rstfiltVal,rstfiltVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rstfiltVal> rstfilt{}; 
        ///Low-Leakage Mode RESET Enable
        enum class llrsteVal {
            v0=0x00000000,     ///<RESET pin not enabled as a leakage mode exit source
            v1=0x00000001,     ///<RESET pin enabled as a low leakage mode exit source
        };
        namespace llrsteValC{
            constexpr MPL::Value<llrsteVal,llrsteVal::v0> v0{};
            constexpr MPL::Value<llrsteVal,llrsteVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,llrsteVal> llrste{}; 
    }
}