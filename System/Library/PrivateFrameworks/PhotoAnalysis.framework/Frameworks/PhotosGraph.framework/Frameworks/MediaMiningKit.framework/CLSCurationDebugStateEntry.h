/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSCurationDebugStateEntry : NSObject {

	unsigned long long _state;
	NSString* _reason;
	NSString* _agent;
	NSString* _stage;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) NSString * agent;                      //@synthesize agent=_agent - In the implementation block
@property (readonly) NSString * stage;                      //@synthesize stage=_stage - In the implementation block
-(NSString *)agent;
-(id)initWithState:(unsigned long long)arg1 reason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
-(unsigned long long)state;
-(NSString *)reason;
-(NSString *)stage;
@end
