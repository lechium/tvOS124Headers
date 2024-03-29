/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollections.h>

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {

	BOOL _encodeHighDef;
	BOOL _decodeHighDef;

}
+(id)sharedInstance;
-(BOOL)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(BOOL)useSoftFramerateSwitching;
-(BOOL)setupH264CellularRules;
-(void)resetEncodingRulesForCameraIsHD:(BOOL)arg1 isWVGA:(BOOL)arg2 ;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3 ;
-(double)preferredAspectRatio;
-(id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 ;
-(BOOL)isHiDefCapable;
-(VCBitrateConfiguration*)bitrateConfiguration;
@end

