/*
	this is a part of TVP (KIRIKIRI) software source.
	see other sources for license.
	(C)2001-2009 W.Dee <dee@kikyou.info> and contributors
*/

/* C-language interface to tvpgl_ia32.lib */
/* this file is always generated by summary.pl */

#include "tjsTypes.h"

#include "tvpgl.h"
#include "tvpgl_ia32_intf.h"

extern tjs_uint32 TVPCPUType;

void TVPGL_IA32_Init()
{
#ifndef TJS_64BIT_OS
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAdditiveAlphaBlend =  TVPAdditiveAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAdditiveAlphaBlend_o =  TVPAdditiveAlphaBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAdditiveAlphaBlend_HDA =  TVPAdditiveAlphaBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAdditiveAlphaBlend_a =  TVPAdditiveAlphaBlend_a_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX && TVPCPUType & TVP_CPU_HAS_EMMX)
	 TVPAdditiveAlphaBlend =  TVPAdditiveAlphaBlend_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX && TVPCPUType & TVP_CPU_HAS_EMMX)
	 TVPAdditiveAlphaBlend_o =  TVPAdditiveAlphaBlend_o_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX && TVPCPUType & TVP_CPU_HAS_EMMX)
	 TVPAdditiveAlphaBlend_HDA =  TVPAdditiveAlphaBlend_HDA_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX && TVPCPUType & TVP_CPU_HAS_EMMX)
	 TVPAdditiveAlphaBlend_a =  TVPAdditiveAlphaBlend_a_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddBlend =  TVPAddBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddBlend_HDA =  TVPAddBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddBlend_o =  TVPAddBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddBlend_HDA_o =  TVPAddBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAdjustGamma_a =  TVPAdjustGamma_a_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPLinTransCopy =  TVPLinTransCopy_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPLinTransConstAlphaBlend =  TVPLinTransConstAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpLinTransCopy =  TVPInterpLinTransCopy_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpLinTransConstAlphaBlend =  TVPInterpLinTransConstAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpLinTransAdditiveAlphaBlend =  TVPInterpLinTransAdditiveAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpLinTransAdditiveAlphaBlend_o =  TVPInterpLinTransAdditiveAlphaBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend =  TVPAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_o =  TVPAlphaBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_HDA =  TVPAlphaBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_d =  TVPAlphaBlend_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstAlphaBlend =  TVPConstAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstAlphaBlend_SD =  TVPConstAlphaBlend_SD_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend =  TVPAlphaBlend_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_o =  TVPAlphaBlend_o_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_HDA =  TVPAlphaBlend_HDA_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAlphaBlend_d =  TVPAlphaBlend_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstAlphaBlend =  TVPConstAlphaBlend_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstAlphaBlend_SD =  TVPConstAlphaBlend_SD_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum16 =  TVPAddSubVertSum16_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum16_d =  TVPAddSubVertSum16_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum32 =  TVPAddSubVertSum32_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum32_d =  TVPAddSubVertSum32_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16 =  TVPDoBoxBlurAvg16_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16_d =  TVPDoBoxBlurAvg16_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg32 =  TVPDoBoxBlurAvg32_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg32_d =  TVPDoBoxBlurAvg32_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum16 =  TVPAddSubVertSum16_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum16_d =  TVPAddSubVertSum16_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum32 =  TVPAddSubVertSum32_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPAddSubVertSum32_d =  TVPAddSubVertSum32_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16 =  TVPDoBoxBlurAvg16_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16_d =  TVPDoBoxBlurAvg16_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg32 =  TVPDoBoxBlurAvg32_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg32_d =  TVPDoBoxBlurAvg32_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_SSE && TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16 =  TVPDoBoxBlurAvg16_sse_a;
if(TVPCPUType & TVP_CPU_HAS_SSE && TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDoBoxBlurAvg16_d =  TVPDoBoxBlurAvg16_d_sse_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPFillARGB =  TVPFillARGB_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_SSE)
	 TVPFillARGB =  TVPFillARGB_sse_a;
if(TVPCPUType & TVP_CPU_HAS_SSE)
	 TVPFillARGB_NC =  TVPFillARGB_NC_sse_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPFillColor =  TVPFillColor_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstColorAlphaBlend =  TVPConstColorAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstColorAlphaBlend_d =  TVPConstColorAlphaBlend_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConstColorAlphaBlend_a =  TVPConstColorAlphaBlend_a_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65 =  TVPApplyColorMap65_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65_d =  TVPApplyColorMap65_d_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65_a =  TVPApplyColorMap65_a_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65 =  TVPApplyColorMap65_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65_d =  TVPApplyColorMap65_d_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPApplyColorMap65_a =  TVPApplyColorMap65_a_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDarkenBlend =  TVPDarkenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDarkenBlend_HDA =  TVPDarkenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPLightenBlend =  TVPLightenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPLightenBlend_HDA =  TVPLightenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_CMOV)
	 TVPMakeAlphaFromKey =  TVPMakeAlphaFromKey_cmovcc_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPMulBlend =  TVPMulBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPMulBlend_HDA =  TVPMulBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPMulBlend_o =  TVPMulBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPMulBlend_HDA_o =  TVPMulBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPConvert24BitTo32Bit =  TVPConvert24BitTo32Bit_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPBLConvert24BitTo32Bit =  TVPBLConvert24BitTo32Bit_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDither32BitTo16Bit565 =  TVPDither32BitTo16Bit565_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPDither32BitTo16Bit555 =  TVPDither32BitTo16Bit555_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPScreenBlend =  TVPScreenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPScreenBlend_HDA =  TVPScreenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPScreenBlend_o =  TVPScreenBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPScreenBlend_HDA_o =  TVPScreenBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPStretchCopy =  TVPStretchCopy_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPStretchConstAlphaBlend =  TVPStretchConstAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPStretchAlphaBlend =  TVPStretchAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPStretchAdditiveAlphaBlend =  TVPStretchAdditiveAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPFastLinearInterpV2 =  TVPFastLinearInterpV2_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPFastLinearInterpH2F =  TVPFastLinearInterpH2F_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPFastLinearInterpH2B =  TVPFastLinearInterpH2B_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpStretchCopy =  TVPInterpStretchCopy_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpStretchConstAlphaBlend =  TVPInterpStretchConstAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpStretchAdditiveAlphaBlend =  TVPInterpStretchAdditiveAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInterpStretchAdditiveAlphaBlend_o =  TVPInterpStretchAdditiveAlphaBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPSubBlend =  TVPSubBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPSubBlend_HDA =  TVPSubBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPSubBlend_o =  TVPSubBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPSubBlend_HDA_o =  TVPSubBlend_HDA_o_mmx_a;
 TVPTLG5DecompressSlide =  TVPTLG5DecompressSlide_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG5ComposeColors3To4 =  TVPTLG5ComposeColors3To4_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG5ComposeColors4To4 =  TVPTLG5ComposeColors4To4_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG6DecodeLine =  TVPTLG6DecodeLine_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_SSE && TVPCPUType & TVP_CPU_HAS_MMX && TVPCPUType & TVP_CPU_HAS_EMMX)
	 TVPTLG6DecodeLine =  TVPTLG6DecodeLine_sse_a;
 TVPTLG6DecodeGolombValuesForFirst =  TVPTLG6DecodeGolombValuesForFirst_a;
 TVPTLG6DecodeGolombValues =  TVPTLG6DecodeGolombValues_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG6DecodeGolombValuesForFirst =  TVPTLG6DecodeGolombValuesForFirst_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG6DecodeGolombValues =  TVPTLG6DecodeGolombValues_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG6DecodeGolombValuesForFirst =  TVPTLG6DecodeGolombValuesForFirst_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPTLG6DecodeGolombValues =  TVPTLG6DecodeGolombValues_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAlphaBlend =  TVPPsAlphaBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAlphaBlend_o =  TVPPsAlphaBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAlphaBlend_HDA =  TVPPsAlphaBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAlphaBlend_HDA_o =  TVPPsAlphaBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAddBlend =  TVPPsAddBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAddBlend_o =  TVPPsAddBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAddBlend_HDA =  TVPPsAddBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsAddBlend_HDA_o =  TVPPsAddBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSubBlend =  TVPPsSubBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSubBlend_o =  TVPPsSubBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSubBlend_HDA =  TVPPsSubBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSubBlend_HDA_o =  TVPPsSubBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsMulBlend =  TVPPsMulBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsMulBlend_o =  TVPPsMulBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsMulBlend_HDA =  TVPPsMulBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsMulBlend_HDA_o =  TVPPsMulBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsScreenBlend =  TVPPsScreenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsScreenBlend_o =  TVPPsScreenBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsScreenBlend_HDA =  TVPPsScreenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsScreenBlend_HDA_o =  TVPPsScreenBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsOverlayBlend =  TVPPsOverlayBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsOverlayBlend_o =  TVPPsOverlayBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsOverlayBlend_HDA =  TVPPsOverlayBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsOverlayBlend_HDA_o =  TVPPsOverlayBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsHardLightBlend =  TVPPsHardLightBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsHardLightBlend_o =  TVPPsHardLightBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsHardLightBlend_HDA =  TVPPsHardLightBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsHardLightBlend_HDA_o =  TVPPsHardLightBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSoftLightBlend =  TVPPsSoftLightBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSoftLightBlend_o =  TVPPsSoftLightBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSoftLightBlend_HDA =  TVPPsSoftLightBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsSoftLightBlend_HDA_o =  TVPPsSoftLightBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodgeBlend =  TVPPsColorDodgeBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodgeBlend_o =  TVPPsColorDodgeBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodgeBlend_HDA =  TVPPsColorDodgeBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodgeBlend_HDA_o =  TVPPsColorDodgeBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodge5Blend =  TVPPsColorDodge5Blend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodge5Blend_o =  TVPPsColorDodge5Blend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodge5Blend_HDA =  TVPPsColorDodge5Blend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorDodge5Blend_HDA_o =  TVPPsColorDodge5Blend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorBurnBlend =  TVPPsColorBurnBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorBurnBlend_o =  TVPPsColorBurnBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorBurnBlend_HDA =  TVPPsColorBurnBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsColorBurnBlend_HDA_o =  TVPPsColorBurnBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsLightenBlend =  TVPPsLightenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsLightenBlend_o =  TVPPsLightenBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsLightenBlend_HDA =  TVPPsLightenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsLightenBlend_HDA_o =  TVPPsLightenBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDarkenBlend =  TVPPsDarkenBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDarkenBlend_o =  TVPPsDarkenBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDarkenBlend_HDA =  TVPPsDarkenBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDarkenBlend_HDA_o =  TVPPsDarkenBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiffBlend =  TVPPsDiffBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiffBlend_o =  TVPPsDiffBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiffBlend_HDA =  TVPPsDiffBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiffBlend_HDA_o =  TVPPsDiffBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiff5Blend =  TVPPsDiff5Blend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiff5Blend_o =  TVPPsDiff5Blend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiff5Blend_HDA =  TVPPsDiff5Blend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsDiff5Blend_HDA_o =  TVPPsDiff5Blend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsExclusionBlend =  TVPPsExclusionBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsExclusionBlend_o =  TVPPsExclusionBlend_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsExclusionBlend_HDA =  TVPPsExclusionBlend_HDA_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPPsExclusionBlend_HDA_o =  TVPPsExclusionBlend_HDA_o_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPInitUnivTransBlendTable =  TVPInitUnivTransBlendTable_mmx_c;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPUnivTransBlend =  TVPUnivTransBlend_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPUnivTransBlend =  TVPUnivTransBlend_emmx_a;
if(TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPUnivTransBlend_switch =  TVPUnivTransBlend_switch_mmx_a;
if(TVPCPUType & TVP_CPU_HAS_EMMX && TVPCPUType & TVP_CPU_HAS_MMX)
	 TVPUnivTransBlend_switch =  TVPUnivTransBlend_switch_emmx_a;
#endif
}


TVP_GL_IA32_FUNC_DECL(void, TVPInitUnivTransBlendTable_mmx_c, (tjs_uint32 *table, tjs_int phase, tjs_int vague))
{
	tjs_uint16 *t = (tjs_uint16*)table;
	tjs_int i;
	tjs_int phasemax = phase + vague;
	phase -= vague;
	for(i = 0; i<256; i++)
	{
		if(i<phase)  t[i] = 0<<7;
		else if(i>=phasemax) t[i] = 255<<7;
		else
		{
			int tmp = ( i - phase )*255 / vague;
			if(tmp<0) tmp = 0;
			if(tmp>255) tmp = 255;
			t[i] = tmp << 7;
		}
	}
}


