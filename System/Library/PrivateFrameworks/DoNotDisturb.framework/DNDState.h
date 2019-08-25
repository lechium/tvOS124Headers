/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _active;
	BOOL _willSuppressInterruptions;
	NSArray* _activeModeAssertionMetadata;

}

@property (nonatomic,copy,readonly) NSArray * activeModeIdentifiers; 
@property (nonatomic,readonly) BOOL willSuppressInterruptions;                          //@synthesize willSuppressInterruptions=_willSuppressInterruptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeModeAssertionMetadata;              //@synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                             //@synthesize active=_active - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)activeModeIdentifiers;
-(BOOL)willSuppressInterruptions;
-(NSArray *)activeModeAssertionMetadata;
-(id)initWithActive:(BOOL)arg1 willSuppressInterruptions:(BOOL)arg2 activeModeAssertionMetadata:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
@end
