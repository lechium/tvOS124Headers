/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class MFError, NSData, MFDAMessageStore;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	MFDAMessageStore* _store;

}

@property (nonatomic,readonly) BOOL succeeded;                      //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsData;
-(BOOL)succeeded;
-(MFDAMessageStore *)store;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
@end

