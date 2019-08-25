/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSAssertionClientProtocol, OS_dispatch_queue;
@class BSSignal, NSString, NSObject;

@interface BKSAssertion : NSObject {

	BSSignal* _invalidationSignal;
	BOOL _acquired;
	NSString* _identifier;
	NSString* _name;
	/*^block*/id _invalidationHandler;
	/*^block*/id _acquisitionHandler;
	id<BKSAssertionClientProtocol> _client;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) id invalidationHandler; 
-(void)assertionDidInvalidate;
-(id)_initWithClient:(id)arg1 name:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_registerAssertionAndAcquire:(BOOL)arg1 ;
-(BOOL)_clientQueue_acquired;
-(id)_clientQueue_destroyEvent;
-(id)_clientQueue_client;
-(id)_clientQueue;
-(void)_clientQueue_updateAssertion;
-(id)_clientQueue_identifier;
-(id)_clientQueue_name;
-(id)_clientQueue_createEvent;
-(id)_clientQueue_updateEvent;
-(BOOL)_clientQueue_acquireAssertion;
-(void)_clientQueue_invalidate:(BOOL)arg1 ;
-(id)_initWithClient:(id)arg1 name:(id)arg2 ;
-(id)_initWithClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)invalidate;
-(BOOL)valid;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)acquire;
@end

