/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSObject, NSString, NSArray;

@interface CURangingSession : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _peersChanged;
	LogCategory* _ucat;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _measurementHandler;
	/*^block*/id _measurementHandlerEx;
	NSArray* _peers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) id measurementHandler;                                     //@synthesize measurementHandler=_measurementHandler - In the implementation block
@property (nonatomic,copy) id measurementHandlerEx;                                   //@synthesize measurementHandlerEx=_measurementHandlerEx - In the implementation block
@property (nonatomic,copy) NSArray * peers;                                           //@synthesize peers=_peers - In the implementation block
-(unsigned)flags;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(void)_updateInitiator;
-(void)_updateResponder;
-(void)_updatePeers;
-(id)measurementHandler;
-(void)setMeasurementHandler:(id)arg1 ;
-(id)measurementHandlerEx;
-(void)setMeasurementHandlerEx:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(void)_update;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end
