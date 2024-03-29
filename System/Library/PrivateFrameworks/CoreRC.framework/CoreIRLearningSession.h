/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreIRLearningSessionDelegate, CoreIRLearningSessionBridgeDelegate;
@class CoreIRDevice;

@interface CoreIRLearningSession : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _reason;
	id<CoreIRLearningSessionDelegate> _delegate;
	CoreIRDevice* _owningDevice;
	id<CoreIRLearningSessionBridgeDelegate> _bridgeDelegate;

}

@property (assign,nonatomic) CoreIRDevice * owningDevice;                                         //@synthesize owningDevice=_owningDevice - In the implementation block
@property (assign,nonatomic) id<CoreIRLearningSessionBridgeDelegate> bridgeDelegate;              //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) id<CoreIRLearningSessionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(CoreIRDevice *)owningDevice;
-(void)setOwningDevice:(CoreIRDevice *)arg1 ;
-(id)initWithReason:(unsigned long long)arg1 ;
-(void)setBridgeDelegate:(id<CoreIRLearningSessionBridgeDelegate>)arg1 ;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
-(void)enumerateMappingUsingBlock:(/*^block*/id)arg1 ;
-(id<CoreIRLearningSessionBridgeDelegate>)bridgeDelegate;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CoreIRLearningSessionDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CoreIRLearningSessionDelegate>)delegate;
-(unsigned long long)reason;
@end

