/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(void)setReason:(NSString *)arg1 ;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(void)relinquish;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
@end

