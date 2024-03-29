/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSArray;

@interface CIRedEyeRepair : NSObject {

	BOOL ownLF;
	SCD_Struct_CI53* lf;
	int imageSourceType;
	CGImageBlockSetRef blockSet;
	void* releaseMe;
	CFDataRef dataRef;
	NSArray* faces;
	int nRepairs;
	int nextRepairTag;
	SCD_Struct_CI58* repairs[32];
	int lastRepairTag;
	float lastRepairIOD;
	SCD_Struct_CI1 standardTemplate;
	int iFaceIndex;
	BOOL iLeft;
	BOOL debugRedEye;
	BOOL logRepairs;
	int redEyeThresholdKind;
	BOOL renderAlpha;
	BOOL infillBackground;
	BOOL renderSpecularShine;
	float specularSize;
	float specularSoftness;
	BOOL pupilShadeAlignment;
	BOOL autoPupilTonality;
	BOOL forceLoValue;
	int loValue;
	SCD_Struct_CI0 lastClickYBitmap;
	SCD_Struct_CI0 lastClickCbCrBitmap;
	int lastClickBitmapMinX;
	int lastClickBitmapMaxX;
	int lastClickBitmapMinY;
	int lastClickBitmapMaxY;
	SCD_Struct_CI0 lastClickYBitmaps[3];
	SCD_Struct_CI0 lastClickCbCrBitmaps[3];
	SCD_Struct_CI1 lastClickBitmapRects[3];
	SCD_Struct_CI0 lastSearchYBitmap;
	SCD_Struct_CI0 lastSearchCbCrBitmap;
	int lastSearchBitmapMinX;
	int lastSearchBitmapMaxX;
	int lastSearchBitmapMinY;
	int lastSearchBitmapMaxY;
	int nPolyPoints;
	BOOL polyClosed;
	CGPoint polyPoints[20];
	SCD_Struct_CI59 polyLines[20];
	BOOL polyPointConcave[20];
	unsigned char CbCrDistanceTable[65536];
	int nLinears;
	int linearCoefficients[8][3];

}
+(CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(CGSize)arg2 ;
+(CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(CGSize)arg2 ;
+(float)upperRepairDistance:(float)arg1 ;
+(float)upperRepairDistanceFraction:(float)arg1 ;
+(CGRect)supportRectangleWithPoint:(CGPoint)arg1 imageSize:(CGSize)arg2 IOD:(float)arg3 ;
-(void)repairExternalBuffer;
-(void)autoRepairWithFaceArray:(id)arg1 ;
-(id)repairArray;
-(void)executeRepair:(id)arg1 ;
-(id)initWithExternalBuffer:(char*)arg1 subRectangle:(CGRect)arg2 fullSize:(CGSize)arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5 ;
-(BOOL)getBlockSetWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI0*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(BOOL)getDataProviderBytePtrWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI0*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(BOOL)getDataProviderCopyWithImage:(CGImageRef)arg1 into:(SCD_Struct_CI0*)arg2 ;
-(id)initWithDeskView:(id)arg1 andFrame:(SCD_Struct_CI53*)arg2 ;
-(void)skinInit;
-(void)initializeNonDebugVariables;
-(id)initWithFrameExternalBuffer:(SCD_Struct_CI53*)arg1 ;
-(SCD_Struct_CI60*)repairWithTag:(int)arg1 ;
-(float)upperRepairSizeFraction:(float)arg1 ;
-(float)lowerRepairSizeFraction:(float)arg1 ;
-(float)lowerRepairSize:(float)arg1 ;
-(float)upperRepairSize:(float)arg1 ;
-(BOOL)extractReusableAlignedBitmapsAroundPoint:(SCD_Struct_CI0*)arg1 YR:(SCD_Struct_CI1)arg2 subYBitmap:(SCD_Struct_CI0*)arg3 subCbCrBitmap:(SCD_Struct_CI0*)arg4 ;
-(int)averageValueFromY:(SCD_Struct_CI0*)arg1 withinSkinMask:(SCD_Struct_CI0*)arg2 butOutsideAlpha:(SCD_Struct_CI0*)arg3 ;
-(BOOL)computeTrimmedBitmaps:(SCD_Struct_CI0*)arg1 newY:(SCD_Struct_CI0*)arg2 newCbCr:(SCD_Struct_CI0*)arg3 IR:(SCD_Struct_CI1)arg4 newTrimY:(SCD_Struct_CI0*)arg5 newTrimCbCr:(SCD_Struct_CI0*)arg6 returningYR:(SCD_Struct_CI1*)arg7 andCbCrR:(SCD_Struct_CI1*)arg8 ;
-(void)undoRepair:(int)arg1 ;
-(int)redEyeRemovalWithPoint:(CGPoint)arg1 alignPupilShades:(BOOL)arg2 matching:(SCD_Struct_CI1)arg3 force:(int)arg4 IOD:(float)arg5 tap:(BOOL)arg6 ;
-(int)redoRepairWithTag:(int)arg1 IOD:(float)arg2 ;
-(void)insertIntoProminenceVettingHopper:(SCD_Struct_CI62*)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8 ;
-(BOOL)gatherProminencesWithC:(SCD_Struct_CI0*)arg1 MC:(SCD_Struct_CI0*)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(SCD_Struct_CI1)arg5 fr:(SCD_Struct_CI63*)arg6 intoHopper:(SCD_Struct_CI62*)arg7 faceIndex:(int)arg8 left:(BOOL)arg9 coss:(float)arg10 sins:(float)arg11 bitmapName:(char*)arg12 ;
-(BOOL)gatherProminencesWithC:(SCD_Struct_CI0*)arg1 MC:(SCD_Struct_CI0*)arg2 altC:(SCD_Struct_CI0*)arg3 altMC:(SCD_Struct_CI0*)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(SCD_Struct_CI1)arg7 fr:(SCD_Struct_CI63*)arg8 intoHopper:(SCD_Struct_CI62*)arg9 faceIndex:(int)arg10 left:(BOOL)arg11 ;
-(float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3 ;
-(BOOL)extractAndGatherProminencesWithRect:(SCD_Struct_CI1)arg1 face:(SCD_Struct_CI63*)arg2 faceIndex:(int)arg3 left:(BOOL)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(SCD_Struct_CI62*)arg7 whiteHopper:(SCD_Struct_CI62*)arg8 redChannel:(SCD_Struct_CI0*)arg9 redChannelMask:(SCD_Struct_CI0*)arg10 ;
-(SCD_Struct_CI64)repairDecisionWithFaceRecord:(SCD_Struct_CI63*)arg1 left:(BOOL)arg2 redHopper:(SCD_Struct_CI62*)arg3 whiteHopper:(SCD_Struct_CI62*)arg4 ;
-(float)extractAverageFaceY:(SCD_Struct_CI63*)arg1 contrast:(float*)arg2 faceIndex:(int)arg3 ;
-(int)applyEyeRepairWithEye:(SCD_Struct_CI64*)arg1 left:(BOOL)arg2 IOD:(float)arg3 autoPupilTonality:(BOOL)arg4 match:(SCD_Struct_CI1*)arg5 faceIndex:(int)arg6 whiteHopper:(SCD_Struct_CI62*)arg7 ;
-(int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2 ;
-(void)prepareLineFunctions;
-(void)autoRepairExtractAndSearchLeft:(SCD_Struct_CI1)arg1 right:(SCD_Struct_CI1)arg2 data:(SCD_Struct_CI63*)arg3 repairSize:(float)arg4 autoPupilTonality:(BOOL)arg5 faceIndex:(int)arg6 ;
-(BOOL)getFloat:(float*)arg1 d:(id)arg2 s:(id)arg3 ;
-(void)orientPointX:(float*)arg1 Y:(float*)arg2 ;
-(BOOL)getInt:(int*)arg1 d:(id)arg2 s:(id)arg3 ;
-(BOOL)getBool:(BOOL*)arg1 d:(id)arg2 s:(id)arg3 ;
-(void)orientRectangleMinX:(float*)arg1 maxX:(float*)arg2 minY:(float*)arg3 maxY:(float*)arg4 ;
-(int)redEyeRemovalWithData:(SCD_Struct_CI65*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 cameraModel:(id)arg2 ;
-(CGImageRef)createRepairedImage;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 cameraModel:(id)arg4 ;
-(id)initWithExternalBuffer:(char*)arg1 size:(CGSize)arg2 rowBytes:(unsigned long long)arg3 ;
-(BOOL)logRepairs;
-(void)setLogRepairs:(BOOL)arg1 ;
-(int)redEyeThresholdKind;
-(void)setRedEyeThresholdKind:(int)arg1 ;
-(BOOL)renderAlpha;
-(void)setRenderAlpha:(BOOL)arg1 ;
-(BOOL)infillBackground;
-(void)setInfillBackground:(BOOL)arg1 ;
-(BOOL)renderSpecularShine;
-(void)setRenderSpecularShine:(BOOL)arg1 ;
-(float)specularSize;
-(void)setSpecularSize:(float)arg1 ;
-(float)specularSoftness;
-(void)setSpecularSoftness:(float)arg1 ;
-(BOOL)pupilShadeAlignment;
-(void)setPupilShadeAlignment:(BOOL)arg1 ;
-(BOOL)autoPupilTonality;
-(void)setAutoPupilTonality:(BOOL)arg1 ;
-(BOOL)forceLoValue;
-(void)setForceLoValue:(BOOL)arg1 ;
-(int)loValue;
-(void)setLoValue:(int)arg1 ;
-(SCD_Struct_CI1)standardTemplate;
-(SCD_Struct_CI60*)repairs;
-(int)nRepairs;
-(int)lastRepairTag;
-(void)redoLastRepair;
-(void)executeRepairArray:(id)arg1 ;
-(void)setFaceIndex:(int)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(id)faces;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(void)dealloc;
-(void)setLeft:(BOOL)arg1 ;
-(int)format;
@end

