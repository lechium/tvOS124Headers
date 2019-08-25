/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction {

	NSString* _key;
	double _duration;
	double _easeIn;
	double _easeOut;

}

@property (copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double easeIn;                //@synthesize easeIn=_easeIn - In the implementation block
@property (assign,nonatomic) double easeOut;               //@synthesize easeOut=_easeOut - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3 ;
-(void)demolish;
-(double)easeIn;
-(double)easeOut;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)setEaseIn:(double)arg1 ;
-(void)setEaseOut:(double)arg1 ;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
@end

