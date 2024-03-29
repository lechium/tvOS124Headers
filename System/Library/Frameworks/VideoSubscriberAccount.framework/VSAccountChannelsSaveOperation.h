/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation {

	NSError* _error;
	VSAccountChannels* _unsavedAccountChannels;
	VSAccountChannelsCenter* _accountChannelsCenter;

}

@property (nonatomic,retain) VSAccountChannels * unsavedAccountChannels;                   //@synthesize unsavedAccountChannels=_unsavedAccountChannels - In the implementation block
@property (nonatomic,retain) VSAccountChannelsCenter * accountChannelsCenter;              //@synthesize accountChannelsCenter=_accountChannelsCenter - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(VSAccountChannels *)unsavedAccountChannels;
-(VSAccountChannelsCenter *)accountChannelsCenter;
-(void)setUnsavedAccountChannels:(VSAccountChannels *)arg1 ;
-(void)setAccountChannelsCenter:(VSAccountChannelsCenter *)arg1 ;
-(id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2 ;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
@end

