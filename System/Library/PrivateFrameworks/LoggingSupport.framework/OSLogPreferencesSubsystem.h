/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface OSLogPreferencesSubsystem : NSObject {

	NSString* _systemPrefsFile;
	NSDictionary* _systemPrefs;
	NSString* _internalPrefsFile;
	NSDictionary* _internalPrefs;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(long long)_defaultEnabledLevelForCategory:(id)arg1 ;
-(long long)_defaultPersistedLevelForCategory:(id)arg1 ;
-(long long)_enabledLevelForCategory:(id)arg1 ;
-(long long)_persistedLevelForCategory:(id)arg1 ;
-(id)_levelPrefsForCategory:(id)arg1 ;
-(void)_setEnabledLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_setPersistedLevel:(long long)arg1 forCategory:(id)arg2 ;
-(void)_resetCategory:(id)arg1 ;
-(void)resetAll;
-(NSString *)name;
-(void)reset;
-(BOOL)isLocked;
-(id)initWithName:(id)arg1 ;
-(NSArray *)categories;
@end

