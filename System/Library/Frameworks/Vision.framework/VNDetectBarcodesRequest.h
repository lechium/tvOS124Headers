/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class NSString, NSArray;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (nonatomic,copy) NSString * locateMode; 
@property (nonatomic,copy) NSArray * symbologies; 
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)_allBarcodeSymbologies;
+(id)barcodeSymbologyForACBSBarcodeType:(id)arg1 ;
+(id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1 ;
+(id)supportedSymbologies;
+(id)availableLocateModes;
+(void)initialize;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(NSString *)locateMode;
-(int)_ACBarcodeRecognizerLocateMode;
-(NSArray *)symbologies;
-(BOOL)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(CGPoint*)arg2 topLeft:(CGPoint*)arg3 topRight:(CGPoint*)arg4 bottomRight:(CGPoint*)arg5 ;
-(id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(CGRect)arg4 scanConfidence:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7 ;
-(ACBSConfigRef)_createACBSConfigAndReturnError:(id*)arg1 ;
-(id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(ACBSConfigRef)arg2 requestRevision:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setSymbologies:(NSArray *)arg1 ;
-(void)setLocateMode:(NSString *)arg1 ;
-(id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1 ;
-(id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1 ;
@end

