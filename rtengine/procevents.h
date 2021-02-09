/*
 *  This file is part of RawTherapee.
 *
 *  Copyright (c) 2004-2010 Gabor Horvath <hgabor@rawtherapee.com>
 *
 *  RawTherapee is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  RawTherapee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RawTherapee.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

namespace rtengine
{

// Aligned so the first entry starts on line 30
enum ProcEventCode {
    EvPhotoLoaded = 0,
    EvProfileLoaded = 1,
    EvProfileChanged = 2,
    EvHistoryBrowsed = 3,
    EvBrightness = 4,
    EvContrast = 5,
    EvBlack = 6,
    EvExpComp = 7,
    EvHLCompr = 8,
    EvSHCompr = 9,
    EvToneCurve1 = 10,
    EvAutoExp = 11,
    EvClip = 12,
    EvLBrightness = 13,
    EvLContrast = 14,
    EvLBlack = 15,
    EvLHLCompr = 16,
    EvLSHCompr = 17,
    EvLLCurve = 18,
    EvShrEnabled = 19,
    EvShrRadius = 20,
    EvShrAmount = 21,
    EvShrThresh = 22,
    EvShrEdgeOnly = 23,
    EvShrEdgeRadius = 24,
    EvShrEdgeTolerance = 25,
    EvShrHaloControl = 26,
    EvShrHaloAmount = 27,
    EvShrMethod = 28,
    EvShrDRadius = 29,
    EvShrDAmount = 30,
    EvShrDDamping = 31,
    EvShrDIterations = 32,
    EvLCPUseDist = 33,
    EvLCPUseVign = 34,
    EvLCPUseCA = 35,
    EvFixedExp = 36,
    EvWBMethod = 37,
    EvWBTemp = 38,
    EvWBGreen = 39,
    EvToneCurveMode1 = 40,
    EvToneCurve2 = 41,
    EvToneCurveMode2 = 42,
    obsolete_43 = 43, // obsolete
    obsolete_44 = 44, // obsolete
    obsolete_45 = 45, // obsolete
    obsolete_46 = 46, // obsolete
    EvDCPToneCurve = 47,
    EvDCPIlluminant = 48,
    EvSHEnabled = 49,
    EvSHHighlights = 50,
    EvSHShadows = 51,
    EvSHHLTonalW = 52,
    EvSHSHTonalW = 53,
    EvSHLContrast = 54,
    EvSHRadius = 55,
    EvCTRotate = 56,
    EvCTHFlip = 57,
    EvCTVFlip = 58,
    EvROTDegree = 59,
    EvTransAutoFill = 60,
    EvDISTAmount = 61,
    EvBookmarkSelected = 62,
    EvCrop = 63,
    EvCACorr = 64,
    EvHREnabled = 65,
    obsolete_66 = 66, //obsolete
    EvHRMethod = 67,
    EvWProfile = 68,
    EvOProfile = 69,
    EvIProfile = 70,
    EvVignettingAmount = 71,
    EvChMixer = 72,
    EvResizeScale = 73,
    EvResizeMethod = 74,
    EvExif = 75,
    EvIPTC = 76,
    EvResizeSpec = 77,
    EvResizeWidth = 78,
    EvResizeHeight = 79,
    EvResizeEnabled = 80,
    EvProfileChangeNotification = 81,
    EvSHHighQuality = 82,
    EvPerspCorr = 83,
    EvLCPFile = 84,
    EvRGBrCurveLumamode = 85,
    EvIDNEnabled = 86,
    EvIDNThresh = 87,
    EvDPDNEnabled = 88,
    EvDPDNLuma = 89,
    EvDPDNChroma = 90,
    EvDPDNGamma = 91,
    EvDirPyrEqualizer = 92,
    EvDirPyrEqlEnabled = 93,
    EvLSaturation = 94,
    EvLaCurve = 95,
    EvLbCurve = 96,
    EvDemosaicMethod = 97,
    EvPreProcessHotPixel = 98,
    EvSaturation = 99,
    EvHSVEqualizerH = 100,
    EvHSVEqualizerS = 101,
    EvHSVEqualizerV = 102,
    EvHSVEqEnabled = 103,
    EvDefringeEnabled = 104,
    EvDefringeRadius = 105,
    EvDefringeThreshold = 106,
    EvHLComprThreshold = 107,
    EvResizeBoundingBox = 108,
    EvResizeAppliesTo = 109,
    EvLAvoidColorShift = 110,
    obsolete_111 = 111,    // obsolete
    EvLRSTProtection = 112,
    EvDemosaicDCBIter = 113,
    EvDemosaicFalseColorIter = 114,
    EvDemosaicDCBEnhanced = 115,
    EvPreProcessCARed = 116,
    EvPreProcessCABlue = 117,
    EvPreProcessLineDenoise = 118,
    EvPreProcessGEquilThresh = 119,
    EvPreProcessAutoCA = 120,
    EvPreProcessAutoDF = 121,
    EvPreProcessDFFile = 122,
    EvPreProcessExpCorrLinear = 123,
    obsolete_124 = 124, // obsolete
    EvFlatFieldFile = 125,
    EvFlatFieldAutoSelect = 126,
    EvFlatFieldBlurRadius = 127,
    EvFlatFieldBlurType = 128,
    EvAutoDIST = 129,
    EvDPDNLumCurve = 130,
    EvDPDNChromCurve = 131,
    EvGAMMA = 132,
    EvGAMPOS = 133,
    EvGAMFREE = 134,
    EvSLPOS = 135,
    EvPreProcessExpBlackzero = 136,
    EvPreProcessExpBlackone = 137,
    EvPreProcessExpBlacktwo = 138,
    EvPreProcessExpBlackthree = 139,
    EvPreProcessExptwoGreen = 140,
    EvSharpenEdgePasses = 141,
    EvSharpenEdgeAmount = 142,
    EvSharpenMicroAmount = 143,
    EvSharpenMicroUniformity = 144,
    EvSharpenEdgeEnabled = 145,
    EvSharpenEdgeThreechannels = 146,
    EvSharpenMicroEnabled = 147,
    EvSharpenMicroMatrix = 148,
    EvDemosaicALLEnhanced = 149,  // Disabled but not removed for now, may be reintroduced some day
    EvVibranceEnabled = 150,
    EvVibrancePastels = 151,
    EvVibranceSaturated = 152,
    EvVibranceProtectSkins = 153,
    EvVibranceAvoidColorShift = 154,
    EvVibrancePastSatTog = 155,
    EvVibrancePastSatThreshold = 156,
    EvEPDStrength = 157,
    EvEPDEdgeStopping = 158,
    EvEPDScale = 159,
    EvEPDReweightingIterates = 160,
    EvEPDEnabled = 161,
    EvRGBrCurve = 162,
    EvRGBgCurve = 163,
    EvRGBbCurve = 164,
    EvNeutralExp = 165,
    EvDemosaicMethodPreProc = 166,
    EvLCCCurve = 167,
    EvLCHCurve = 168,
    EvVibranceSkinTonesCurve = 169,
    EvLLCCurve = 170,
    EvLLCredsk = 171,
    EvDPDNLdetail = 172,
    EvCATEnabled = 173,
    EvCATDegree = 174,
    EvCATMethodsur = 175,
    EvCATAdapscen = 176,
    EvCATAdapLum = 177,
    EvCATMethodWB = 178,
    EvCATJLight = 179,
    EvCATChroma = 180,
    EvCATAutoDegree = 181,
    EvCATContrast = 182,
    EvCATsurr = 183,
    EvCATgamut = 184,
    EvCATMethodalg = 185,
    EvCATRstpro = 186,
    EvCATQbright = 187,
    EvCATQContrast = 188,
    EvCATSChroma = 189,
    EvCATMChroma = 190,
    EvCAThue = 191,
    EvCATCurve1 = 192,
    EvCATCurve2 = 193,
    EvCATCurveMode1 = 194,
    EvCATCurveMode2 = 195,
    EvCATCurve3 = 196,
    EvCATCurveMode3 = 197,
    EvCATdatacie = 198,
    EvCATtonecie = 199,
    EvDPDNredchro = 200,
    EvDPDNbluechro = 201,
    EvDPDNmet = 202,
    EvDemosaicLMMSEIter = 203,
    EvCATbadpix = 204,
    EvCATAutoAdap = 205,
    EvPFCurve = 206,
    EvWBequal = 207,
    EvWBequalbo = 208,
    EvGradientDegree = 209,
    EvGradientEnabled = 210,
    EvPCVignetteStrength = 211,
    EvPCVignetteEnabled = 212,
    EvBWChmixEnabled = 213,
    EvBWred = 214,
    EvBWgreen = 215,
    EvBWblue = 216,
    EvBWredgam = 217,
    EvBWgreengam = 218,
    EvBWbluegam = 219,
    EvBWfilter = 220,
    EvBWsetting = 221,
    EvBWoran = 222,
    EvBWyell = 223,
    EvBWcyan = 224,
    EvBWmag = 225,
    EvBWpur = 226,
    EvBWLuminanceEqual = 227,
    EvBWChmixEnabledLm = 228,
    EvBWmethod = 229,
    EvBWBeforeCurve = 230,
    EvBWBeforeCurveMode = 231,
    EvBWAfterCurve = 232,
    EvBWAfterCurveMode = 233,
    EvAutoch = 234,
//  EvFixedch=235,   -- can be reused --
    EvNeutralBW = 236,
    EvGradientFeather = 237,
    EvGradientStrength = 238,
    EvGradientCenter = 239,
    EvPCVignetteFeather = 240,
    EvPCVignetteRoundness = 241,
    EvVignettingRadius = 242,
    EvVignettingStrenght = 243,
    EvVignettingCenter = 244,
    EvLCLCurve = 245,
    EvLLHCurve = 246,
    EvLHHCurve = 247,
    EvDirPyrEqualizerThreshold = 248,
    EvDPDNenhance = 249,
    EvBWMethodalg = 250,
    EvDirPyrEqualizerSkin = 251,
    EvDirPyrEqlgamutlab = 252,
    EvDirPyrEqualizerHueskin = 253,
    EvDPDNmedian = 254, //  EvDirPyrEqualizeralg=254,
    EvDPDNmedmet = 255,
    EvColorToningEnabled = 256,
    EvColorToningColor = 257,
    EvColorToningOpacity = 258,
    EvColorToningCLCurve = 259, //  EvColorToningTwocolor=259,
    EvColorToningMethod = 260,
    EvColorToningLLCurve = 261,
    EvColorToningredlow = 262,
    EvColorToninggreenlow = 263,
    EvColorToningbluelow = 264,
    EvColorToningredmed = 265,
    EvColorToninggreenmed = 266,
    EvColorToningbluemed = 267,
    EvColorToningredhigh = 268,
    EvColorToninggreenhigh = 269,
    EvColorToningbluehigh = 270,
    EvColorToningbalance = 271,
    EvColorToningNeutral = 272,
    EvColorToningsatlow = 273,
    EvColorToningsathigh = 274,
    EvColorToningTwocolor = 275,
    EvColorToningNeutralcur = 276,
    EvColorToningLumamode = 277,
    EvColorToningShadows = 278,
    EvColorToningHighights = 279,
    EvColorToningSatProtection = 280,
    EvColorToningSatThreshold = 281,
    EvColorToningStrength = 282,
    EvColorToningautosat = 283,
    EvDPDNmetmed = 284,
    EvDPDNrgbmet = 285,
    EvDPDNpasses = 286,
    EvFlatFieldClipControl = 287,
    EvFlatFieldAutoClipControl = 288,
    EvPreProcessExpBlackRed = 289,
    EvPreProcessExpBlackGreen = 290,
    EvPreProcessExpBlackBlue = 291,
    EvFilmSimulationEnabled = 292,
    EvFilmSimulationStrength = 293,
    EvFilmSimulationFilename = 294,
    EvDPDNLCurve = 295,
    EvDPDNsmet = 296,
    EvPreProcessDeadPixel = 297,
    EvDPDNCCCurve = 298,
    EvDPDNautochroma = 299,
    EvDPDNLmet = 300,
    EvDPDNCmet = 301,
    EvDPDNC2met = 302,
    EvWavelet = 303,
    EvWavEnabled = 304,
    EvWavLmet = 305,
    EvWavCLmet = 306,
    EvWavDirmeto = 307,
    EvWavtiles = 308,
    EvWavsky = 309,
    EvWavthres = 310,
    EvWavthr = 311,
    EvWavchroma = 312,
    EvWavmedian = 313,
    EvWavunif = 314,
    EvWavSkin = 315,
    EvWavHueskin = 316,
    EvWavThreshold = 317,
    EvWavlhl = 318,
    EvWavlbl = 319,
    EvWavThreshold2 = 320,
    EvWavavoid = 321,
    EvWavCCCurve = 322,
    EvWavpast = 323,
    EvWavsat = 324,
    EvWavCHmet = 325,
    EvWavHSmet = 326,
    EvWavchro = 327,
    EvWavColor = 328,
    EvWavOpac = 329,
    EvWavsup = 330,
    EvWavTilesmet = 331,
    EvWavrescon = 332,
    EvWavreschro = 333,
    EvWavresconH = 334,
    EvWavthrH = 335,
    EvWavHueskin2 = 336,
    EvWavedgrad = 337,
    EvWavedgval = 338,
    EvWavStrength = 339,
    EvWavdaubcoeffmet = 340,
    EvWavedgreinf = 341,
    EvWaveletch = 342,
    EvWavCHSLmet = 343,
    EvWavedgcont = 344,
    EvWavEDmet = 345,
    EvWavlev0nois = 346,
    EvWavlev1nois = 347,
    EvWavlev2nois = 348,
    EvWavmedianlev = 349,
    EvWavHHCurve = 350,
    EvWavBackmet = 351,
    EvWavedgedetect = 352,
    EvWavlipst = 353,
    EvWavedgedetectthr = 354,
    EvWavedgedetectthr2 = 355,
    EvWavlinkedg = 356,
    EvWavCHCurve = 357,
    EvPreProcessHotDeadThresh = 358,
    EvEPDgamma = 359,
    EvWavtmr = 360,
    EvWavTMmet = 361,
    EvWavtmrs = 362,
    EvWavbalance = 363,
    EvWaviter = 364,
    EvWavgamma = 365,
    EvWavCLCurve = 366,
    EvWavopacity = 367,
    EvWavBAmet = 368,
    EvWavopacityWL = 369,
    EvPrShrEnabled = 370,
    EvPrShrRadius = 371,
    EvPrShrAmount = 372,
    EvPrShrThresh = 373,
    EvPrShrEdgeOnly = 374,
    EvPrShrEdgeRadius = 375,
    EvPrShrEdgeTolerance = 376,
    EvPrShrHaloControl = 377,
    EvPrShrHaloAmount = 378,
    EvPrShrMethod = 379,
    EvPrShrDRadius = 380,
    EvPrShrDAmount = 381,
    EvPrShrDDamping = 382,
    EvPrShrDIterations = 383,
    EvWavcbenab = 384,
    EvWavgreenhigh = 385,
    EvWavbluehigh = 386,
    EvWavgreenmed = 387,
    EvWavbluemed = 388,
    EvWavgreenlow = 389,
    EvWavbluelow = 390,
    EvWavNeutral = 391,
    EvDCPApplyLookTable = 392,
    EvDCPApplyBaselineExposureOffset = 393,
    EvDCPApplyHueSatMap = 394,
    EvWavenacont = 395,
    EvWavenachrom = 396,
    EvWavenaedge = 397,
    EvWavenares = 398,
    EvWavenafin = 399,
    EvWavenatoning = 400,
    EvWavenanoise = 401,
    EvWavedgesensi = 402,
    EvWavedgeampli = 403,
    EvWavlev3nois = 404,
    EvWavNPmet = 405,
    EvretinexMethod = 406,
    EvLneigh = 407,
    EvLgain = 408,
    EvLoffs = 409,
    EvLstr = 410,
    EvLscal = 411,
    EvLvart = 412,
    EvLCDCurve = 413,
    EvRetinextransmission = 414,
    EvRetinexEnabled = 415,
    EvRetinexmedianmap = 416,
    EvLlimd = 417,
    EvretinexColorSpace = 418, // 418 if we want a separate history entry "Retinex - Color space", 406 if we don't
    EvLCDHCurve = 419,
    Evretinexgamma = 420,
    EvLgam = 421,
    EvLslope = 422,
    EvLhighl = 423,
//    EvLbaselog = 424,   -- can be reused --
    EvRetinexlhcurve = 425,
    EvOIntent = 426,
    EvMonitorTransform = 427,
    EvLiter = 428,
    EvLgrad = 429,
    EvLgrads = 430,
    EvLhighlights = 431,
    EvLh_tonalwidth = 432,
    EvLshadows = 433,
    EvLs_tonalwidth = 434,
    EvLradius = 435,
    EvmapMethod = 436,
    EvRetinexmapcurve = 437,
    EvviewMethod = 438,
    EvcbdlMethod = 439,
    EvRetinexgaintransmission = 440,
    EvLskal = 441,
    EvOBPCompens = 442,
    EvWBtempBias = 443,
    EvRawImageNum = 444,
//    EvPixelShiftMotion = 445,
//    EvPixelShiftMotionCorrection = 446,
//    EvPixelShiftStddevFactorGreen = 447,
    EvPixelShiftEperIso = 448,
//    EvPixelShiftNreadIso = 449,
//    EvPixelShiftPrnu = 450,
    EvPixelshiftShowMotion = 451,
    EvPixelshiftShowMotionMaskOnly = 452,
//    EvPixelShiftAutomatic = 453,
//    EvPixelShiftNonGreenHorizontal = 454,
//    EvPixelShiftNonGreenVertical = 455,
    EvPixelShiftNonGreenCross = 456,
//    EvPixelShiftStddevFactorRed = 457,
//    EvPixelShiftStddevFactorBlue = 458,
//    EvPixelShiftGreenAmaze = 459,
//    EvPixelShiftNonGreenAmaze = 460,
    EvPixelShiftGreen = 461,
//    EvPixelShiftRedBlueWeight = 462,
    EvPixelShiftBlur = 463,
    EvPixelShiftSigma = 464,
//    EvPixelShiftSum = 465,
//    EvPixelShiftExp0 = 466,
    EvPixelShiftHoleFill = 467,
    EvPixelShiftMedian = 468,
//    EvPixelShiftMedian3 = 469,
    EvPixelShiftMotionMethod = 470,
    EvPixelShiftSmooth = 471,
    EvPixelShiftLmmse = 472,
    EvPixelShiftEqualBright = 473,
    EvPixelShiftEqualBrightChannel = 474,
    EvCATtempout = 475,
    EvCATgreenout = 476,
    EvCATybout = 477,
    EvCATDegreeout = 478,
    EvCATAutoDegreeout = 479,
    EvCATtempsc = 480,
    EvCATgreensc = 481,
    EvCATybscen = 482,
    EvCATAutoyb = 483,
    EvLensCorrMode = 484,
    EvLensCorrLensfunCamera = 485,
    EvLensCorrLensfunLens = 486,
    EvTMFattalEnabled = 487,
    EvTMFattalThreshold = 488,
    EvTMFattalAmount = 489,
    EvWBEnabled = 490,
    EvRGBEnabled = 491,
    EvLEnabled = 492,
    EvPdShrEnabled = 493,
    EvPdShrMaskToggled = 494,
    EvLocallabSpotDeleted = 495,
    EvLocallabSpotSelected = 496,
    EvLocallabSpotName = 497,
    EvLocallabSpotVisibility = 498,
    EvLocallabSpotShape = 499,
    EvLocallabSpotSpotMethod = 500,
    EvLocallabSpotShapeMethod = 501,
    EvLocallabSpotLocX = 502,
    EvLocallabSpotLocXL = 503,
    EvLocallabSpotLocY = 504,
    EvLocallabSpotLocYT = 505,
    EvLocallabSpotCenter = 506,
    EvLocallabSpotCircrad = 507,
    EvLocallabSpotQualityMethod = 508,
    EvLocallabSpotTransit = 509,
    EvLocallabSpotThresh = 510,
    EvLocallabSpotIter = 511,
    EvLocallabSpotSensiexclu = 512,
    EvLocallabSpotStruc = 513,
    EvlocallabEnabled = 514,
    EvLocenacolor = 515,
    Evlocallabcurvactiv = 516,
    Evlocallablightness = 517,
    Evlocallabcontrast = 518,
    Evlocallabchroma = 519,
    Evlocallabsensi = 520,
    EvlocallabqualitycurveMethod = 521,
    Evlocallabllshape = 522,
    Evlocallabccshape = 523,
    EvlocallabLHshape = 524,
    EvlocallabHHshape = 525,
    Evlocallabinvers = 526,
    EvLocenaexpose = 527,
    Evlocallabexpcomp = 528,
    Evlocallabhlcompr = 529,
    Evlocallabhlcomprthresh = 530,
    Evlocallabblack = 531,
    Evlocallabshcompr = 532,
    Evlocallabwarm = 533,
    Evlocallabsensiex = 534,
    Evlocallabshapeexpos = 535,
    EvLocenavibrance = 536,
    EvlocallabSaturated = 537,
    EvlocallabPastels = 538,
    EvlocallabPastSatThreshold = 539,
    EvlocallabProtectSkins = 540,
    EvlocallabAvoidColorShift = 541,
    EvlocallabPastSatTog = 542,
    Evlocallabsensiv = 543,
    EvlocallabSkinTonesCurve = 544,
    EvLocenablur = 545,
    Evlocallabradius = 546,
    Evlocallabstrength = 547,
    Evlocallabsensibn = 548,
    EvlocallabblurMethod = 549,
    Evlocallabactivlum = 550,
    EvLocenatonemap = 551,
    Evlocallabstren = 552,
    Evlocallabgamma = 553,
    Evlocallabestop = 554,
    Evlocallabscaltm = 555,
    Evlocallabrewei = 556,
    Evlocallabsensitm = 557,
    EvLocenareti = 558,
    EvlocallabretinexMethod = 559,
    Evlocallabstr = 560,
    Evlocallabchrrt = 561,
    Evlocallabneigh = 562,
    Evlocallabvart = 563,
    Evlocallabsensih = 564,
    EvlocallabCTgainCurve = 565,
    Evlocallabinversret = 566,
    EvLocenasharp = 567,
    Evlocallabsharradius = 568,
    Evlocallabsharamount = 569,
    Evlocallabshardamping = 570,
    Evlocallabshariter = 571,
    Evlocallabsensis = 572,
    Evlocallabinverssha = 573,
    EvLocenacbdl = 574,
    EvlocallabEqualizer = 575,
    Evlocallabchromacbdl = 576,
    EvlocallabThresho = 577,
    Evlocallabsensicb = 578,
    // EvLocenadenoi = 579,
    Evlocallabnoiselumf = 580,
    Evlocallabnoiselumc = 581,
    Evlocallabnoiselumdetail = 582,
    Evlocallabnoiselequal = 583,
    Evlocallabnoisechrof = 584,
    Evlocallabnoisechroc = 585,
    Evlocallabnoisechrodetail = 586,
    Evlocallabadjblur = 587,
    Evlocallabbilateral = 588,
    Evlocallabsensiden = 589,
    Evlocallabavoid = 590,
    Evlocallabsharcontrast = 591,
    EvLocenacontrast = 592,
    Evlocallablcradius = 593,
    Evlocallablcamount = 594,
    Evlocallablcdarkness = 595,
    Evlocallablclightness = 596,
    Evlocallabsensilc = 597,
    Evlocallabdehaz = 598,
    EvLocenasoft = 599,
    Evlocallabstreng = 600,
    Evlocallabsensisf = 601,
    Evlocallabsharblur = 602,
    EvLocenalabregion = 603,
    EvlocallabshowmaskMethod = 604,
    EvLocallabSpotSelectedWithMask = 605,
    EvlocallabCCmaskshape = 606,
    EvlocallabLLmaskshape = 607,
    EvlocallabCCmaskexpshape = 608,
    EvlocallabLLmaskexpshape = 609,
    EvlocallabHHmaskshape = 610,
    Evlocallabstructcol = 611,
    Evlocallabstructexp = 612,
    EvlocallabHHmaskexpshape = 613,
    Evlocallabblendmaskcol = 614,
    Evlocallabblendmaskexp = 615,
    Evlocallabblurexpde = 616,
    EvLocallabEnaColorMask = 617,
    EvLocallabEnaExpMask = 618,
    Evlocallabblurcolde = 619,
    Evlocallabinversex = 620,
    Evlocallabstructexlu = 621,
    Evlocallabexpchroma = 622,
    EvLocallabLabGridValue = 623,
    EvLocallabLabstrengthgrid = 624,
    EvLocallabgridMethod = 625,
    EvLocenashadhigh = 626,
    Evlocallabhighlights = 627,
    Evlocallabh_tonalwidth = 628,
    Evlocallabshadows = 629,
    Evlocallabs_tonalwidth = 630,
    Evlocallabsh_radius = 631,
    Evlocallabsensihs = 632,
    Evlocallabradmaskcol = 633,
    Evlocallabradmaskexp = 634,
    EvlocallabToolAdded = 635,
    EvlocallabCCmaskSHshape = 636,
    EvlocallabLLmaskSHshape = 637,
    EvlocallabHHmaskSHshape = 638,
    EvlocallabblendmaskSH = 639,
    EvLocallabEnaSHMask = 640,
    EvlocallabradmaskSH = 641,
    EvlocallabblurSHde = 642,
    Evlocallabinverssh = 643,
    EvLocallabSpotbalan = 644,
    Evlocallabchromaskexp = 645,
    Evlocallabgammaskexp = 646,
    Evlocallabslomaskexp = 647,
    Evlocallabsoftradiusexp = 648,
    Evlocallabchromaskcol = 649,
    Evlocallabgammaskcol = 650,
    Evlocallabslomaskcol = 651,
    EvlocallabchromaskSH = 652,
    EvlocallabgammaskSH = 653,
    EvlocallabslomaskSH = 654,
    Evlocallabsoftradiuscol = 655,
    Evlocallabsoftradiusret = 656,
    Evlocallabsoftradiuscb = 657,
    EvLocallabSpotTransitweak = 658,
    EvLocallabclarityml = 659,
    EvLocallabcontresid = 660,
    Evlocallabnoiselumf0 = 661,
    Evlocallabnoiselumf2 = 662,
    //EvLocallabblurcbdl = 663,
    Evlocallabblendmaskcb = 664,
    Evlocallabradmaskcb = 665,
    Evlocallabchromaskcb = 666,
    Evlocallabgammaskcb = 667,
    Evlocallabslomaskcb = 668,
    EvlocallabCCmaskcbshape = 669,
    EvlocallabLLmaskcbshape = 670,
    EvlocallabHHmaskcbshape = 671,
    EvLocallabEnacbMask = 672,
    EvlocallabToolRemovedWithoutRefresh = 673,
    Evlocallabsoftradiustm = 674,
    EvLocallabSpotTransitgrad = 675,
    Evlocallabamount = 676,
    Evlocallabsatur = 677,
    EvlocallabCCmaskretishape = 678,
    EvlocallabLLmaskretishape = 679,
    EvlocallabHHmaskretishape = 680,
    EvLocallabEnaretiMask = 681,
    Evlocallabblendmaskreti = 682,
    Evlocallabradmaskreti = 683,
    Evlocallabchromaskreti = 684,
    Evlocallabgammaskreti = 685,
    Evlocallabslomaskreti = 686,
    EvlocallabToolRemovedWithRefresh = 687,
    EvLocallabEnaretiMasktmap = 688,
    Evlocallabscalereti = 689,
    Evlocallabdarkness = 690,
    Evlocallablightnessreti = 691,
    Evlocallablimd = 692,
    Evlocallablaplace = 693,
    EvlocallabsoftMethod = 694,
    Evlocallabequilret = 695,
    Evlocallabequiltm = 696,
    Evlocallabfftwlc = 697,
    Evlocallabfftwreti = 698,
    // EvlocallabshowmasksoftMethod = 699,
    Evlocallabshadex = 700,
    EvlocallabexpMethod = 701,
    Evlocallablaplacexp = 702,
    Evlocallabbalanexp = 703,
    Evlocallablinear = 704,
    EvlocallabCCmasktmshape = 705,
    EvlocallabLLmasktmshape = 706,
    EvlocallabHHmasktmshape = 707,
    EvLocallabEnatmMask = 708,
    Evlocallabblendmasktm = 709,
    Evlocallabradmasktm = 710,
    Evlocallabchromasktm = 711,
    Evlocallabgammasktm = 712,
    Evlocallabslomasktm = 713,
    // EvlocallabshowmasktmMethod = 714,
    EvlocallablocalcontMethod = 715,
    EvlocallabwavCurve = 716,
    Evlocallablevelwav = 717,
    Evlocallabresidcont = 718,
    EvlocallabCCmaskblshape = 719,
    EvlocallabLLmaskblshape = 720,
    EvlocallabHHmaskblshape = 721,
    EvLocallabEnablMask = 722,
    // EvlocallabshowmaskblMethod = 723,
    Evlocallabblendmaskbl = 724,
    Evlocallabradmaskbl = 725,
    Evlocallabchromaskbl = 726,
    Evlocallabgammaskbl = 727,
    Evlocallabslomaskbl = 728,
    EvlocallabblMethod = 729,
    EvlocallabmedMethod = 730,
    Evlocallabitera = 731,
    Evlocallabguidbl = 732,
    Evlocallabepsbl = 733,
    // EvlocallabshowmaskcolMethodinv = 734,
    // EvlocallabshowmaskexpMethodinv = 735,
    // EvlocallabshowmaskSHMethodinv = 736,
    Evlocallabclarilres = 737,
    Evlocallabclarisoft = 738,
    Evlocallabclaricres = 739,
    Evlocallabresidchro = 740,
    Evlocallabgamm = 741,
    Evlocallabfatamount = 742,
    Evlocallabfatdetail = 743,
    Evlocallabfatanchor = 744,
    Evlocallabfatlevel = 745,
    EvLocallabSpotCreated = 746,
    EvlocallabexnoiseMethod = 747,
    Evlocallabdepth = 748,
    Evlocallabloglin = 749,
    EvlocallabdehazeSaturation = 750,
    Evlocallaboffs = 751,
    EvlocallabCTtransCurve = 752,
    Evlocallabcliptm = 753,
    EvLocallabEnatmMaskaft = 754,
    EvLocallabEnaExpMaskaft = 755,
    Evlocallablapmasktm = 756,
    Evlocallablapmaskreti = 757,
    Evlocallablapmaskexp = 758,
    Evlocallablapmaskcol = 759,
    EvlocallablapmaskSH = 760,
    Evlocallablapmaskcb = 761,
    Evlocallablapmaskbl = 762,
    Evlocallablaplac = 763,
    Evlocallabdetailthr = 764,
    Evlocallabfftwbl = 765,
    Evlocallabisogr = 766,
    Evlocallabstrengr = 767,
    Evlocallabscalegr = 768,
    EvlocallabLmaskshape = 769,
    EvlocallabLmaskexpshape = 770,
    EvlocallabLmaskSHshape = 771,
    EvlocallabLmasktmshape = 772,
    EvlocallabLmaskretishape = 773,
    EvlocallabLmaskcbshape = 774,
    EvlocallabLmaskblshape = 775,
    EvlocallabLLmaskblshapewav = 776,
    Evlocallabshadmaskbl = 777,
    EvlocallabLLmaskcolshapewav = 778,
    Evlocallabshadmaskcol = 779,
    EvlocallabcsThreshold = 780,
    EvlocallabcsThresholdblur = 781,
    EvlocallabcsThresholdcol = 782,
    Evlocallabdeltae = 783,
    EvLocallabSpotscopemask = 784,
    EvlocallabshMethod = 785,
    EvlocallabEqualizersh = 786,
    EvlocallabdetailSH = 787,
    EvlocallabfatamountSH = 788,
    EvlocallabfatanchorSH = 789,
    Evlocallabshortc = 790,
    EvLocallabSpotlumask = 791,
    EvlocallabgamSH = 792,
    EvlocallabsloSH = 793,
    Evlocallabsavrest = 794,
    Evlocallabrecurs = 795,
    EvLocallabmergecolMethod = 796,
    Evlocallabopacol = 797,
    Evlocallabrgbshape = 798,
    EvLocallabtoneMethod = 799,
    EvLocallabspecial = 800,
    Evlocallabconthrcol = 801,
    EvLocallabmerMethod = 802,
    Evlocallabstrumaskcol = 803,
    Evlocallabstrumaskbl = 804,
    EvLocallabtoolcol = 805,
    Evlocallabtoolbl = 806,
    EvlocallabHHhmaskshape = 807,
    EvlocallabCCmaskvibshape = 808,
    EvlocallabLLmaskvibshape = 809,
    EvlocallabHHmaskvibshape = 810,
    // EvlocallabshowmaskvibMethod = 811,
    EvLocallabEnavibMask = 812,
    Evlocallabblendmaskvi = 813,
    Evlocallabradmaskvib = 814,
    Evlocallabchromaskvib = 815,
    Evlocallabgammaskvib = 816,
    Evlocallabslomaskvib = 817,
    Evlocallablapmaskvib = 818,
    EvlocallabLmaskvibshape = 819,
    EvLocallabLabGridmergValue = 820,
    Evlocallabmercol = 821,
    Evlocallabmerlucol = 822,
    Evlocallabstrmaskexp = 823,
    Evlocallabangmaskexp = 824,
    Evlocallabstrexp = 825,
    Evlocallabangexp = 826,
    EvlocallabstrSH = 827,
    EvlocallabangSH = 828,
    Evlocallabstrcol = 829,
    Evlocallabangcol = 830,
    Evlocallabstrcolab = 831,
    EvLocallabSpotfeather = 832,
    Evlocallabstrcolh = 833,
    Evlocallabstrvib = 834,
    Evlocallabangvib = 835,
    Evlocallabstrvibab = 836,
    Evlocallabstrvibh = 837,
    EvLocallabSpotcomplexMethod = 838,
    Evlocallabclshape = 839,
    Evlocallablcshape = 840,
    Evlocallabblurcol = 841,
    Evlocallabcontcol = 842,
    EvLocallabfftColorMask = 843,
    EvLocenalog = 844,
    EvLocallabAuto = 845,
    EvlocallabsourceGray = 846,
    EvlocallabsourceGrayAuto = 847,
    EvlocallabAutogray = 848,
    EvlocallabblackEv = 849,
    EvlocallabwhiteEv = 850,
    EvlocallabtargetGray = 851,
    Evlocallabdetail = 852,
    Evlocallabsensilog = 853,
    Evlocallabfullimage = 854,
    Evlocallabbaselog = 855,
    Evlocallabresidblur = 856,
    Evlocallabblurlc = 857,
    Evlocallablevelblur = 858,
    EvlocallabwavCurvelev = 859,
    EvlocallabwavCurvecon = 860,
    Evlocallabsigma = 861,
    Evlocallaboriglc = 862,
    Evlocallabsigmadc = 863,
    Evlocallabdeltad = 864,
    EvlocallabwavCurvecomp = 865,
    Evlocallabfatres = 866,
    EvLocallabSpotbalanh = 867,
    EvlocallabwavCurveden = 868,
    EvlocallabHHmasklcshape = 869,
    EvlocallabCCmasklcshape = 870,
    EvlocallabLLmasklcshape = 871,
    EvLocallabEnalcMask = 872,
    // EvlocallabshowmasklcMethod = 873,
    Evlocallabblendmasklc = 874,
    Evlocallabradmasklc = 875,
    Evlocallabchromasklc = 876,
    EvlocallabLmasklcshape = 877,
    Evlocallabchromalev = 878,
    Evlocallabchromablu = 879,
    Evlocallaboffset = 880,
    Evlocallabwavblur = 881,
    Evlocallabwavcont = 882,
    Evlocallabwavcomp = 883,
    Evlocallabwavcompre = 884,
    EvlocallabwavCurvecompre = 885,
    Evlocallabresidcomp = 886,
    Evlocallabthreswav = 887,
    Evlocallabstrwav = 888,
    Evlocallabangwav = 889,
    Evlocallabwavgradl = 890,
    Evlocallabstrlog = 891,
    Evlocallabanglog = 892,
    EvLocallabSpotcolorde = 893,
    // EvlocallabshowmasksharMethod = 894,
    Evlocallabshowreset = 895,
    Evlocallabstrengthw = 896,
    Evlocallabradiusw = 897,
    Evlocallabdetailw = 898,
    Evlocallabgradw = 899,
    Evlocallabtloww = 900,
    Evlocallabthigw = 901,
    EvlocallabwavCurveedg = 902,
    EvlocallablocaledgMethod = 903,
    Evlocallabwavedg = 904,
    Evlocallabedgw = 905,
    Evlocallabbasew = 906,
    EvlocallablocalneiMethod = 907,
    Evlocallabwaveshow = 908,
    EvLocallabSpotwavMethod = 909,
    EvlocallabchroMethod = 910,
    Evlocallabstrbl = 911,
    Evlocallabsigmadr = 912,
    Evlocallabsigmabl = 913,
    Evlocallabsigmaed = 914,
    Evlocallabresidsha = 915,
    Evlocallabresidshathr = 916,
    Evlocallabresidhi = 917,
    Evlocallabresidhithr = 918,
    Evlocallabsigmalc = 919,
    Evlocallabsigmalc2 = 920,
    Evlocallabblwh = 921,
    EvlocallabcomplexityWithRefresh = 922,
    // EvlocallabcomplexityWithoutRefresh = 923,
    EvLocallabSpotcolorscope = 924,
    EvlocallabshowmasktypMethod = 925,
    Evlocallabshadmaskblsha = 926,
    EvLocena_mask = 927,
    Evlocallabsensimask = 928,
    Evlocallabblendmask = 929,
    EvLocallabEnaMask = 930,
    Evlocallabradmask = 931,
    Evlocallablapmask = 932,
    Evlocallabchromask = 933,
    Evlocallabgammask = 934,
    Evlocallabslopmask = 935,
    EvlocallabCCmask_shape = 936,
    EvlocallabLLmask_shape = 937,
    EvlocallabHHmask_shape = 938,
    EvLocallabtoolmask = 939,
    Evlocallabstrumaskmask = 940,
    EvlocallabHHhmask_shape = 941,
    EvLocallabfftmask = 942,
    Evlocallabblurmask = 943,
    Evlocallabcontmask = 944,
    Evlocallabshadmask = 945,
    EvlocallabLmask_shape = 946,
    EvlocallabLLmask_shapewav = 947,
    EvlocallabcsThresholdmask = 948,
    Evlocallabstr_mask = 949,
    Evlocallabang_mask = 950,
    Evlocallabsoftradiusmask = 951,
    Evlocallabblendmaskab = 952,
    EvLocallabSpotprevMethod = 953,
    Evlocallabactiv = 954,
    EvlocallabCHshape = 955,
    EvlocallabquaMethod = 956,
    Evlocallabhishow = 957,
    Evlocallabinvbl = 958,
    Evlocallabcatad = 959,
    Evlocallabciecam = 960,
    Evlocallabsourceabs = 961,
    Evlocallabtargabs = 962,
    Evlocallabsurround = 963,
    Evlocallabsaturl = 964,
    Evlocallabcontl = 965,
    EvlocallabCCmaskshapeL = 966,
    EvlocallabLLmaskshapeL = 967,
    EvlocallabHHmaskshapeL = 968,
    EvLocallabEnaLMask = 969,
    EvLocallabblendmaskL = 970,
    EvLocallabradmaskL = 971,
    EvLocallabchromaskL = 972,
    EvlocallabLmaskshapeL = 973,
    Evlocallablightl = 974,
    EvlocallabLshapeL = 975,
    Evlocallabcontq = 976,
    Evlocallabsursour = 977,
    Evlocallablightq = 978,
    Evlocallabcolorfl = 979,
    Evlocallabrepar = 980,
    EvlocallabwavCurvehue = 981,
    Evlocallablevelthr = 982,
    Evlocallablevelthrlow = 983,
    Evlocallabusemask1 = 984,
    Evlocallablnoiselow = 985,
    Evlocallabrecothres = 986,
    Evlocallablowthres = 987,
    Evlocallabhigthres = 988,
    Evlocallabrecothresd = 989,
    Evlocallablowthresd = 990,
    Evlocallabhigthresd = 991,
    Evlocallabinvmaskd = 992,
    Evlocallabinvmask = 993,
    Evlocallabdecayd = 994,
    Evlocallabrecothresc = 995,
    Evlocallablowthresc = 996,
    Evlocallabhigthresc = 997,
    Evlocallabdecayc = 998,
    Evlocallabmidthresd = 999,
    Evlocallabrecothresl = 1000,
    Evlocallablowthresl = 1001,
    Evlocallabhigthresl = 1002,
    Evlocallabdecayl = 1003,
    Evlocallabrecothrese = 1004,
    Evlocallablowthrese = 1005,
    Evlocallabhigthrese = 1006,
    Evlocallabdecaye = 1007,
    Evlocallabrecothress = 1008,
    Evlocallablowthress = 1009,
    Evlocallabhigthress = 1010,
    Evlocallabdecays = 1011,
    Evlocallabrecothresv = 1012,
    Evlocallablowthresv = 1013,
    Evlocallabhigthresv = 1014,
    Evlocallabdecayv = 1015,
    Evlocallabrecothresw = 1016,
    Evlocallablowthresw = 1017,
    Evlocallabhigthresw = 1018,
    Evlocallabdecayw = 1019,
    Evlocallabmidthresdch = 1020,
    Evlocallabrecothrest = 1021,
    Evlocallablowthrest = 1022,
    Evlocallabhigthrest = 1023,
    Evlocallabdecayt = 1024,
    Evlocallabrecothrescb = 1025,
    Evlocallablowthrescb = 1026,
    Evlocallabhigthrescb = 1027,
    Evlocallabdecaycb = 1028,
    Evlocallabrecothresr = 1029,
    Evlocallablowthresr = 1030,
    Evlocallabhigthresr = 1031,
    Evlocallabdecayr = 1032,
    Evlocallabnlstr = 1033,
    Evlocallabnldet = 1034,
    Evlocallabnlpat = 1035,
    Evlocallabnlrad = 1036,
    Evlocallabnlgam = 1037,
    Evlocallabnoisegam = 1038,
    Evlocallabgamc = 1039,
    Evlocallabgamex = 1040,
    Evlocallabgamlc = 1041,
    Evlocallabgamhs = 1042,
    NUMOFEVENTS
};

class ProcEvent
{
public:
    ProcEvent(): code_(0) {}
    ProcEvent(ProcEventCode code): code_(code) {}
    explicit ProcEvent(int code): code_(code) {}
    operator int() const
    {
        return code_;
    }

private:
    int code_;
};


inline bool operator ==(ProcEvent a, ProcEvent b)
{
    return int(a) == int(b);
}
inline bool operator ==(ProcEvent a, ProcEventCode b)
{
    return int(a) == int(b);
}
inline bool operator ==(ProcEventCode a, ProcEvent b)
{
    return int(a) == int(b);
}
inline bool operator !=(ProcEvent a, ProcEvent b)
{
    return int(a) != int(b);
}
inline bool operator !=(ProcEvent a, ProcEventCode b)
{
    return int(a) != int(b);
}
inline bool operator !=(ProcEventCode a, ProcEvent b)
{
    return int(a) != int(b);
}

}
