/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDUserContext.h>
#import <libobjc.A.dylib/_CDUserContextServerMonitoring.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSXPCConnection, NSXPCListenerEndpoint, NSMutableDictionary, NSCountedSet, NSString;

@interface _CDClientContext : NSObject <_CDUserContext, _CDUserContextServerMonitoring> {

	BOOL _interrupted;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSXPCConnection* _xpcConnection;
	NSXPCListenerEndpoint* _endpoint;
	NSMutableDictionary* _keyPathToValues;
	NSMutableDictionary* _registrations;
	NSCountedSet* _keyPathsWithRegistrationsForAnyChange;
	NSObject*<OS_dispatch_queue> _registrationCallbackQueue;
	NSMutableDictionary* _openRegistrationTokens;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;                               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                    //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic) BOOL interrupted;                                                    //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyPathToValues;                               //@synthesize keyPathToValues=_keyPathToValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrations;                                 //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathsWithRegistrationsForAnyChange;                //@synthesize keyPathsWithRegistrationsForAnyChange=_keyPathsWithRegistrationsForAnyChange - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> registrationCallbackQueue;              //@synthesize registrationCallbackQueue=_registrationCallbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openRegistrationTokens;                        //@synthesize openRegistrationTokens=_openRegistrationTokens - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                            //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)userContext;
+(id)serverInterface;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(id)objectForContextualKeyPath:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(BOOL)hasKnowledgeOfContextualKeyPath:(id)arg1 ;
-(id)lastModifiedDateForContextualKeyPath:(id)arg1 ;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 ;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 ;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 ;
-(id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2 ;
-(void)handleContextualChange:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)handleRegistrationCompleted:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1 ;
-(id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg1 ;
-(void)setCachedValueIfClientHasRegistrations:(id)arg1 forKeyPath:(id)arg2 ;
-(void)retryTimes:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1 ;
-(void)cleanupInternalReferencesToRegistration:(id)arg1 ;
-(void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1 ;
-(NSMutableDictionary *)keyPathToValues;
-(void)setKeyPathToValues:(NSMutableDictionary *)arg1 ;
-(NSCountedSet *)keyPathsWithRegistrationsForAnyChange;
-(void)setKeyPathsWithRegistrationsForAnyChange:(NSCountedSet *)arg1 ;
-(void)setRegistrationCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)openRegistrationTokens;
-(void)setOpenRegistrationTokens:(NSMutableDictionary *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)currentConnection;
-(id)localContext;
-(NSObject*<OS_dispatch_queue>)registrationCallbackQueue;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableDictionary *)registrations;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)registerCallback:(id)arg1 ;
-(void)deregisterCallback:(id)arg1 ;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSObject*<OS_os_log>)log;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListenerEndpoint *)endpoint;
@end

