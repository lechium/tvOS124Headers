/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _AFUIAssertingDelayedActionCommand : NSObject {

	SAUIDelayedActionCommand* _command;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
-(BKSProcessAssertion *)assertion;
-(id)initWithCommand:(id)arg1 assertion:(id)arg2 ;
-(SAUIDelayedActionCommand *)command;
@end
