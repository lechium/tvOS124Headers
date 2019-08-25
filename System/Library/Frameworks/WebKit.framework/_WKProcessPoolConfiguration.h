/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
	unsigned long long _wirelessContextIdentifier;

}

@property (nonatomic,copy) NSURL * injectedBundleURL; 
@property (assign,nonatomic) unsigned long long maximumProcessCount; 
@property (nonatomic,copy) NSString * customWebContentServiceBundleIdentifier; 
@property (assign,nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting; 
@property (assign,nonatomic) BOOL attrStyleEnabled; 
@property (nonatomic,copy) NSArray * additionalReadAccessAllowedURLs; 
@property (assign,nonatomic) unsigned long long wirelessContextIdentifier;                    //@synthesize wirelessContextIdentifier=_wirelessContextIdentifier - In the implementation block
@property (assign,nonatomic) long long diskCacheSizeOverride; 
@property (nonatomic,copy) NSArray * cachePartitionedURLSchemes; 
@property (nonatomic,copy) NSArray * alwaysRevalidatedURLSchemes; 
@property (assign,nonatomic) BOOL diskCacheSpeculativeValidationEnabled; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (assign,nonatomic) BOOL shouldCaptureAudioInUIProcess; 
@property (nonatomic,copy) NSString * CTDataConnectionServiceType; 
@property (assign,nonatomic) BOOL alwaysRunsAtBackgroundPriority; 
@property (assign,nonatomic) BOOL shouldTakeUIBackgroundAssertion; 
@property (assign,nonatomic) int presentingApplicationPID; 
@property (assign,nonatomic) BOOL processSwapsOnNavigation; 
@property (assign,nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses; 
@property (assign,nonatomic) BOOL processSwapsOnWindowOpenWithOpener; 
@property (assign,nonatomic) BOOL prewarmsProcessesAutomatically; 
@property (assign,nonatomic) BOOL usesWebProcessCache; 
@property (assign,nonatomic) BOOL pageCacheEnabled; 
@property (assign,nonatomic) BOOL suppressesConnectionTerminationOnSystemChange; 
@property (assign,getter=isJITEnabled,nonatomic) BOOL JITEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(BOOL)pageCacheEnabled;
-(unsigned long long)maximumProcessCount;
-(NSURL *)injectedBundleURL;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(long long)diskCacheSizeOverride;
-(void)setDiskCacheSizeOverride:(long long)arg1 ;
-(BOOL)diskCacheSpeculativeValidationEnabled;
-(void)setDiskCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(BOOL)ignoreSynchronousMessagingTimeoutsForTesting;
-(void)setIgnoreSynchronousMessagingTimeoutsForTesting:(BOOL)arg1 ;
-(BOOL)attrStyleEnabled;
-(void)setAttrStyleEnabled:(BOOL)arg1 ;
-(NSArray *)additionalReadAccessAllowedURLs;
-(void)setAdditionalReadAccessAllowedURLs:(NSArray *)arg1 ;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
-(NSArray *)alwaysRevalidatedURLSchemes;
-(void)setAlwaysRevalidatedURLSchemes:(NSArray *)arg1 ;
-(BOOL)shouldCaptureAudioInUIProcess;
-(void)setShouldCaptureAudioInUIProcess:(BOOL)arg1 ;
-(void)setPresentingApplicationPID:(int)arg1 ;
-(int)presentingApplicationPID;
-(void)setProcessSwapsOnNavigation:(BOOL)arg1 ;
-(BOOL)processSwapsOnNavigation;
-(void)setPrewarmsProcessesAutomatically:(BOOL)arg1 ;
-(BOOL)prewarmsProcessesAutomatically;
-(void)setUsesWebProcessCache:(BOOL)arg1 ;
-(BOOL)usesWebProcessCache;
-(void)setAlwaysKeepAndReuseSwappedProcesses:(BOOL)arg1 ;
-(BOOL)alwaysKeepAndReuseSwappedProcesses;
-(void)setProcessSwapsOnWindowOpenWithOpener:(BOOL)arg1 ;
-(BOOL)processSwapsOnWindowOpenWithOpener;
-(void)setPageCacheEnabled:(BOOL)arg1 ;
-(BOOL)suppressesConnectionTerminationOnSystemChange;
-(BOOL)isJITEnabled;
-(void)setJITEnabled:(BOOL)arg1 ;
-(void)setSuppressesConnectionTerminationOnSystemChange:(BOOL)arg1 ;
-(BOOL)alwaysRunsAtBackgroundPriority;
-(void)setAlwaysRunsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)shouldTakeUIBackgroundAssertion;
-(void)setShouldTakeUIBackgroundAssertion:(BOOL)arg1 ;
-(NSString *)customWebContentServiceBundleIdentifier;
-(void)setCustomWebContentServiceBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)wirelessContextIdentifier;
-(void)setWirelessContextIdentifier:(unsigned long long)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)CTDataConnectionServiceType;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setCTDataConnectionServiceType:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

