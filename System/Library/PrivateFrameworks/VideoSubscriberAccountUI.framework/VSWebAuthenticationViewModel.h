/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel {

	NSURL* _sourceURL;
	VSMessageQueue* _messagesToWeb;
	VSMessageQueue* _messagesFromWeb;

}

@property (nonatomic,copy) NSURL * sourceURL;                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesToWeb;                //@synthesize messagesToWeb=_messagesToWeb - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesFromWeb;              //@synthesize messagesFromWeb=_messagesFromWeb - In the implementation block
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(VSMessageQueue *)messagesToWeb;
-(VSMessageQueue *)messagesFromWeb;
-(id)init;
@end

