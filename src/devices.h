/*
    TheengsDecoder - Decode things and devices

    Copyright: (c)Florian ROBERT

    This file is part of TheengsDecoder.

    TheengsDecoder is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    TheengsDecoder is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "devices/CGD1_json.h"
#include "devices/CGDK2_json.h"
#include "devices/CGG1_json.h"
#include "devices/CGDN1_json.h"
#include "devices/CGH1_json.h"
#include "devices/CGP1W_json.h"
#include "devices/CGPR1_json.h"
#include "devices/GAEN_json.h"
#include "devices/H5055_json.h"
#include "devices/H5072_json.h"
#include "devices/H5074_json.h"
#include "devices/H5102_json.h"
#include "devices/HHCCJCY01HHCC_json.h"
#include "devices/HHCCPOT002_json.h"
#include "devices/IBS_TH1_json.h"
#include "devices/IBS_TH2_json.h"
#include "devices/IBT_2X_json.h"
#include "devices/IBT_4XS_json.h"
#include "devices/IBT_6XS_SOLIS6_json.h"
#include "devices/JQJCY01YM_json.h"
#include "devices/LYWSD02_json.h"
#include "devices/LYWSD03MMC_json.h"
#include "devices/LYWSDCGQ_json.h"
#include "devices/MBXPRO_json.h"
#include "devices/MS_CDP_json.h"
#include "devices/MUE4094RT_json.h"
#include "devices/Miband_json.h"
#include "devices/Mokobeacon_json.h"
#include "devices/RDL52832_json.h"
#include "devices/RuuviTag_RAWv1_json.h"
#include "devices/RuuviTag_RAWv2_json.h"
#include "devices/SBCS_json.h"
#include "devices/SBCU_json.h"
#include "devices/SBMS_json.h"
#include "devices/SBMT_json.h"
#include "devices/SBS1_json.h"
#include "devices/SHT4X_json.h"
#include "devices/SCD4X_json.h"
#include "devices/SmartDry_json.h"
#include "devices/TPMS_json.h"
#include "devices/ThermoBeacon_json.h"
#include "devices/XMTZC04HM_json.h"
#include "devices/XMTZC05HM_json.h"
#include "devices/ABN03_json.h"
#include "devices/ABTemp_json.h"
#include "devices/Amphiro_json.h"
#include "devices/TP35X_json.h"
#include "devices/T301_json.h"
#include "devices/iBeacon_json.h"
#include "devices/iNodeEM_json.h"
#include "devices/BM_V23_json.h"
#include "devices/BPARASITE_json.h"
#include "devices/BWBSDOO_json.h"
#include "devices/BM2_json.h"
#include "devices/ServiceData_json.h"

const char* _devices[][2] = {
    {_HHCCJCY01HHCC_json, _HHCCJCY01HHCC_json_props},
    {_LYWSD02_json, _LYWSD02_json_props},
    {_LYWSDCGQ_json, _LYWSDCGQ_json_props},
    {_CGP1W_json, _CGP1W_json_props},
    {_CGG1_json_STOCK, _CGG1_json_props},
    {_CGG1_json_ATC1441, _CGG1_json_props},
    {_CGG1_json_PVVX, _CGG1_json_props},
    {_CGG1_json_STOCK_2, _CGG1_json_props},
    {_CGDN1_json, _CGDN1_json_props},
    {_CGD1_json, _CGD1_json_props},
    {_CGDK2_json, _CGDK2_json_props},
    {_CGH1_json, _CGH1_json_props},
    {_JQJCY01YM_json, _JQJCY01YM_json_props},
    {_IBS_TH1_json, _IBS_TH1_json_props},
    {_IBS_TH2_json, _IBS_TH2_json_props},
    {_IBT_4XS_json, _IBT_4XS_json_props},
    {_IBT_6XS_SOLIS6_json, _IBT_6XS_SOLIS6_json_props},
    {_Miband_json, _Miband_json_props},
    {_XMTZC04HM_json, _XMTZC04HM_json_props},
    {_XMTZC05HM_json, _XMTZC05HM_json_props},
    {_TPMS_json, _TPMS_json_props},
    {_LYWSD03MMC_json_ATC, _LYWSD03MMC_json_props},
    {_LYWSD03MMC_json_PVVX, _LYWSD03MMC_json_props},
    {_CGPR1_json, _CGPR1_json_props},
    {_ThermoBeacon_json, _ThermoBeacon_json_props},
    {_H5055_json, _H5055_json_props},
    {_H5072_json, _H5072_json_props},
    {_H5074_json, _H5074_json_props},
    {_H5102_json, _H5102_json_props},
    {_MUE4094RT_json, _MUE4094RT_json_props},
    {_Mokobeacon_json, _Mokobeacon_json_props},
    {_MBXPRO_json, _MBXPRO_json_props},
    {_iNodeEM_json, _iNodeEM_json_props},
    {_IBT_2X_json, _IBT_2X_json_props},
    {_RuuviTag_RAWv1_json, _RuuviTag_RAWv1_json_props},
    {_RuuviTag_RAWv2_json, _RuuviTag_RAWv2_json_props},
    {_SBCS_json, _SBCS_json_props},
    {_SBCU_json, _SBCU_json_props},
    {_SBMS_json, _SBMS_json_props},
    {_SBMT_json, _SBMT_json_props},
    {_SBS1_json, _SBS1_json_props},
    {_SHT4X_json, _SHT4X_json_props},
    {_SCD4X_json, _SCD4X_json_props},
    {_SmartDry_json, _SmartDry_json_props},
    {_BM_V23_json, _BM_V23_json_props},
    {_MS_CDP_json, _MS_CDP_json_props},
    {_GAEN_json, _GAEN_json_props},
    {_HHCCPOT002_json, _HHCCPOT002_json_props},
    {_BPARASITE_json, _BPARASITE_json_props},
    {_BWBSDOO_json, _BWBSDOO_json_props},
    {_BM2_json, _BM2_json_props},
    {_RDL52832_json, _RDL52832_json_props},
    {_ABN03_json, _ABN03_json_props},
    {_ABTemp_json, _ABTemp_json_props},
    {_AMPHIRO_json, _AMPHIRO_json_props},
    {_TP35X_json, _TP35X_json_props},
    {_T301_json, _T301_json_props},
    {_ibeacon_json, _ibeacon_json_props},
    {_ServiceData_json, _ServiceData_json_props},
};
