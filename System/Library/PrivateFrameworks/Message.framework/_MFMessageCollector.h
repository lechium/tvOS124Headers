/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MessageConsumer.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class NSMutableArray, MFActivityMonitor;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {

	NSMutableArray* _messages;
	MFActivityMonitor* _monitor;
	/*^block*/id _transmogrifier;

}

@property (nonatomic,copy) id transmogrifier;              //@synthesize transmogrifier=_transmogrifier - In the implementation block
-(void)newMessagesAvailable:(id)arg1 ;
-(id)copyMessages;
-(void)setTransmogrifier:(id)arg1 ;
-(id)transmogrifier;
-(id)messages;
-(BOOL)shouldCancel;
-(id)init;
-(void)dealloc;
@end
