/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/DMFTransportProvider.h>

@protocol DMFTransportProvider;
@class CATTaskClient, CATOperationQueue, NSString;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {

	BOOL _isConnected;
	BOOL _isSystemConnection;
	id<DMFTransportProvider> _transportProvider;
	CATTaskClient* _taskClient;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,__weak,readonly) id<DMFTransportProvider> transportProvider;              //@synthesize transportProvider=_transportProvider - In the implementation block
@property (nonatomic,readonly) CATTaskClient * taskClient;                                     //@synthesize taskClient=_taskClient - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                                 //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL isSystemConnection;                                          //@synthesize isSystemConnection=_isSystemConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemConnection;
+(id)connectionForUID:(unsigned)arg1 ;
+(id)currentUserConnection;
+(id)connectionForAppleID:(id)arg1 ;
+(id)sharedConnection;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)isConnected;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)prepareOperationForRequest:(id)arg1 ;
-(id)initWithUserInfo:(id)arg1 ;
-(void)setIsSystemConnection:(BOOL)arg1 ;
-(id)initWithTransportProvider:(id)arg1 userInfo:(id)arg2 ;
-(id)makeNewTransport;
-(CATTaskClient *)taskClient;
-(void)_operationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<DMFTransportProvider>)transportProvider;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)clientDidInvalidate:(id)arg1 ;
-(id)batchOperationToPerformOperations:(id)arg1 ;
-(BOOL)isSystemConnection;
-(void)dealloc;
-(void)invalidate;
-(CATOperationQueue *)operationQueue;
@end

