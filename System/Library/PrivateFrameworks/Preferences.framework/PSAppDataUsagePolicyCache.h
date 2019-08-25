/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Preferences/Preferences-Structs.h>
@class NSCache, NSObject;

@interface PSAppDataUsagePolicyCache : NSObject {

	NSCache* _policyCache;
	CTServerConnectionRef _ctServerConnection;
	NSObject*<OS_dispatch_queue> _policyPrefetchQueue;

}

@property (nonatomic,retain) NSCache * policyCache;                                         //@synthesize policyCache=_policyCache - In the implementation block
@property (nonatomic,retain) CTServerConnectionRef ctServerConnection;                      //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> policyPrefetchQueue;              //@synthesize policyPrefetchQueue=_policyPrefetchQueue - In the implementation block
+(id)sharedInstance;
-(NSCache *)policyCache;
-(id)initPrivate;
-(id)usagePolicyFor:(id)arg1 ;
-(void)prefetchUsagePolicyFor:(id)arg1 ;
-(BOOL)setUsagePoliciesForBundle:(id)arg1 cellular:(BOOL)arg2 wifi:(BOOL)arg3 ;
-(id)fetchUsagePolicyFor:(id)arg1 ;
-(void)flushPrefetchingQueue;
-(BOOL)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2 ;
-(void)setPolicyCache:(NSCache *)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)policyPrefetchQueue;
-(void)setPolicyPrefetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)willEnterForeground;
@end
