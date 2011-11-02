/*
 *  Canon Inkjet Printer Driver for Linux
 *  Copyright CANON INC. 2001-2010
 *  All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307, USA.
 */


/* Ver.3.00 for String Pattern */
static const
ST_STRING_TABLE string_table[]={

  /* for noinkcheck */
  {WR1600_DWS_INKSTATUS_OFF_PATTERN01,
     {ID_STS_MESSAGE_INKSTATUS_OFF,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  /* for DWS */
  {WR1500_DWS_INKLOW_PATTERN01,
     {ID_STS_MESSAGE_WAR_INKLOW_PRE,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_WAR_INKLOW_AFTER,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {WR1500_DWS_INKLOW_PATTERN02,
     {ID_STS_MESSAGE_WAR_INKLOW_40_PRE,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_WAR_INKLOW_40_AFTER,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {WR1570_DWS_INKOUT_PATTERN02,
     {ID_STS_MESSAGE_OC_INKOUT_TANK2_4R,	//Ver.3.00 alpha05
     //{ID_STS_MESSAGE_OC_INKOUT_TANK2,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_WAR_INKLOW_AFTER,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {WR1800_DWS_BATTERYLOW_PATTERN01,
     {ID_STS_MESSAGE_WAR_BATTERY_LOW,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {WAR_HCF_PATTERN01,
     {ID_STS_MESSAGE_WAR_REG_NO_ADJUSTMENT,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },


  /* for DBS */
  {DBS_CLEANING_PATTERN01,
     {ID_STS_MESSAGE_BUSY_CLEANING,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_CARTRIDGE_CHANGE_PATTERN01,
     {ID_STS_MESSAGE_BUSY_CARTRIDGE_CHANGE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_CARTRIDGE_CHANGE_PATTERN02,
     {ID_STS_MESSAGE_BUSY_CARTRIDGE_CHANGE2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_CARTRIDGE_CHANGE_PATTERN03,
     {ID_STS_MESSAGE_BUSY_CARTRIDGE_CHANGE2,
      ID_STS_MESSAGE_COVERCLOSE_SLOWY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_TEST_PRINTING_PATTERN01,
     {ID_STS_MESSAGE_BUSY_TEST_PRINTING,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_PRINTER_USED_PATTERN01,
     {ID_STS_MESSAGE_BUSY_PRINTER_USED,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_TANK_CHANGE_PATTERN01,
     {ID_STS_MESSAGE_BUSY_TANK_CHANGE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_PRINTER_PATTERN01,
     {ID_STS_MESSAGE_BUSY_PRINTER,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DBS_HEADPROTECT_PATTERN01,
     {ID_STS_MESSAGE_BUSY_HEADPROTECT,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  /* for DJS */
  {DJS_BASE_PRINTING_PATTERN01,
     {ID_STS_MESSAGE_BASE_PRINTING,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_BASE_ONLINE_PATTERN01,
     {ID_STS_MESSAGE_BASE_ONLINE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOBCANCEL_PATTERN01,
     {ID_STS_MESSAGE_JOB_JOBCANCEL_STOP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOBCANCEL_PATTERN02,
     {ID_STS_MESSAGE_JOB_JOBCANCEL_STOPRESET,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOBCANCEL_PATTERN03,
     {ID_STS_MESSAGE_JOB_JOBCANCEL_RESUME,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOBCANCEL_PATTERN04,
     {ID_STS_MESSAGE_JOB_JOBCANCEL_NOKEY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOB_PREPARE_PATTERN01,
     {ID_STS_MESSAGE_JOB_PREPARE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_PREPARE_PATTERN01,
     {ID_STS_MESSAGE_PREPARE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {DJS_JOB_DELAY_PATTERN01,
     {ID_STS_MESSAGE_JOB_DELAY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  /* for DOC */
  {OC1200_COVER_OPEN_PATTERN01,
     {ID_STS_MESSAGE_OC_COVER_OPEN,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1200_COVER_OPEN_PATTERN02,
     {ID_STS_MESSAGE_OC_COVER_OPEN2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1200_COVER_OPEN_PATTERN03,
     {ID_STS_MESSAGE_OC_COVER_OPEN2,
      ID_STS_MESSAGE_COVERCLOSE_SLOWY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1250_COVER_CLOSE_PATTERN01,
     {ID_STS_MESSAGE_OC_COVER_CLOSE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1250_COVER_OPEN_PATTERN02,
     {ID_STS_MESSAGE_OC_COVER_CLOSE2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1251_SMARTTRAY_CLOSE_PATTERN01,
     {ID_STS_MESSAGE_OC_SMARTTRAY_CLOSE1,
      ID_STS_MESSAGE_OC_SMARTTRAY_CLOSE2,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1251_SMARTTRAY_CLOSE_PATTERN02,
     {ID_STS_MESSAGE_OC_SMARTTRAY_CLOSE1,
      ID_STS_MESSAGE_OC_SMARTTRAY_CLOSE2,
      ID_STS_MESSAGE_OC_PAPER_OUT_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },


  {OC1851_CDR_GUIDE_PRINT_PATTERN01,
     {ID_STS_MESSAGE_OC_CDR_GUIDE,
      ID_STS_MESSAGE_OC_CDR_GUIDE_2nd,
      ID_STS_MESSAGE_OC_CDR_GUIDE_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1851_CDR_GUIDE_PRINT_PATTERN02,
     {ID_STS_MESSAGE_OC_CDR_GUIDE,
      ID_STS_MESSAGE_OC_CDR_GUIDE_2nd,
      ID_STS_MESSAGE_OC_CDR_GUIDE2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1851_CDR_GUIDE_PRINT_PATTERN03,
     {ID_STS_MESSAGE_OC_CDR_GUIDE3,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_2nd,
      ID_STS_MESSAGE_OC_CDR_GUIDE_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1851_CDR_GUIDE_PRINT_PATTERN04,
     {ID_STS_MESSAGE_OC_CDR_GUIDE3,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_2nd,
      ID_STS_MESSAGE_OC_CDR_GUIDE2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1856_CDR_GUIDE_PATTERN01,
     {ID_STS_MESSAGE_CDR_GUIDE_PRINT2,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT_2nd,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1856_CDR_GUIDE_PATTERN02,
     {ID_STS_MESSAGE_CDR_GUIDE_PRINT2,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT_2nd,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1856_CDR_GUIDE_PATTERN03,
     {ID_STS_MESSAGE_CDR_GUIDE_PRINT3,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_2nd,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1856_CDR_GUIDE_PATTERN04,
     {ID_STS_MESSAGE_CDR_GUIDE_PRINT3,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_2nd,
      ID_STS_MESSAGE_CDR_GUIDE_PRINT2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1680_POSITION_MISMACH_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_POSITION_MISMACH_TANK,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1660_UNINSTALLATION_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_UNINSTALLATION_TANK,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_UNINSTALLATION_TANK_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1683_REMAIN_UNKNOWN_PATTERN01,
     {ID_STS_MESSAGE_OC_REFILL,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_REFILL_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1683_REMAIN_UNKNOWN_PATTERN02,
     {ID_STS_MESSAGE_OC_REFILL_LONG,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_REFILL2_3rd_LONG,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1683_REMAIN_UNKNOWN_PATTERN03,
     {ID_STS_MESSAGE_OC_REFILL_LONG,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_REFILL_3rd_LONG,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },


  {OC1689_REMAIN_UNKNOWN_PATTERN01,
     {ID_STS_MESSAGE_OC_INKEMPTY0602_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_REFILL_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1681_PLURALERROR_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_PLURALERROR_TANK,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_PLURALERROR_TANK_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1684_DIFFERENT_REGION_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_NO_RECOGNIZE_CART,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_NO_RECOGNIZE_CART_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1684_DIFFERENT_REGION_TANK_PATTERN02,
     {ID_STS_MESSAGE_OC_DIFFERENT_REGION_TANK,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_UNINSTALLATION_TANK_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1683_INKUNKNOWN_TANK_PATTERN02,
     {ID_STS_MESSAGE_OC_REFILL,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_REFILL_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1686_REMAIN_UNKNOWN2_PATTERN01,
     {ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2_3rd_START_07SPRING,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1686_REMAIN_UNKNOWN2_PATTERN02,
     {ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2_3rd_MFP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1686_REMAIN_UNKNOWN2_PATTERN03,
     {ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1686_REMAIN_UNKNOWN2_PATTERN04,
     {ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_REMAIN_UNKNOWN2_3rd_OK_07SPRING,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },


  {OC1687_INKTANK_NOTPROPERLY_PATTERN01,
     {ID_STS_MESSAGE_OC_INKTANK_NOTPROPERLY_LOCKLEVER_PUSH,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1687_INKTANK_NOTPROPERLY_PATTERN02,
     {ID_STS_MESSAGE_OC_CARTRIDGE_NOTPROPERLY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1687_INKTANK_NOTPROPERLY_PATTERN03,
     {ID_STS_MESSAGE_OC_INKTANK_NOTPROPERLY_LOCKLEVER_01,
      ID_STS_MESSAGE_OC_INKTANK_NOTPROPERLY_LOCKLEVER_02,
      ID_STS_MESSAGE_OC_INKTANK_NOTPROPERLY_LOCKLEVER_03,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN02,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd_MFP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN03,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd_CARTRIDGE_STOPRESET,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN04,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd_MFP_STOP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN05,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd_CARTRIDGE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1688_INKEMPTY_TANK_PATTERN06,
     {ID_STS_MESSAGE_OC_INKEMPTY06_TANK_1st,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKEMPTY06_TANK_3rd_CARTRIDGE_STOP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1600_INKOUT_TANK_PATTERN01,
     {ID_STS_MESSAGE_OC_INKOUT_TANK2,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKOUT06_TANK,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1600_INKOUT_TANK_PATTERN02,
     {ID_STS_MESSAGE_OC_INKOUT_TANK2,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKOUT06_TANK_MFP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1600_INKOUT_TANK_PATTERN03,
     {ID_STS_MESSAGE_OC_INKOUT_TANK2,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_INKOUT06_TANK_MFP,
      ID_STS_MESSAGE_OC_INKOUT06_FAX,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1700_USEDTANK_ALMOST_PATTERN01,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1700_USEDTANK_ALMOST_PATTERN02,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1700_USEDTANK_ALMOST_PATTERN03,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1700_USEDTANK_ALMOST_PATTERN04,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST_OK2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1700_USEDTANK_ALMOST_PATTERN05,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST_START2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1700_USEDTANK_ALMOST_PATTERN06,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOST_RESUME2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1701_USEDTANK_ALMOST_PATTERN01,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1701_USEDTANK_ALMOST_PATTERN02,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1701_USEDTANK_ALMOST_PATTERN03,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1701_USEDTANK_ALMOST_PATTERN04,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP_OK2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1701_USEDTANK_ALMOST_PATTERN05,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP_START2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1701_USEDTANK_ALMOST_PATTERN06,
     {ID_STS_MESSAGE_OC_USEDTANK_ALMOSTJP_RESUME2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1750_OLDINKTANK_PATTERN01,
     {ID_STS_MESSAGE_OC_OLDINK,
      ID_STS_MESSAGE_COLOR,
      ID_STS_MESSAGE_OC_OLDINK02,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC2500_HEADALIGNMENT_PATTERN01,
     {ID_STS_MESSAGE_OC_HEADALIGNMENT,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC2500_HEADALIGNMENT_PATTERN02,
     {ID_STS_MESSAGE_OC_HEADALIGNMENT2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC141X_HARDWARE_PATTERN01,
     {ID_STS_MESSAGE_OC_HARDWAREERROR_TANK,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC2700_PANELCHK_PATTERN01,
     {ID_STS_MESSAGE_OC_LCDPANEL,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC2001_USBDEVICE_PATTERN01,
     {ID_STS_MESSAGE_OC_USBDEVICE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC2001_USBDEVICE_PATTERN02,
     {ID_STS_MESSAGE_OC_USBDEVICE_BLUETOOTH,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1000_PAPEROUT_PATTERN01,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN02,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT,
      ID_STS_MESSAGE_OC_PAPER_OUT_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN03,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT21RT,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN04,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT21RT,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN05,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT21,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN06,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT21,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1000_PAPEROUT_PATTERN07,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN01,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT22,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN02,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT22,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN03,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_MEDIA,
      ID_STS_MESSAGE_OC_PLAINPAPER,
      ID_STS_MESSAGE_OC_PAPER_OUT22,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_OC_DETAILS,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN04,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_MEDIA,
      ID_STS_MESSAGE_OC_PLAINPAPER,
      ID_STS_MESSAGE_OC_PAPER_OUT22,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_OC_DETAILS,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN05,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT42FT,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN06,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT42,
      ID_STS_MESSAGE_OC_PAPER_OUT33,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN07,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT42FT,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1003_PAPEROUT_PATTERN08,
     {ID_STS_MESSAGE_OC_PAPER_OUT1,
      ID_STS_MESSAGE_OC_PAPER_OUT42,
      ID_STS_MESSAGE_OC_PAPER_OUT3,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },


  {OC1300_PAPERJAM_PATTERN01,
     {ID_STS_MESSAGE_OC_PAPER_JAM,
      ID_STS_MESSAGE_OC_PAPER_JAM1_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1300_PAPERJAM_PATTERN02,
     {ID_STS_MESSAGE_OC_PAPER_JAM,
      ID_STS_MESSAGE_OC_PAPER_JAM1_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1300_PAPERJAM_PATTERN03,
     {ID_STS_MESSAGE_OC_PAPER_JAM1,
      ID_STS_MESSAGE_OC_PAPER_JAM1_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1300_PAPERJAM_PATTERN04,
     {ID_STS_MESSAGE_OC_PAPER_JAM1,
      ID_STS_MESSAGE_OC_PAPER_JAM1_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1300_PAPERJAM_PATTERN05,
     {ID_STS_MESSAGE_OC_PAPER_JAM,
      ID_STS_MESSAGE_OC_PAPER_JAM1_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN01,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN02,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN03,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_02SFP_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN04,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_02MFP_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN05,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2ndFT,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN06,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2ndFF,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN07,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2ndFT,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1303_PAPERJAM_PATTERN08,
     {ID_STS_MESSAGE_OC_PAPER_JAM03,
      ID_STS_MESSAGE_OC_PAPER_JAM03_2ndFF,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1304_PAPERJAM_PATTERN01,
     {ID_STS_MESSAGE_OC_PAPER_JAM04,
      ID_STS_MESSAGE_OC_PAPER_JAM04_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1304_PAPERJAM_PATTERN02,
     {ID_STS_MESSAGE_OC_PAPER_JAM04,
      ID_STS_MESSAGE_OC_PAPER_JAM05_2nd,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1304_PAPERJAM_PATTERN03,
     {ID_STS_MESSAGE_OC_PAPER_JAM04,
      ID_STS_MESSAGE_OC_PAPER_JAM04_2nd_NOT_ONTOSIDE,
      ID_STS_MESSAGE_OC_PAPER_JAM1_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1304_PAPERJAM_PATTERN04,
     {ID_STS_MESSAGE_OC_PAPER_JAM04,
      ID_STS_MESSAGE_OC_PAPER_JAM05_2nd_NOT_ONTOSIDE,
      ID_STS_MESSAGE_OC_PAPER_JAM2_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {OC1401_CARTRIDGENONE_PATTERN01,
     {ID_STS_MESSAGE_CARTRIDGE_NONE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1401_CARTRIDGENONE_PATTERN02,
     {ID_STS_MESSAGE_CARTRIDGE_NONE,
      ID_STS_MESSAGE_COVERCLOSE_SLOWY,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1401_CARTRIDGENONE_PATTERN03,
     {ID_STS_MESSAGE_OC_NO_RECOGNIZE_CART,
      ID_STS_MESSAGE_UNKNOWN_COLOR,
      ID_STS_MESSAGE_OC_NO_RECOGNIZE_CART_3rd,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1403_CARTRIDGENONE_PATTERN01,
     {ID_STS_MESSAGE_OC_HEAD_ERROR,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1403_CARTRIDGENONE_PATTERN02,
     {ID_STS_MESSAGE_OC_HEAD_ERROR2,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1403_CARTRIDGENONE_PATTERN03,
     {ID_STS_MESSAGE_OC_HEAD_ERROR_START,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  {OC1810_BATTERY_ERROR_PATTERN01,
     {ID_STS_MESSAGE_OC_BATTERY_OUT,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },
  
  
  {OC1310_DUPLEX_STOPPAGE_PATTERN01,
     {IDS_STS_MESSAGE_OC_DUPLEX_STOPPAGE_RESUME,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  
  {OC1310_DUPLEX_STOPPAGE_PATTERN02,
     {IDS_STS_MESSAGE_OC_DUPLEX_STOPPAGE_OK,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  /* for DSC */
  {SC5B00_USEDTANK_FULL_PATTERN01,
     {ID_STS_MESSAGE_SC_USEDTANK_FULL,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SC5B01_USEDTANK_FULL_PATTERN01,
     {ID_STS_MESSAGE_SC_USEDTANK_FULLJP,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SC5B00_USEDTANK_FULL_PATTERN02,
     {ID_STS_MESSAGE_SC_SERVICE_ERROR_09COMMON_NUMBER,
      ID_STS_MESSAGE_SC_USEDTANK_FULL_09,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SC5B01_USEDTANK_FULL_PATTERN02,
     {ID_STS_MESSAGE_SC_SERVICE_ERROR_09COMMON_NUMBER,
      ID_STS_MESSAGE_SC_USEDTANK_FULLJP_09,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SCA100_BATTERY_TROUBLE_PATTERN01,
     {ID_STS_MESSAGE_SC_BATTERY_ERROR,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {COMMON_SERIVICE_ERROR_PATTERN,
     {ID_STS_MESSAGE_SC_SERVICE_ERROR_PRE,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SCOTHER_COMMON_SERIVICE_ERROR_PATTERN02,
     {ID_STS_MESSAGE_SC_SERVICE_ERROR_09COMMON_NUMBER,
      ID_STS_MESSAGE_SC_SERVICE_ERROR_09COMMON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {SCB200_VH_MONITOR_EROOR_PATTERN01,
     {ID_STS_MESSAGE_SC_SERVICE_ERROR_09COMMON_NUMBER,
      ID_STS_MESSAGE_SC_SERVICE_ERROR_09VHMONITOR,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

  {ID_STS_MESSAGE_NON,
     {ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON,
      ID_STS_MESSAGE_NON},
  },

};

