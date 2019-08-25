/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class ISEditSession, CIImage;

@interface PHLivePhotoEditingContext : NSObject {

	ISEditSession* _editSession;

}

@property (readonly) CIImage * fullSizeImage; 
@property (readonly) SCD_Struct_PH1 duration; 
@property (readonly) SCD_Struct_PH1 photoTime; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume; 
@property (readonly) unsigned orientation; 
+(id)errorWithUnderlyingError:(id)arg1 ;
-(SCD_Struct_PH1)photoTime;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(id)initWithLivePhotoEditingInput:(id)arg1 ;
-(CIImage *)fullSizeImage;
-(void)prepareLivePhotoForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAudioVolume:(float)arg1 ;
-(float)audioVolume;
-(id)init;
-(SCD_Struct_PH1)duration;
-(void)cancel;
-(unsigned)orientation;
@end
