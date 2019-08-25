/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSequenceSummarizationObservation, NSNumber;

@interface VNSequenceSummarizationRequestConfiguration : VNImageBasedRequestConfiguration {

	VNSequenceSummarizationObservation* _inputObservation;
	NSNumber* _frameTimeStamp;
	NSNumber* _frameRate;

}

@property (nonatomic,retain) VNSequenceSummarizationObservation * inputObservation;              //@synthesize inputObservation=_inputObservation - In the implementation block
@property (nonatomic,copy) NSNumber * frameTimeStamp;                                            //@synthesize frameTimeStamp=_frameTimeStamp - In the implementation block
@property (nonatomic,copy) NSNumber * frameRate;                                                 //@synthesize frameRate=_frameRate - In the implementation block
-(VNSequenceSummarizationObservation *)inputObservation;
-(void)setInputObservation:(VNSequenceSummarizationObservation *)arg1 ;
-(void)setFrameTimeStamp:(NSNumber *)arg1 ;
-(NSNumber *)frameTimeStamp;
-(NSNumber *)frameRate;
-(void)setFrameRate:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
