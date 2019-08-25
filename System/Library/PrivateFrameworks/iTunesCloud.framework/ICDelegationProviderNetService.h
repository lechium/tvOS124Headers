/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, ICDelegationNetServiceTXTRecord, NSNetService, NSArray, NSString;

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _netServiceStreamResolutionQueue;
	NSMutableArray* _resolutionCompletionHandlers;
	long long _state;
	ICDelegationNetServiceTXTRecord* _txtRecord;
	NSNetService* _netService;

}

@property (nonatomic,readonly) NSNetService * netService;                          //@synthesize netService=_netService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * delegationAccountUUIDs; 
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) long long securityMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNetService:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(long long)securityMode;
-(NSArray *)delegationAccountUUIDs;
-(void)getResolvedStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateTXTRecordProperties;
-(NSString *)deviceName;
-(NSNetService *)netService;
-(void)_resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_setState:(long long)arg1 ;
@end

