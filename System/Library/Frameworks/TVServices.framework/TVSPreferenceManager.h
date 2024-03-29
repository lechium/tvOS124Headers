/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSTimer, NSMutableSet, NSCountedSet;

@interface TVSPreferenceManager : NSObject {

	NSLock* _preferencesLock;
	NSTimer* _prefsSyncTimer;
	NSMutableSet* _notificationDomains;
	NSMutableSet* _dirtyDomains;
	NSCountedSet* _pendingNotifcations;

}
+(id)sharedInstance;
-(id)_valueForKey:(id)arg1 forDomain:(id)arg2 ;
-(id)objectForKey:(id)arg1 forDomain:(id)arg2 ;
-(BOOL)canSetPreferencesForKey:(id)arg1 forDomain:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(void)_handleDistributedSyncForDomain:(id)arg1 notificationKey:(id)arg2 ;
-(void)_postPrefsDidChangeForDomains:(id)arg1 ;
-(void)_syncDomains:(id)arg1 ;
-(void)_markPreferencesDirtyForDomain:(id)arg1 ;
-(void)_flushPreferences:(id)arg1 ;
-(void)syncAllDomains;
-(BOOL)syncDomain:(id)arg1 ;
-(long long)int64ForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(long long)arg3 ;
-(int)integerForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(int)arg3 ;
-(double)doubleForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(double)arg3 ;
-(BOOL)boolForKey:(id)arg1 forDomain:(id)arg2 defaultValue:(BOOL)arg3 ;
-(id)stringForKey:(id)arg1 forDomain:(id)arg2 ;
-(BOOL)setInt64:(long long)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setInteger:(int)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setDouble:(double)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 forDomain:(id)arg3 ;
-(void)enableDistributedSyncForDomain:(id)arg1 ;
-(id)init;
@end

