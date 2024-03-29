/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _interruptionBehaviorSetting;

}

@property (nonatomic,readonly) unsigned long long interruptionBehavior; 
@property (nonatomic,readonly) unsigned long long interruptionBehaviorSetting;              //@synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)interruptionBehavior;
-(unsigned long long)interruptionBehaviorSetting;
-(id)_initWithInterruptionBehaviorSetting:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

