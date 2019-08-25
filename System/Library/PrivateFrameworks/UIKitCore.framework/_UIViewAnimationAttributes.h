/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned long long _options;
	BOOL _hasSpringAttributes;
	double _springDamping;
	double _springVelocity;
	double _springMass;
	double _springStiffness;
	long long _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) long long curve;                                     //@synthesize curve=_curve - In the implementation block
@property (getter=_hasSpringAttributes,nonatomic,readonly) BOOL hasSpringAttributes;              //@synthesize hasSpringAttributes=_hasSpringAttributes - In the implementation block
@property (getter=_springDamping,nonatomic,readonly) double springDamping;                        //@synthesize springDamping=_springDamping - In the implementation block
@property (getter=_springVelocity,nonatomic,readonly) double springVelocity;                      //@synthesize springVelocity=_springVelocity - In the implementation block
@property (getter=_springMass,nonatomic,readonly) double springMass;                              //@synthesize springMass=_springMass - In the implementation block
@property (getter=_springStiffness,nonatomic,readonly) double springStiffness;                    //@synthesize springStiffness=_springStiffness - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)curve;
-(long long)_curve;
-(double)_duration;
-(double)_delay;
-(BOOL)_hasSpringAttributes;
-(double)_springDamping;
-(double)_springVelocity;
-(double)_springMass;
-(double)_springStiffness;
@end

