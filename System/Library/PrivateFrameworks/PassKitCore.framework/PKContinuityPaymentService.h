/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKContinuityPaymentServiceExportedInterface.h>

@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;
@class PKXPCService, NSObject, NSLock, NSArray;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface> {

	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSLock* _remoteDeviceLock;
	NSArray* _remoteDevices;
	id<PKContinuityPaymentServiceDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * remoteDevices;                                           //@synthesize remoteDevices=_remoteDevices - In the implementation block
@property (assign,nonatomic,__weak) id<PKContinuityPaymentServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedService;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(NSArray *)remoteDevices;
-(void)updatePaymentDevices;
-(void)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveUpdatedPaymentDevices:(id)arg1 ;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 ;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRemoteDevices:(NSArray *)arg1 ;
-(void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasRemoteDevices;
-(BOOL)canMakePaymentsWithRemoteDevices;
-(void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)setDelegate:(id<PKContinuityPaymentServiceDelegate>)arg1 ;
-(id<PKContinuityPaymentServiceDelegate>)delegate;
@end

