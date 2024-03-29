/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class VNCanceller, NSString, NSArray;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding> {

	VNCanceller* _canceller;

}

@property (assign,nonatomic) BOOL useCenterTileOnly; 
@property (assign,nonatomic) BOOL returnAllResults; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * supportedImageSizeSet; 
+(Class)configurationClass;
+(const SCD_Struct_VN19*)revisionAvailability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_applicableDetectorAndReturnError:(id*)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)returnAllResults;
-(unsigned long long)imageCropAndScaleOption;
-(BOOL)hasCancellationHook;
-(BOOL)internalCancelInContext:(id)arg1 error:(id*)arg2 ;
-(void)setUseCenterTileOnly:(BOOL)arg1 ;
-(void)setReturnAllResults:(BOOL)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)useCenterTileOnly;
-(id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id*)arg2 error:(id*)arg3 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

