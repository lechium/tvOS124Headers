/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding> {

	CALayer* _target;
	CAAnimation* _animation;
	NSString* _key;
	BOOL _enabled;

}

@property (getter=isEnabled) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) CALayer * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic) double duration; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setTarget:(CALayer *)arg1 ;
-(CALayer *)target;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)animation;
@end
