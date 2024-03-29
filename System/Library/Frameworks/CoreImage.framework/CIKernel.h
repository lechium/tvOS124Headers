/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString;

@interface CIKernel : NSObject {

	void* _priv;

}

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL canReduceOutputChannels; 
@property (assign,nonatomic) BOOL preservesRange; 
@property (assign,nonatomic) CGSize outputGroupSize; 
@property (readonly) NSString * name; 
+(id)modifiedKernelStringForFosl:(id)arg1 ;
+(id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 outputGroupSize:(CGSize)arg4 error:(id*)arg5 ;
+(id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelsWithString:(id)arg1 messageLog:(id)arg2 ;
+(id)kernelsWithString:(id)arg1 ;
+(id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(CGSize)arg3 error:(id*)arg4 ;
+(id)colorMatrixBiasKernel;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(id)hashForString:(id)arg1 ;
+(id)betterString:(id)arg1 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
+(id)kernelWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(void*)_internalRepresentation;
-(SEL)ROISelector;
-(id)_initWithReflection:(CIKernelReflection*)arg1 ;
-(id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(BOOL)arg3 ;
-(id)_initWithString:(id)arg1 usingCruftCompatibility:(BOOL)arg2 ;
-(BOOL)_isValidOutputPixelFormat:(int)arg1 ;
-(int)_outputFormatUsingDictionary:(id)arg1 andKernel:(Kernel*)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(void)setPreservesRange:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(CGSize)outputGroupSize;
-(void)setOutputGroupSize:(CGSize)arg1 ;
-(void)setROISelector:(SEL)arg1 ;
-(void)finalize;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)parameters;
@end

