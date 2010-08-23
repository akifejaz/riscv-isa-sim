/* Automatically generated by parse-opcodes */
switch((insn.bits >> 0x19) & 0x7f)
{
  case 0x0:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xffffffff) == 0x0)
        {
          #include "insns/unimp.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x60:
  {
    #include "insns/j.h"
    break;
  }
  case 0x61:
  {
    #include "insns/j.h"
    break;
  }
  case 0x62:
  {
    #include "insns/j.h"
    break;
  }
  case 0x63:
  {
    #include "insns/j.h"
    break;
  }
  case 0x64:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x65:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x66:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x67:
  {
    #include "insns/jal.h"
    break;
  }
  case 0x68:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xd0000ca0)
        {
          #include "insns/sgninj_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd00000a0)
        {
          #include "insns/sgninj_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000000)
        {
          #include "insns/add_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000c00)
        {
          #include "insns/add_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000ce0)
        {
          #include "insns/sgnmul_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000cc0)
        {
          #include "insns/sgninjn_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd00000c0)
        {
          #include "insns/sgninjn_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000c40)
        {
          #include "insns/mul_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000020)
        {
          #include "insns/sub_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000c20)
        {
          #include "insns/sub_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0000080)
        {
          #include "insns/sqrt_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0000c80)
        {
          #include "insns/sqrt_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd00000e0)
        {
          #include "insns/sgnmul_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000c60)
        {
          #include "insns/div_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000060)
        {
          #include "insns/div_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0000040)
        {
          #include "insns/mul_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe0fffe0) == 0xd00010c0)
        {
          #include "insns/cvt_s_w.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001ca0)
        {
          #include "insns/cvtu_d_l.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001c40)
        {
          #include "insns/trunc_w_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001040)
        {
          #include "insns/trunc_w_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001ce0)
        {
          #include "insns/cvtu_d_w.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001e00)
        {
          #include "insns/cvt_d_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001000)
        {
          #include "insns/trunc_l_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001c00)
        {
          #include "insns/trunc_l_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd00010e0)
        {
          #include "insns/cvtu_s_w.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001020)
        {
          #include "insns/truncu_l_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001c20)
        {
          #include "insns/truncu_l_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd00010a0)
        {
          #include "insns/cvtu_s_l.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001080)
        {
          #include "insns/cvt_s_l.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001260)
        {
          #include "insns/cvt_s_d.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001060)
        {
          #include "insns/truncu_w_s.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001cc0)
        {
          #include "insns/cvt_d_w.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001c80)
        {
          #include "insns/cvt_d_l.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xd0001c60)
        {
          #include "insns/truncu_w_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xfe007fe0) == 0xd0002c20)
        {
          #include "insns/c_eq_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0002020)
        {
          #include "insns/c_eq_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0002c60)
        {
          #include "insns/c_le_d.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0002040)
        {
          #include "insns/c_lt_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0002060)
        {
          #include "insns/c_le_s.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xd0002c40)
        {
          #include "insns/c_lt_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe007c00) == 0xd0004000)
        {
          #include "insns/madd_s.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd0004c00)
        {
          #include "insns/madd_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfe007c00) == 0xd0005000)
        {
          #include "insns/msub_s.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd0005c00)
        {
          #include "insns/msub_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe007c00) == 0xd0006000)
        {
          #include "insns/nmadd_s.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd0006c00)
        {
          #include "insns/nmadd_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007c00) == 0xd0007c00)
        {
          #include "insns/nmsub_d.h"
          break;
        }
        if((insn.bits & 0xfe007c00) == 0xd0007000)
        {
          #include "insns/nmsub_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x6a:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fff) == 0xd4000000)
        {
          #include "insns/mff_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe007fff) == 0xd4001000)
        {
          #include "insns/mff_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe007fff) == 0xd4004000)
        {
          #include "insns/mtf_s.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfe007fff) == 0xd4005000)
        {
          #include "insns/mtf_d.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x71:
  {
    #include "insns/lui.h"
    break;
  }
  case 0x73:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/beq.h"
        break;
      }
      case 0x1:
      {
        #include "insns/bne.h"
        break;
      }
      case 0x2:
      {
        #include "insns/blt.h"
        break;
      }
      case 0x3:
      {
        #include "insns/bltu.h"
        break;
      }
      case 0x4:
      {
        #include "insns/ble.h"
        break;
      }
      case 0x5:
      {
        #include "insns/bleu.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x74:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/addi.h"
        break;
      }
      case 0x1:
      {
        #include "insns/addiw.h"
        break;
      }
      case 0x2:
      {
        #include "insns/slti.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sltiu.h"
        break;
      }
      case 0x4:
      {
        #include "insns/andi.h"
        break;
      }
      case 0x5:
      {
        #include "insns/ori.h"
        break;
      }
      case 0x6:
      {
        #include "insns/xori.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x75:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xea0000e0)
        {
          #include "insns/nor.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000060)
        {
          #include "insns/sltu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0000c0)
        {
          #include "insns/xor.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000020)
        {
          #include "insns/sub.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0000a0)
        {
          #include "insns/or.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000000)
        {
          #include "insns/add.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000040)
        {
          #include "insns/slt.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea000080)
        {
          #include "insns/and.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe007fe0) == 0xea001000)
        {
          #include "insns/mul.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001080)
        {
          #include "insns/div.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010c0)
        {
          #include "insns/rem.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001040)
        {
          #include "insns/mulh.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010e0)
        {
          #include "insns/remu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea001060)
        {
          #include "insns/mulhu.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea0010a0)
        {
          #include "insns/divu.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe007fe0) == 0xea004040)
        {
          #include "insns/srlv.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea004060)
        {
          #include "insns/srav.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xea004020)
        {
          #include "insns/sllv.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfff07800) == 0xea005000)
        {
          #include "insns/sll.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfff07800) == 0xea006000)
        {
          #include "insns/srl.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfff07800) == 0xea007000)
        {
          #include "insns/sra.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x76:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe007fe0) == 0xec000000)
        {
          #include "insns/addw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec000020)
        {
          #include "insns/subw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe007fe0) == 0xec0010e0)
        {
          #include "insns/remuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec0010a0)
        {
          #include "insns/divuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec001060)
        {
          #include "insns/mulhuw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec001000)
        {
          #include "insns/mulw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec0010c0)
        {
          #include "insns/remw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec001040)
        {
          #include "insns/mulhw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec001080)
        {
          #include "insns/divw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe007fe0) == 0xec004060)
        {
          #include "insns/sravw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec004020)
        {
          #include "insns/sllvw.h"
          break;
        }
        if((insn.bits & 0xfe007fe0) == 0xec004040)
        {
          #include "insns/srlvw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfff07c00) == 0xec005000)
        {
          #include "insns/sllw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfff07c00) == 0xec006000)
        {
          #include "insns/srlw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfff07c00) == 0xec007000)
        {
          #include "insns/sraw.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x78:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/lb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/lh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/lw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/ld.h"
        break;
      }
      case 0x4:
      {
        #include "insns/lbu.h"
        break;
      }
      case 0x5:
      {
        #include "insns/lhu.h"
        break;
      }
      case 0x6:
      {
        #include "insns/lwu.h"
        break;
      }
      case 0x7:
      {
        if((insn.bits & 0xfff07000) == 0xf0007000)
        {
          #include "insns/synci.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x79:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        #include "insns/sb.h"
        break;
      }
      case 0x1:
      {
        #include "insns/sh.h"
        break;
      }
      case 0x2:
      {
        #include "insns/sw.h"
        break;
      }
      case 0x3:
      {
        #include "insns/sd.h"
        break;
      }
      case 0x4:
      {
        #include "insns/l_s.h"
        break;
      }
      case 0x5:
      {
        #include "insns/l_d.h"
        break;
      }
      case 0x6:
      {
        #include "insns/s_s.h"
        break;
      }
      case 0x7:
      {
        #include "insns/s_d.h"
        break;
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7b:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe0fffe0) == 0xf6000000)
        {
          #include "insns/jalr_c.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xf6000040)
        {
          #include "insns/jalr_j.h"
          break;
        }
        if((insn.bits & 0xfe0fffe0) == 0xf6000020)
        {
          #include "insns/jalr_r.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xffffffe0) == 0xf6001000)
        {
          #include "insns/rdpc.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xfe0fffe0) == 0xf6002000)
        {
          #include "insns/rdhwr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x3:
      {
        if((insn.bits & 0xffffffff) == 0xf6003000)
        {
          #include "insns/sync.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xffffffff) == 0xf6004000)
        {
          #include "insns/syscall.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xffffffff) == 0xf6005000)
        {
          #include "insns/break.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  case 0x7e:
  {
    switch((insn.bits >> 0xc) & 0x7)
    {
      case 0x0:
      {
        if((insn.bits & 0xfe0fffff) == 0xfc000000)
        {
          #include "insns/ei.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x1:
      {
        if((insn.bits & 0xfe0fffff) == 0xfc001000)
        {
          #include "insns/di.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x2:
      {
        if((insn.bits & 0xffffffff) == 0xfc002000)
        {
          #include "insns/eret.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x4:
      {
        if((insn.bits & 0xfe007fff) == 0xfc004000)
        {
          #include "insns/mfpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x5:
      {
        if((insn.bits & 0xfe007fff) == 0xfc005000)
        {
          #include "insns/mwfpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x6:
      {
        if((insn.bits & 0xfe007fff) == 0xfc006000)
        {
          #include "insns/mtpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      case 0x7:
      {
        if((insn.bits & 0xfe007fff) == 0xfc007000)
        {
          #include "insns/mwtpcr.h"
          break;
        }
        #include "insns/unimp.h"
      }
      default:
      {
        #include "insns/unimp.h"
      }
    }
    break;
  }
  default:
  {
    #include "insns/unimp.h"
  }
}
