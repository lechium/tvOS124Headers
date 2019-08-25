/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, ACDDatabase, NSString, NSNumber, NSMutableDictionary;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	ACDDatabase* _database;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ACDDatabase * database;                    //@synthesize database=_database - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)shortDebugDescription;
-(NSString *)adamOrDisplayID;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(id)_displayNameFromLaunchServicesForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(id)longDebugDescription;
-(id)initWithConnection:(id)arg1 ;
-(ACDDatabase *)database;
-(NSNumber *)pid;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(id)debugDescription;
-(CFBundleRef)bundle;
-(NSString *)bundleID;
-(NSXPCConnection *)connection;
-(NSString *)localizedAppName;
@end
