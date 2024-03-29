/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class FBProcessWatchdogEventContext;

@interface FBProcessWatchdog : FBSProcessWatchdog {

	long long _event;
	FBProcessWatchdogEventContext* _eventContext;

}

@property (nonatomic,readonly) long long event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain,readonly) FBProcessWatchdogEventContext * eventContext;              //@synthesize eventContext=_eventContext - In the implementation block
-(id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3 ;
-(FBProcessWatchdogEventContext *)eventContext;
-(long long)event;
@end

