/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class EASession, NSInputStream, NSOutputStream, CUMFiReadRequest, CUMFiWriteRequest, EAAccessory, NSObject, NSString;

@interface CUMFiSession : NSObject <NSStreamDelegate> {

	EASession* _eaSession;
	NSInputStream* _eaInputStream;
	NSOutputStream* _eaOutputStream;
	CUMFiReadRequest* _readRequestList;
	id* _readRequestNext;
	CUMFiReadRequest* _readRequestCurr;
	char* _readBuffer;
	unsigned long long _readLen;
	CUMFiWriteRequest* _writeRequestList;
	id* _writeRequestNext;
	CUMFiWriteRequest* _writeRequestCurr;
	const char* _writeBase;
	const char* _writePtr;
	const char* _writeEnd;
	LogCategory* _ucat;
	EAAccessory* _device;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _protocolString;

}

@property (nonatomic,retain) EAAccessory * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * protocolString;                                 //@synthesize protocolString=_protocolString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_handleError:(id)arg1 ;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)readMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processReadRequests;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processWriteRequests;
-(NSString *)protocolString;
-(void)setProtocolString:(NSString *)arg1 ;
-(void)_activate;
-(EAAccessory *)device;
-(void)setDevice:(EAAccessory *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end

