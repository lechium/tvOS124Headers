/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@class MFDAMailbox, MFDAMessageStore, MFMailMessageLibrary, MFActivityMonitor, MFError;

@interface _MFDAMSBasicConsumer : MFBufferedQueue {

	MFDAMailbox* mailbox;
	MFDAMessageStore* store;
	MFMailMessageLibrary* library;
	MFActivityMonitor* monitor;
	MFError* error;
	unsigned long long numNewMessages;

}

@property (nonatomic,retain) MFActivityMonitor * monitor; 
@property (nonatomic,retain) MFError * error; 
-(MFActivityMonitor *)monitor;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(void)setMonitor:(MFActivityMonitor *)arg1 ;
-(void)dealloc;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
@end

