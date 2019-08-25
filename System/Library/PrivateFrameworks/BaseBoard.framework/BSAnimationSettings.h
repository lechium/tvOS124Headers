/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAMediaTimingFunction, NSString;

@interface BSAnimationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSXPCCoding> {

	double _duration;
	double _delay;
	double _frameInterval;
	CAMediaTimingFunction* _timingFunction;
	float _speed;

}

@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) double frameInterval; 
@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction; 
@property (nonatomic,readonly) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 delay:(double)arg2 ;
-(id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4 speed:(float)arg5 ;
-(void)applyToCAAnimation:(id)arg1 ;
-(void)_setDelay:(double)arg1 ;
-(void)_setTimingFunction:(id)arg1 ;
-(void)_setFrameInterval:(double)arg1 ;
-(double)frameInterval;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(double)delay;
-(CAMediaTimingFunction *)timingFunction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isSpringAnimation;
-(float)speed;
-(void)_setDuration:(double)arg1 ;
-(void)_setSpeed:(float)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

