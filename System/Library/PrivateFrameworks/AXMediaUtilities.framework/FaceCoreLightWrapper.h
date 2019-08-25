/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSArray;

@interface FaceCoreLightWrapper : NSObject {

	NSArray* lastDetectedFaces;

}

@property (nonatomic,retain) NSArray * lastDetectedFaces; 
-(void)initializeFaceAPI;
-(void)interfaceOrientationChanged:(id)arg1 ;
-(unsigned char)computeFilters:(unsigned char)arg1 ;
-(char*)advancedBoostShadowsInGrayscaleBuffer:(char*)arg1 withSize:(unsigned long long)arg2 ;
-(void)setLastDetectedFaces:(NSArray *)arg1 ;
-(void)updateCameraMirroringSetting:(BOOL)arg1 ;
-(CGImageRef)copyImageDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 imageWidth:(unsigned long long*)arg2 imageHeight:(unsigned long long*)arg3 shadowBoostEnabled:(BOOL)arg4 ;
-(id)detectFacesInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSArray *)lastDetectedFaces;
-(id)init;
-(void)dealloc;
@end

