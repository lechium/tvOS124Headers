/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSServerSideConfigProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL;

@interface MSServerSideConfigProtocol : NSObject {

	id<MSServerSideConfigProtocolDelegate> _delegate;
	NSString* _personID;
	NSURL* _configURL;
	MSSSCPCContext* _context;

}

@property (assign,nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                        //@synthesize personID=_personID - In the implementation block
-(NSString *)personID;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
-(void)queryConfiguration;
-(void)_didFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)abort;
-(void)dealloc;
-(void)setDelegate:(id<MSServerSideConfigProtocolDelegate>)arg1 ;
-(id<MSServerSideConfigProtocolDelegate>)delegate;
@end

