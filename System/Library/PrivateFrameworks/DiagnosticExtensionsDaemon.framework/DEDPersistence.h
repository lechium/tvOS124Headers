/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSMutableSet, NSUserDefaults, NSObject;

@interface DEDPersistence : NSObject {

	NSMutableSet* _bugSessionIdentifiers;
	NSUserDefaults* _userDefaults;
	NSObject*<OS_os_log> _log;

}

@property (retain) NSMutableSet * bugSessionIdentifiers;              //@synthesize bugSessionIdentifiers=_bugSessionIdentifiers - In the implementation block
@property (retain) NSUserDefaults * userDefaults;                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(void)removeBugSession:(id)arg1 ;
-(void)updateBugSession:(id)arg1 ;
-(id)loadSavedBugSessions;
-(BOOL)canProceedWithDevice:(id)arg1 ;
-(void)setBugSessionIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)bugSessionIdentifiers;
-(id)_indexKeyForBugSessionIdentifier:(id)arg1 ;
-(id)_indexKeyForBugSession:(id)arg1 ;
-(id)loadSavedSessionsFromPlist:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
@end
