/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray;

@interface OSLogPreferencesManager : NSObject {

	NSString* _name;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;

}

@property (nonatomic,readonly) NSArray * processes; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
+(id)sharedManager;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(NSArray *)subsystems;
-(id)_levelPrefs;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;
-(NSArray *)processes;
-(void)resetAll;
-(id)init;
-(void)reset;
@end

