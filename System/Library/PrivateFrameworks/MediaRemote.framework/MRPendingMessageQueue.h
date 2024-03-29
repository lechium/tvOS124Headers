/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {

	NSMutableArray* _messages;
	unsigned long long _lowPriorityMessagesCount;
	unsigned long long _maxLowPriorityMessagesAllowed;

}
-(id)peek;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(void)push:(id)arg1 ;
-(void)_purge;
-(void)dealloc;
-(void)pop;
@end

