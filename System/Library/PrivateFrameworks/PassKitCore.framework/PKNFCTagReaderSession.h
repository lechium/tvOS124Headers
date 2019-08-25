/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@protocol PKNFCTagReaderSessionDelegate;
@interface PKNFCTagReaderSession : PKPaymentSession {

	id<PKNFCTagReaderSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKNFCTagReaderSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startPolling;
-(void)stopPolling;
-(void)readNDEFMessageFromTag:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<PKNFCTagReaderSessionDelegate>)arg1 ;
-(id<PKNFCTagReaderSessionDelegate>)delegate;
-(void)endSession;
@end
