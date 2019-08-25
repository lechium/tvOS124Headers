/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamProtocol.h>

@class NSNumber, NSString;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol> {

	BOOL _helloMessageResponseReceived;
	NSNumber* _pendingHelloMessageIdentifier;

}

@property (nonatomic,retain) NSNumber * pendingHelloMessageIdentifier;              //@synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier - In the implementation block
@property (assign,nonatomic) BOOL helloMessageResponseReceived;                     //@synthesize helloMessageResponseReceived=_helloMessageResponseReceived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(BOOL)helloMessageResponseReceived;
-(void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStreamDidClose:(id)arg1 ;
-(void)dataStreamDidOpen:(id)arg1 ;
-(void)setPendingHelloMessageIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)pendingHelloMessageIdentifier;
-(BOOL)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2 ;
-(void)setHelloMessageResponseReceived:(BOOL)arg1 ;
-(id)init;
@end
