/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPPeopleXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSArray;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _discoveredPeople;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSXPCConnection* _xpcCnx;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	unsigned _discoveryFlags;
	int _discoveryMode;
	int _peopleDensity;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _peopleDensityChangedHandler;
	/*^block*/id _personFoundHandler;
	/*^block*/id _personLostHandler;
	/*^block*/id _personChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned discoveryFlags;                                 //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (assign,nonatomic) int discoveryMode;                                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredPeople; 
@property (nonatomic,readonly) int peopleDensity;                                     //@synthesize peopleDensity=_peopleDensity - In the implementation block
@property (nonatomic,copy) id peopleDensityChangedHandler;                            //@synthesize peopleDensityChangedHandler=_peopleDensityChangedHandler - In the implementation block
@property (nonatomic,copy) id personFoundHandler;                                     //@synthesize personFoundHandler=_personFoundHandler - In the implementation block
@property (nonatomic,copy) id personLostHandler;                                      //@synthesize personLostHandler=_personLostHandler - In the implementation block
@property (nonatomic,copy) id personChangedHandler;                                   //@synthesize personChangedHandler=_personChangedHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithLevel:(int)arg1 ;
-(int)discoveryMode;
-(void)_invalidated;
-(BOOL)_ensureXPCStarted;
-(void)_interrupted;
-(unsigned)changeFlags;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)_scheduleRetry;
-(void)_updatePeopleDensity:(unsigned long long)arg1 ;
-(void)xpcPersonFound:(id)arg1 ;
-(void)xpcPersonLost:(id)arg1 ;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_lostAllPeople;
-(NSArray *)discoveredPeople;
-(void)addAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)peopleDensity;
-(id)peopleDensityChangedHandler;
-(void)setPeopleDensityChangedHandler:(id)arg1 ;
-(id)personFoundHandler;
-(void)setPersonFoundHandler:(id)arg1 ;
-(id)personLostHandler;
-(void)setPersonLostHandler:(id)arg1 ;
-(id)personChangedHandler;
-(void)setPersonChangedHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setDiscoveryMode:(int)arg1 ;
@end

