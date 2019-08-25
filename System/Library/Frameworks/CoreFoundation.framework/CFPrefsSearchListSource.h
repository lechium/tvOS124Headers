/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsPlistSource, CFPrefsCloudSource;

@interface CFPrefsSearchListSource : CFPrefsSource {

	CFDictionaryRef _keysToSources;
	CFStringRef _identifier;
	CFArrayRef _sourceList;
	CFSetRef _cloudKeys;
	CFArrayRef _cloudPrefixKeys;
	CFPrefsPlistSource* _standardSetTarget;
	CFPrefsCloudSource* _cloudSetTarget;
	BOOL initialized;
	AB _isRebuildingCache;

}
+(void)preloadDomainsForIdentifiers:(const _CFString*)arg1 containers:(const _CFString*)arg2 cloudConfigurationURLs:(const _CFURL*)arg3 count:(long long)arg4 containingPreferences:(id)arg5 ;
-(CFArrayRef)alreadylocked_copyKeyList;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFStringRef)copyOSLogDescription;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(BOOL)alreadylocked_requestNewData;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCloudEnabled:(BOOL)arg1 forKeyPrefix:(CFStringRef)arg2 ;
-(void)setCloudEnabled:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(void)alreadylocked_reloadCacheIfStale;
-(void)alreadylocked_setObservingContents:(BOOL)arg1 ;
-(id)initWithIdentifier:(CFStringRef)arg1 containingPreferences:(id)arg2 ;
-(void)alreadylocked_getDictionary:(/*^block*/id)arg1 ;
-(BOOL)alreadylocked_useCloudForKey:(CFStringRef)arg1 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(long long)alreadylocked_generationCountFromListOfSources:(id*)arg1 count:(long long)arg2 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(CFArrayRef)_getPendingNotifications;
-(void*)alreadylocked_copyManagedValueForKey:(CFStringRef)arg1 ;
-(CFStringRef)copyCloudConfigurationWithURL:(CFURLRef)arg1 outConfigFileSource:(id*)arg2 outStoreName:(const _CFString*)arg3 ;
-(void)addPreferencesObserver:(id)arg1 ;
-(void)removePreferencesObserver:(id)arg1 ;
-(void)addManagedSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 ;
-(void)addCloudSourceForIdentifier:(CFStringRef)arg1 configurationPath:(CFStringRef)arg2 storeName:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)addSuiteSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)addNamedVolatileSourceForIdentifier:(CFStringRef)arg1 ;
-(BOOL)alreadylocked_hasCloudValueForKey:(CFStringRef)arg1 ;
-(BOOL)alreadylocked_hasNonRegisteredValueForKey:(CFStringRef)arg1 ;
-(void)handleRemoteChangeNotificationForDomainIdentifier:(CFStringRef)arg1 ;
-(CFDictionaryRef)alreadylocked_copyManagedDictionary;
-(void)replaceSource:(id)arg1 withSource:(id)arg2 ;
-(CFStringRef)domainIdentifier;
-(void)addSource:(id)arg1 ;
-(void)removeSource:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)freeze;
-(BOOL)synchronize;
-(long long)generationCount;
-(void)lock;
-(void)unlock;
@end
