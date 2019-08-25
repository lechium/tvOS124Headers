/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _RWIRelayConnectionToApplication;

@interface _RWIApplicationInfo : NSObject {

	int _hostApplicationPID;
	BOOL _proxy;
	BOOL _hasRemoteDebugSession;
	BOOL _allowsRemoteAutomation;
	BOOL _hasUpdatedFromListing;
	int _pid;
	NSString* _bundleId;
	NSString* _name;
	_RWIRelayConnectionToApplication* _connection;
	NSString* _debuggerConnectionIdentifier;
	unsigned long long _applicationState;

}

@property (nonatomic,readonly) int pid;                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,getter=isProxy,nonatomic) BOOL proxy;                                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) _RWIRelayConnectionToApplication * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * debuggerConnectionIdentifier;                      //@synthesize debuggerConnectionIdentifier=_debuggerConnectionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long applicationState;                      //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteDebugSession;                               //@synthesize hasRemoteDebugSession=_hasRemoteDebugSession - In the implementation block
@property (nonatomic,readonly) BOOL allowsRemoteAutomation;                              //@synthesize allowsRemoteAutomation=_allowsRemoteAutomation - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdatedFromListing;                               //@synthesize hasUpdatedFromListing=_hasUpdatedFromListing - In the implementation block
+(id)identifierForPID:(int)arg1 ;
-(BOOL)allowsRemoteAutomation;
-(BOOL)hasUpdatedFromListing;
-(id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(BOOL)arg4 connection:(id)arg5 applicationState:(unsigned long long)arg6 ;
-(BOOL)updateFromListing:(id)arg1 ;
-(BOOL)updateApplicationState:(unsigned long long)arg1 ;
-(void)setHostApplicationPID:(int)arg1 ;
-(NSString *)debuggerConnectionIdentifier;
-(void)setDebuggerConnectionIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemoteDebugSession;
-(void)setProxy:(BOOL)arg1 ;
-(int)pid;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isProxy;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(unsigned long long)applicationState;
-(_RWIRelayConnectionToApplication *)connection;
-(void)setConnection:(_RWIRelayConnectionToApplication *)arg1 ;
-(id)dictionaryRepresentation;
@end

