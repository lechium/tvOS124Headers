/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface CUNANPublisher : NSObject {

	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _sessions;
	LogCategory* _ucat;
	BOOL _dataPathEnabled;
	int _port;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _textInfo;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _dataSessionStartedHandler;
	/*^block*/id _dataSessionEndedHandler;

}

@property (assign,nonatomic) BOOL dataPathEnabled;                                    //@synthesize dataPathEnabled=_dataPathEnabled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSDictionary * textInfo;                                   //@synthesize textInfo=_textInfo - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id dataSessionStartedHandler;                              //@synthesize dataSessionStartedHandler=_dataSessionStartedHandler - In the implementation block
@property (nonatomic,copy) id dataSessionEndedHandler;                                //@synthesize dataSessionEndedHandler=_dataSessionEndedHandler - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setTextInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)textInfo;
-(BOOL)dataPathEnabled;
-(void)setDataPathEnabled:(BOOL)arg1 ;
-(id)dataSessionStartedHandler;
-(void)setDataSessionStartedHandler:(id)arg1 ;
-(id)dataSessionEndedHandler;
-(void)setDataSessionEndedHandler:(id)arg1 ;
-(void)_invalidated;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setPort:(int)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(int)port;
@end

