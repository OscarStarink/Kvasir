#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SCT1
    namespace Sct1Config{    ///<SCT configuration register
        using Addr = Register::Address<0x1c01c000,0x00000000,0x00000000,unsigned>;
        ///SCT operation
        enum class UnifyVal {
            theSctOperatesAs=0x00000000,     ///<The SCT operates as two 16-bit counters named L and H.
            theSctOperatesAs=0x00000001,     ///<The SCT operates as a unified 32-bit counter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UnifyVal> unify{}; 
        namespace UnifyValC{
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::theSctOperatesAs> theSctOperatesAs{};
            constexpr Register::FieldValue<decltype(unify)::Type,UnifyVal::theSctOperatesAs> theSctOperatesAs{};
        }
        ///SCT clock mode
        enum class ClkmodeVal {
            systemClock=0x00000000,     ///<System clock. The system clock clocks the SCT and prescalers.
            prescaledSystemClo=0x00000001,     ///<Prescaled system clock. The SCT clock is the system clock, but the prescalers are  enabled to count only when sampling of the input selected by  the CKSEL field finds the selected edge. The minimum pulse  width on the clock input is 1 bus clock period. This mode is the high-performance  sampled-clock mode.
            sctInput=0x00000002,     ///<SCT input. The input selected by  CLKSEL clocks the SCT and prescalers. The input is synchronized to the bus clock and possibly inverted.  The minimum pulse width on the clock input is 1 bus clock  period. This mode is the low-power sampled-clock mode.
            prescaledSctInput=0x00000003,     ///<Prescaled SCT input. The SCT and prescalers are clocked by the input edge  selected by the CLKSEL field. In this mode, most of the SCT is clocked by the (selected polarity of the)  input. The outputs are switched synchronously to the input clock. The input clock rate must be at least half the system clock rate and  can the same or faster than the system clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClkmodeVal> clkmode{}; 
        namespace ClkmodeValC{
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::systemClock> systemClock{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::prescaledSystemClo> prescaledSystemClo{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::sctInput> sctInput{};
            constexpr Register::FieldValue<decltype(clkmode)::Type,ClkmodeVal::prescaledSctInput> prescaledSctInput{};
        }
        ///SCT clock select
        enum class ClkselVal {
            risingEdgesOnInpu=0x00000000,     ///<Rising edges on input 0.
            fallingEdgesOnInp=0x00000001,     ///<Falling edges on input 0.
            risingEdgesOnInpu=0x00000002,     ///<Rising edges on input 1.
            fallingEdgesOnInp=0x00000003,     ///<Falling edges on input 1.
            risingEdgesOnInpu=0x00000004,     ///<Rising edges on input 2.
            fallingEdgesOnInp=0x00000005,     ///<Falling edges on input 2.
            risingEdgesOnInpu=0x00000006,     ///<Rising edges on input 3.
            fallingEdgesOnInp=0x00000007,     ///<Falling edges on input 3.
            risingEdgesOnInpu=0x00000008,     ///<Rising edges on input 4.
            fallingEdgesOnInp=0x00000009,     ///<Falling edges on input 4.
            risingEdgesOnInpu=0x0000000a,     ///<Rising edges on input 5.
            fallingEdgesOnInp=0x0000000b,     ///<Falling edges on input 5.
            risingEdgesOnInpu=0x0000000c,     ///<Rising edges on input 6.
            fallingEdgesOnInp=0x0000000d,     ///<Falling edges on input 6.
            risingEdgesOnInpu=0x0000000e,     ///<Rising edges on input 7.
            fallingEdgesOnInp=0x0000000f,     ///<Falling edges on input 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::risingEdgesOnInpu> risingEdgesOnInpu{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::fallingEdgesOnInp> fallingEdgesOnInp{};
        }
        ///A 1 in this bit prevents the lower match and fractional match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit applies to both the  higher and lower registers when the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> norelaodL{}; 
        ///A 1 in this bit prevents the higher match and fractional match registers from being  reloaded from their respective reload registers. Software can  write to set or clear this bit at any time. This bit is not used when  the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> noreloadH{}; 
        ///Synchronization for input n (bit 9 = input 0, bit 10 = input 1,..., bit 16 = input 7). A 1 in one of these bits subjects the corresponding input to  synchronization to the SCT clock, before it is used to create an  event. If an input is synchronous to the SCT clock, keep its bit 0 for  faster response. When the CKMODE field is 1x, the bit in this field, corresponding  to the input selected by the CKSEL field, is not used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,9),Register::ReadWriteAccess,unsigned> insync{}; 
        ///A one in this bit causes a match on match register 0 to be treated  as a de-facto LIMIT condition without the need to define an  associated event. As with any LIMIT event, this automatic limit causes the  counter to be cleared to zero in uni-directional mode or to change  the direction of count in bi-directional mode. Software can write to set or clear this bit at any time. This bit  applies to both the higher and lower registers when the UNIFY bit  is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> autolimitL{}; 
        ///A one in this bit will cause a match on match register 0 to be treated  as a de-facto LIMIT condition without the need to define an  associated event. As with any LIMIT event, this automatic limit causes the  counter to be cleared to zero in uni-directional mode or to change  the direction of count in bi-directional mode. Software can write to set or clear this bit at any time. This bit is  not used when the UNIFY bit is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> autolimitH{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ctrl{    ///<SCT control register
        using Addr = Register::Address<0x1c01c004,0x00000000,0x00000000,unsigned>;
        ///This bit is 1 when the L or unified counter is counting down. Hardware sets this bit   when the counter limit is reached and BIDIR is 1. Hardware clears this bit when the counter reaches 0 or when the counter is counting down and a limit condition occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> downL{}; 
        ///When this bit is 1 and HALT is 0, the L or unified counter does not run but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stopL{}; 
        ///When this bit is 1, the L or unified counter does not run and no events can occur.  A reset sets this bit. When the HALT_L bit is one, the STOP_L bit is cleared. If you want to remove the halt condition and keep the SCT in the stop condition (not running), then you can change the halt and stop condition with one single write to this register. Once set, only software can clear this bit to restore counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> haltL{}; 
        ///Writing a 1 to this bit clears the L or unified counter. This bit always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrctrL{}; 
        ///L or unified counter direction select
        enum class BidirlVal {
            theCounterCountsU=0x00000000,     ///<The counter counts up to its limit condition, then is cleared to zero.
            theCounterCountsU=0x00000001,     ///<The counter counts up to its limit, then counts down to a limit condition or to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BidirlVal> bidirL{}; 
        namespace BidirlValC{
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::theCounterCountsU> theCounterCountsU{};
            constexpr Register::FieldValue<decltype(bidirL)::Type,BidirlVal::theCounterCountsU> theCounterCountsU{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to produce the  L or unified counter clock. The counter clock is clocked at the rate of the SCT  clock divided by PRE_L+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,5),Register::ReadWriteAccess,unsigned> preL{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///This bit is 1 when the H counter is counting down. Hardware sets this bit   when the counter limit is reached and BIDIR is 1. Hardware clears this bit when the counter reaches 0 or when the counter is counting down and a limit condition occurs.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> downH{}; 
        ///When this bit is 1 and HALT is 0, the H counter does not run but I/O  events related to the counter can occur. If such an event matches  the mask in the Start register, this bit is cleared and counting  resumes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> stopH{}; 
        ///When this bit is 1, the H counter does not run and no events can occur.  A reset sets this bit. When the HALT_H bit is one, the STOP_H bit is cleared. If you want to remove the halt condition and keep the SCT in the stop condition (not running), then you can change the halt and stop condition with one single write to this register. Once set, this bit can only be cleared by software to restore counter operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> haltH{}; 
        ///Writing a 1 to this bit clears the H counter. This bit always reads as 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> clrctrH{}; 
        ///Direction select
        enum class BidirhVal {
            theHCounterCounts=0x00000000,     ///<The H counter counts up to its limit condition, then is cleared to zero.
            theHCounterCounts=0x00000001,     ///<The H counter counts up to its limit, then counts down to a limit condition or to 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,BidirhVal> bidirH{}; 
        namespace BidirhValC{
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::theHCounterCounts> theHCounterCounts{};
            constexpr Register::FieldValue<decltype(bidirH)::Type,BidirhVal::theHCounterCounts> theHCounterCounts{};
        }
        ///Specifies the factor by which the SCT clock is prescaled to produce the  H counter clock. The counter clock is clocked at the rate of the SCT  clock divided by PRELH+1. Clear the counter (by writing a 1  to the CLRCTR bit) whenever changing the PRE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,21),Register::ReadWriteAccess,unsigned> preH{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Limit{    ///<SCT limit register
        using Addr = Register::Address<0x1c01c008,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n is used as a counter limit event for the L or unified counter (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> limmskL{}; 
        ///If bit n is one, event n is used as a counter limit event for the H counter (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> limmskH{}; 
    }
    namespace Sct1Halt{    ///<SCT halt condition register
        using Addr = Register::Address<0x1c01c00c,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n sets the HALT_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haltmskL{}; 
        ///If bit n is one, event n sets the HALT_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> haltmskH{}; 
    }
    namespace Sct1Stop{    ///<SCT stop condition register
        using Addr = Register::Address<0x1c01c010,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n sets the STOP_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> stopmskL{}; 
        ///If bit n is one, event n sets the STOP_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> stopmskH{}; 
    }
    namespace Sct1Start{    ///<SCT start condition register
        using Addr = Register::Address<0x1c01c014,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n clears the STOP_L bit in the CTRL register (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> startmskL{}; 
        ///If bit n is one, event n clears the STOP_H bit in the CTRL register (event 0 = bit 16, event 1 = bit 17, event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> startmskH{}; 
    }
    namespace Sct1Dither{    ///<SCT dither condition register
        using Addr = Register::Address<0x1c01c018,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, the event n causes the dither engine to advance to the next element in the dither pattern at the start of the next counter cycle of the 16-bit low counter or the unified counter (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15). If all bits are set to 0, the dither pattern automatically advances at the start of every new counter cycle.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dithmskL{}; 
        ///If bit n is one, the event n causes the dither engine to advance to the next element in the dither pattern at the start of the next counter cycle of the 16-bit high counter (event 0 = bit 0, event 1 = bit 1, event 15 = bit 15). If all bits are set to 0, the dither pattern automatically advances at the start of every new counter cycle.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> dithmskH{}; 
    }
    namespace Sct1Count{    ///<SCT counter register
        using Addr = Register::Address<0x1c01c040,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit L counter value. When UNIFY = 1, read or write the lower 16 bits of the 32-bit unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ctrL{}; 
        ///When UNIFY = 0, read or write the 16-bit H counter value. When UNIFY = 1, read or write the upper 16 bits of the 32-bit unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ctrH{}; 
    }
    namespace Sct1State{    ///<SCT state register
        using Addr = Register::Address<0x1c01c044,0x00000000,0x00000000,unsigned>;
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> stateL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///State variable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> stateH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Input{    ///<SCT input register
        using Addr = Register::Address<0x1c01c048,0x00000000,0x00000000,unsigned>;
        ///Real-time status of input 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ain0{}; 
        ///Real-time status of input 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ain1{}; 
        ///Real-time status of input 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ain2{}; 
        ///Real-time status of input 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ain3{}; 
        ///Real-time status of input 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ain4{}; 
        ///Real-time status of input 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ain5{}; 
        ///Real-time status of input 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ain6{}; 
        ///Real-time status of input 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ain7{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Input 0 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sin0{}; 
        ///Input 1 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> sin1{}; 
        ///Input 2 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> sin2{}; 
        ///Input 3 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> sin3{}; 
        ///Input 4 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sin4{}; 
        ///Input 5 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> sin5{}; 
        ///Input 6 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sin6{}; 
        ///Input 7 state synchronized to the SCT clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sin7{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Regmode{    ///<SCT match/capture registers mode register
        using Addr = Register::Address<0x1c01c04c,0x00000000,0x00000000,unsigned>;
        ///Each bit controls one pair of match/capture registers (register 0 = bit 0, register 1 = bit 1,..., register 15 = bit 15).  0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> regmodL{}; 
        ///Each bit controls one pair of match/capture registers (register 0 = bit 16, register 1 = bit 17,..., register 15 = bit 31). 0 = registers operate as match registers. 1 = registers operate as capture registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> regmodH{}; 
    }
    namespace Sct1Output{    ///<SCT output register
        using Addr = Register::Address<0x1c01c050,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to bit n makes the corresponding output HIGH. 0 makes the corresponding output LOW (output 0 = bit 0, output 1 = bit 1,..., output 9 = bit 9).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> out{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Outputdirctrl{    ///<SCT output counter direction control register
        using Addr = Register::Address<0x1c01c054,0x00000000,0x00000000,unsigned>;
        ///Set/clear operation on output 0. Value 0x3 is reserved. Do not program this value.
        enum class Setclr0Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Setclr0Val> setclr0{}; 
        namespace Setclr0ValC{
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr0)::Type,Setclr0Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 1. Value 0x3 is reserved. Do not program this value.
        enum class Setclr1Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Setclr1Val> setclr1{}; 
        namespace Setclr1ValC{
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr1)::Type,Setclr1Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 2. Value 0x3 is reserved. Do not program this value.
        enum class Setclr2Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Setclr2Val> setclr2{}; 
        namespace Setclr2ValC{
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr2)::Type,Setclr2Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 3. Value 0x3 is reserved. Do not program this value.
        enum class Setclr3Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Setclr3Val> setclr3{}; 
        namespace Setclr3ValC{
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr3)::Type,Setclr3Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 4. Value 0x3 is reserved. Do not program this value.
        enum class Setclr4Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Setclr4Val> setclr4{}; 
        namespace Setclr4ValC{
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr4)::Type,Setclr4Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 5. Value 0x3 is reserved. Do not program this value.
        enum class Setclr5Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Setclr5Val> setclr5{}; 
        namespace Setclr5ValC{
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr5)::Type,Setclr5Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 6. Value 0x3 is reserved. Do not program this value.
        enum class Setclr6Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Setclr6Val> setclr6{}; 
        namespace Setclr6ValC{
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr6)::Type,Setclr6Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 7. Value 0x3 is reserved. Do not program this value.
        enum class Setclr7Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Setclr7Val> setclr7{}; 
        namespace Setclr7ValC{
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr7)::Type,Setclr7Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 8. Value 0x3 is reserved. Do not program this value.
        enum class Setclr8Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Setclr8Val> setclr8{}; 
        namespace Setclr8ValC{
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr8)::Type,Setclr8Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Set/clear operation on output 9. Value 0x3 is reserved. Do not program this value.
        enum class Setclr9Val {
            setAndClearDoNot=0x00000000,     ///<Set and clear do not depend on any counter.
            setAndClearAreRe=0x00000001,     ///<Set and clear are reversed when counter L or the unified counter is counting down.
            setAndClearAreRe=0x00000002,     ///<Set and clear are reversed when counter H is counting down. Do not use if UNIFY = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Setclr9Val> setclr9{}; 
        namespace Setclr9ValC{
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::setAndClearDoNot> setAndClearDoNot{};
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::setAndClearAreRe> setAndClearAreRe{};
            constexpr Register::FieldValue<decltype(setclr9)::Type,Setclr9Val::setAndClearAreRe> setAndClearAreRe{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Res{    ///<SCT conflict resolution register
        using Addr = Register::Address<0x1c01c058,0x00000000,0x00000000,unsigned>;
        ///Effect of simultaneous set and clear on output 0.
        enum class O0resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR0 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR0 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,O0resVal> o0res{}; 
        namespace O0resValC{
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o0res)::Type,O0resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 1.
        enum class O1resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR1 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR1 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,O1resVal> o1res{}; 
        namespace O1resValC{
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o1res)::Type,O1resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 2.
        enum class O2resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR2 field).
            clearOutputNOrS=0x00000002,     ///<Clear output n (or set based on the SETCLR2 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,O2resVal> o2res{}; 
        namespace O2resValC{
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::clearOutputNOrS> clearOutputNOrS{};
            constexpr Register::FieldValue<decltype(o2res)::Type,O2resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 3.
        enum class O3resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR3 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR3 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,O3resVal> o3res{}; 
        namespace O3resValC{
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o3res)::Type,O3resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 4.
        enum class O4resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR4 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR4 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,O4resVal> o4res{}; 
        namespace O4resValC{
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o4res)::Type,O4resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 5.
        enum class O5resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR5 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR5 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,O5resVal> o5res{}; 
        namespace O5resValC{
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o5res)::Type,O5resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 6.
        enum class O6resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR6 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR6 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,O6resVal> o6res{}; 
        namespace O6resValC{
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o6res)::Type,O6resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 7.
        enum class O7resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR7 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR7 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,O7resVal> o7res{}; 
        namespace O7resValC{
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o7res)::Type,O7resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 8.
        enum class O8resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR8 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR8 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,O8resVal> o8res{}; 
        namespace O8resValC{
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o8res)::Type,O8resVal::toggleOutput> toggleOutput{};
        }
        ///Effect of simultaneous set and clear on output 9.
        enum class O9resVal {
            noChange=0x00000000,     ///<No change.
            setOutputOrClear=0x00000001,     ///<Set output (or clear based on the SETCLR9 field).
            clearOutputOrSet=0x00000002,     ///<Clear output (or set based on the SETCLR9 field).
            toggleOutput=0x00000003,     ///<Toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,O9resVal> o9res{}; 
        namespace O9resValC{
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::noChange> noChange{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::setOutputOrClear> setOutputOrClear{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::clearOutputOrSet> clearOutputOrSet{};
            constexpr Register::FieldValue<decltype(o9res)::Type,O9resVal::toggleOutput> toggleOutput{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Dmareq0{    ///<SCT DMA request 0 register
        using Addr = Register::Address<0x1c01c05c,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n sets DMA request 0 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dev0{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit makes the SCT set DMA request 0 when it loads the  Match_L/Unified registers from the Reload_L/Unified registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl0{}; 
        ///This read-only bit indicates the state of DMA Request 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq0{}; 
    }
    namespace Sct1Dmareq1{    ///<SCT DMA request 1 register
        using Addr = Register::Address<0x1c01c060,0x00000000,0x00000000,unsigned>;
        ///If bit n is one, event n sets DMA request 1 (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dev1{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit makes the SCT set DMA request 1 when it loads the  Match L/Unified registers from the Reload L/Unified registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> drl1{}; 
        ///This read-only bit indicates the state of DMA Request 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> drq1{}; 
    }
    namespace Sct1Even{    ///<SCT event enable register
        using Addr = Register::Address<0x1c01c0f0,0x00000000,0x00000000,unsigned>;
        ///The SCT requests interrupt when bit n of this register and the event flag register are both one (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ien{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Evflag{    ///<SCT event flag register
        using Addr = Register::Address<0x1c01c0f4,0x00000000,0x00000000,unsigned>;
        ///Bit n is one if event n has occurred since reset or a 1 was last written to this bit (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> flag{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Conen{    ///<SCT conflict enable register
        using Addr = Register::Address<0x1c01c0f8,0x00000000,0x00000000,unsigned>;
        ///The SCT requests interrupt when bit n of this register and the SCT conflict flag register are both one (output 0 = bit 0, output 1 = bit 1,..., output 9 = bit 9).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ncen{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Conflag{    ///<SCT conflict flag register
        using Addr = Register::Address<0x1c01c0fc,0x00000000,0x00000000,unsigned>;
        ///Bit n is one if a no-change conflict event occurred on output n since  reset or a 1 was last written to this bit (output 0 = bit 0, output 1 = bit 1,..., output 9 = bit 9).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> ncflag{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,10),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///The most recent bus error from this SCT involved writing CTR  L/Unified, STATE L/Unified, MATCH L/Unified, or the Output register when the  L/U counter was not halted. A word write to certain L  and H registers can be half successful and half unsuccessful.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> buserrl{}; 
        ///The most recent bus error from this SCT involved writing CTR H,  STATE H, MATCH H, or the Output register when the H  counter was not halted.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> buserrh{}; 
    }
    namespace Sct1Match0{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c100,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match1{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c104,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match2{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c108,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match3{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c10c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match4{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c110,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match5{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c114,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match6{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c118,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match7{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c11c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match8{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c120,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match9{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c124,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match10{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c128,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match11{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c12c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match12{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c130,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match13{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c134,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match14{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c138,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match15{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c13c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Fracmat0{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c140,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat1{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c144,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat2{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c148,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat3{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c14c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat4{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c150,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat5{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c154,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Cap0{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c100,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap1{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c104,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap2{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c108,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap3{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c10c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap4{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c110,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap5{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c114,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap6{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c118,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap7{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c11c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap8{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c120,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap9{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c124,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap10{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c128,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap11{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c12c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap12{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c130,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap13{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c134,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap14{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c138,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap15{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c13c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Matchrel0{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c200,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel1{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c204,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel2{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c208,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel3{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c20c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel4{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c210,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel5{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c214,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel6{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c218,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel7{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c21c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel8{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c220,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel9{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c224,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel10{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c228,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel11{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c22c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel12{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c230,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel13{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c234,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel14{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c238,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel15{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c23c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Fracmatrel0{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c240,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel1{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c244,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel2{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c248,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel3{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c24c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel4{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c250,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel5{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c254,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Capctrl0{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c200,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl1{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c204,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl2{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c208,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl3{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c20c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl4{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c210,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl5{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c214,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl6{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c218,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl7{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c21c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl8{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c220,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl9{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c224,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl10{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c228,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl11{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c22c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl12{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c230,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl13{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c234,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl14{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c238,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl15{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c23c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Ev0State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c300,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev1State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c308,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev2State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c310,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev3State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c318,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev4State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c320,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev5State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c328,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev6State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c330,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev7State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c338,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev8State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c340,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev9State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c348,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev10State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c350,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev11State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c358,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev12State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c360,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev13State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c368,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev14State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c370,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev15State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c378,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev0Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c304,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev1Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c30c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev2Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c314,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev3Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c31c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev4Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c324,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev5Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c32c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev6Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c334,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev7Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c33c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev8Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c344,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev9Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c34c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev10Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c354,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev11Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c35c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev12Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c364,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev13Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c36c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev14Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c374,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev15Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c37c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out0Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c500,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out1Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c508,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out2Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c510,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out3Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c518,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out4Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c520,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out5Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c528,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out6Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c530,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out7Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c538,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out8Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c540,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out9Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c548,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out0Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c504,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out1Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c50c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out2Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c514,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out3Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c51c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out4Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c524,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out5Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c52c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out6Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c534,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out7Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c53c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out8Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c544,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out9Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c54c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Match0{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c100,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match1{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c104,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match2{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c108,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match3{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c10c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match4{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c110,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match5{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c114,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match6{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c118,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match7{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c11c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match8{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c120,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match9{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c124,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match10{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c128,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match11{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c12c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match12{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c130,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match13{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c134,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match14{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c138,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Match15{    ///<SCT match value register of match channels 0 to 15; REGMOD0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c13c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the L counter. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> matchnL{}; 
        ///When UNIFY = 0, read or write the 16-bit value to be  compared to the H counter. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be compared to the unified counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> matchnH{}; 
    }
    namespace Sct1Fracmat0{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c140,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat1{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c144,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat2{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c148,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat3{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c14c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat4{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c150,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmat5{    ///<Fractional match registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c154,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_L register (n = 0 to 5). When UNIFY = 1, the value applies to the unified, 32-bit fractional match register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fracmatL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write 4-bit value specifying the dither pattern to be applied to the corresponding MATCHn_H register (n = 0 to 5).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fracmatH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Cap0{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c100,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap1{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c104,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap2{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c108,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap3{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c10c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap4{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c110,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap5{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c114,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap6{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c118,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap7{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c11c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap8{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c120,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap9{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c124,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap10{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c128,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap11{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c12c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap12{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c130,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap13{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c134,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap14{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c138,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Cap15{    ///<SCT capture register of capture channel 0 to 15; REGMOD0 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c13c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the lower 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capnL{}; 
        ///When UNIFY = 0, read the 16-bit counter value at which this register was last captured. When UNIFY = 1, read the upper 16 bits of the 32-bit value at which this register was last captured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capnH{}; 
    }
    namespace Sct1Matchrel0{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c200,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel1{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c204,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel2{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c208,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel3{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c20c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel4{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c210,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel5{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c214,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel6{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c218,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel7{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c21c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel8{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c220,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel9{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c224,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel10{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c228,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel11{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c22c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel12{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c230,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel13{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c234,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel14{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c238,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Matchrel15{    ///<SCT match reload value register 0 to 15; REGMOD0 = 0 to REGMODE15 = 0
        using Addr = Register::Address<0x1c01c23c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 16-bit value to be loaded into the MATCHn_L register. When UNIFY = 1, read or write the lower 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reloadnL{}; 
        ///When UNIFY = 0, read or write the 16-bit to be loaded into the MATCHn_H register. When UNIFY = 1, read or write the upper 16 bits of the 32-bit value to be loaded into the MATCHn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reloadnH{}; 
    }
    namespace Sct1Fracmatrel0{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c240,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel1{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c244,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel2{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c248,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel3{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c24c,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel4{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c250,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Fracmatrel5{    ///<Fractional match reload registers 0 to 5 for SCT match value registers 0 to 5.
        using Addr = Register::Address<0x1c01c254,0x00000000,0x00000000,unsigned>;
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_L register. When UNIFY = 1, read or write the lower 4 bits to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> relfracL{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///When UNIFY = 0, read or write the 4-bit value to be loaded into the FRACMATn_H register. When UNIFY = 1, read or write the upper 4 bits with the 4-bit value to be loaded into the FRACMATn register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> relfracH{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Capctrl0{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c200,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl1{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c204,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl2{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c208,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl3{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c20c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl4{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c210,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl5{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c214,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl6{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c218,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl7{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c21c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl8{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c220,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl9{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c224,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl10{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c228,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl11{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c22c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl12{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c230,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl13{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c234,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl14{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c238,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Capctrl15{    ///<SCT capture control register 0 to 15; REGMOD0 = 1 to REGMODE15 = 1
        using Addr = Register::Address<0x1c01c23c,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event m causes the CAPn_L (UNIFY = 0) or the CAPn (UNIFY = 1) register to be loaded (event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> capconnL{}; 
        ///If bit m is one, event m causes the CAPn_H (UNIFY = 0) register to be loaded (event 0 = bit 16, event 1 = bit 17,..., event 15 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> capconnH{}; 
    }
    namespace Sct1Ev0State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c300,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev1State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c308,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev2State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c310,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev3State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c318,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev4State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c320,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev5State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c328,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev6State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c330,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev7State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c338,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev8State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c340,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev9State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c348,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev10State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c350,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev11State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c358,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev12State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c360,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev13State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c368,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev14State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c370,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev15State{    ///<SCT event state register 0
        using Addr = Register::Address<0x1c01c378,0x00000000,0x00000000,unsigned>;
        ///If bit m is one, event n (n= 0 to 15) happens in state m of the counter selected by the HEVENT bit (m = state number; state 0 = bit 0, state 1= bit 1,..., state 31 = bit 31).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> statemskn{}; 
    }
    namespace Sct1Ev0Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c304,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev1Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c30c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev2Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c314,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev3Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c31c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev4Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c324,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev5Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c32c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev6Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c334,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev7Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c33c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev8Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c344,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev9Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c34c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev10Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c354,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev11Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c35c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev12Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c364,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev13Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c36c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev14Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c374,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Ev15Ctrl{    ///<SCT event control register 0
        using Addr = Register::Address<0x1c01c37c,0x00000000,0x00000000,unsigned>;
        ///Selects the Match register associated with this event (if any). A  match can occur only when the counter selected by the HEVENT  bit is running.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> matchsel{}; 
        ///Select L/H counter. Do not set this bit if UNIFY = 1.
        enum class HeventVal {
            selectsTheLState=0x00000000,     ///<Selects the L state and the L match register selected by MATCHSEL.
            selectsTheHState=0x00000001,     ///<Selects the H state and the H match register selected by MATCHSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,HeventVal> hevent{}; 
        namespace HeventValC{
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheLState> selectsTheLState{};
            constexpr Register::FieldValue<decltype(hevent)::Type,HeventVal::selectsTheHState> selectsTheHState{};
        }
        ///Input/output select
        enum class OutselVal {
            selectsTheInputSe=0x00000000,     ///<Selects the input selected by IOSEL.
            selectsTheOutputS=0x00000001,     ///<Selects the output selected by IOSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OutselVal> outsel{}; 
        namespace OutselValC{
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheInputSe> selectsTheInputSe{};
            constexpr Register::FieldValue<decltype(outsel)::Type,OutselVal::selectsTheOutputS> selectsTheOutputS{};
        }
        ///Selects the input or output signal associated with this event (if  any). Do not select an input in this register, if CKMODE is 1x. In this case the clock input is an implicit ingredient of  every event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> iosel{}; 
        ///Selects the I/O condition for event n. (The detection of edges on outputs lags the conditions that switch the outputs by one SCT clock). In order to guarantee proper edge/state detection, an input must have a minimum pulse width of at least one SCT  clock period .
        enum class IocondVal {
            low=0x00000000,     ///<LOW
            rise=0x00000001,     ///<Rise
            fall=0x00000002,     ///<Fall
            high=0x00000003,     ///<HIGH
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,IocondVal> iocond{}; 
        namespace IocondValC{
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::low> low{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::rise> rise{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::fall> fall{};
            constexpr Register::FieldValue<decltype(iocond)::Type,IocondVal::high> high{};
        }
        ///Selects how the specified match and I/O condition are used and combined.
        enum class CombmodeVal {
            or_=0x00000000,     ///<OR. The event occurs when either the specified match or I/O condition occurs.
            match=0x00000001,     ///<MATCH. Uses the specified match only.
            io=0x00000002,     ///<IO. Uses the specified I/O condition only.
            and_=0x00000003,     ///<AND. The event occurs when the specified match and I/O condition occur simultaneously.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,CombmodeVal> combmode{}; 
        namespace CombmodeValC{
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::or_> or_{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::match> match{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::io> io{};
            constexpr Register::FieldValue<decltype(combmode)::Type,CombmodeVal::and_> and_{};
        }
        ///This bit controls how the STATEV value modifies the state  selected by HEVENT when this event is the highest-numbered  event occurring for that state.
        enum class StateldVal {
            statevValueIsAdde=0x00000000,     ///<STATEV value is added into STATE (the carry-out is ignored).
            statevValueIsLoad=0x00000001,     ///<STATEV value is loaded into STATE.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,StateldVal> stateld{}; 
        namespace StateldValC{
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsAdde> statevValueIsAdde{};
            constexpr Register::FieldValue<decltype(stateld)::Type,StateldVal::statevValueIsLoad> statevValueIsLoad{};
        }
        ///This value is loaded into or added to the state selected by  HEVENT, depending on STATELD, when this event is the  highest-numbered event occurring for that state. If STATELD and  STATEV are both zero, there is no change to the STATE value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,15),Register::ReadWriteAccess,unsigned> statev{}; 
        ///If this bit is one and the COMBMODE field specifies a match  component to the triggering of this event, then a match is considered to be active whenever the counter value is  GREATER THAN OR EQUAL TO the value specified in the  match register when counting up, LESS THEN OR EQUAL TO  the match value when counting down. If this bit is zero, a match is only be active during the cycle  when the counter is equal to the match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> matchmem{}; 
        ///Direction qualifier for event generation. This field only applies when the counters are operating in BIDIR  mode. If BIDIR = 0, the SCT ignores this field. Value 0x3 is reserved.
        enum class DirectionVal {
            directionIndependen=0x00000000,     ///<Direction independent. This event is triggered regardless of the count direction.
            countingUp=0x00000001,     ///<Counting up. This event is triggered only during up-counting when BIDIR = 1.
            countingDown=0x00000002,     ///<Counting down. This event is triggered only during down-counting when BIDIR = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,21),Register::ReadWriteAccess,DirectionVal> direction{}; 
        namespace DirectionValC{
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::directionIndependen> directionIndependen{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingUp> countingUp{};
            constexpr Register::FieldValue<decltype(direction)::Type,DirectionVal::countingDown> countingDown{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,23),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out0Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c500,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out1Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c508,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out2Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c510,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out3Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c518,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out4Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c520,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out5Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c528,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out6Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c530,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out7Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c538,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out8Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c540,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out9Set{    ///<SCT output 0 set register
        using Addr = Register::Address<0x1c01c548,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to set output n (or clear it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> set{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out0Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c504,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out1Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c50c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out2Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c514,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out3Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c51c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out4Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c524,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out5Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c52c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out6Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c534,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out7Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c53c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out8Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c544,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Sct1Out9Clr{    ///<SCT output 0 clear register
        using Addr = Register::Address<0x1c01c54c,0x00000000,0x00000000,unsigned>;
        ///A 1 in bit m selects event m to clear output n (or set it if SETCLRn = 0x1 or 0x2) event 0 = bit 0, event 1 = bit 1,..., event 15 = bit 15.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> clr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
