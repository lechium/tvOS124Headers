/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSTerminationAssertionUpdateEvent.h>

@class NSString, BKSTerminationContext;

@interface BKSTerminationAssertionCreateEvent : BKSTerminationAssertionUpdateEvent {

	unsigned long long _efficacy;
	NSString* _targetBundleIdentifier;
	BKSTerminationContext* _context;

}

@property (assign,nonatomic) unsigned long long efficacy;                  //@synthesize efficacy=_efficacy - In the implementation block
@property (nonatomic,copy) NSString * targetBundleIdentifier;              //@synthesize targetBundleIdentifier=_targetBundleIdentifier - In the implementation block
@property (nonatomic,retain) BKSTerminationContext * context;              //@synthesize context=_context - In the implementation block
-(NSString *)targetBundleIdentifier;
-(void)setEfficacy:(unsigned long long)arg1 ;
-(unsigned long long)efficacy;
-(void)setTargetBundleIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setContext:(BKSTerminationContext *)arg1 ;
-(BKSTerminationContext *)context;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

