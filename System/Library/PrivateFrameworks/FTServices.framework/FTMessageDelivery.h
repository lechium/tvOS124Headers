/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTMessageQueueDelegate.h>

@class FTMessageQueue, NSString, IMTimer, NSNumber, IDSBaseMessage, NSArray;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {

	unsigned _retries;
	FTMessageQueue* _queue;
	NSString* _userAgent;
	unsigned long long _maxConcurrentMessages;
	BOOL _retryInAirplaneMode;
	BOOL _logToRegistration;
	IMTimer* _timer;

}

@property (copy) NSString * userAgent;                                    //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) NSNumber * protocolVersion; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode;                              //@synthesize retryInAirplaneMode=_retryInAirplaneMode - In the implementation block
@property (assign) BOOL logToRegistration;                                //@synthesize logToRegistration=_logToRegistration - In the implementation block
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages;              //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
+(id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2 ;
+(Class)HTTPMessageDeliveryClass;
+(Class)APNSMessageDeliveryClass;
+(id)alloc;
-(void)setProtocolVersion:(NSNumber *)arg1 ;
-(NSNumber *)protocolVersion;
-(long long)maxMessageSize;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(NSArray *)queuedMessages;
-(BOOL)logToRegistration;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)_retryTimerHit:(id)arg1 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4 ;
-(NSArray *)allMessages;
-(BOOL)hasQueuedItems;
-(void)_setRetryTimer:(double)arg1 ;
-(long long)maxLargeMessageSize;
-(void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5 ;
-(void)setLogToRegistration:(BOOL)arg1 ;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1 ;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)cancelMessage:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
-(IDSBaseMessage *)currentMessage;
-(BOOL)busy;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_queue;
@end

