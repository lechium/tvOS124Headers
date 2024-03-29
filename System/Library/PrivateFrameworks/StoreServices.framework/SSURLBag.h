/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	BOOL _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) NSDictionary * existingBagDictionary; 
@property (readonly) NSString * storeFrontIdentifier;                   //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
+(id)URLBagForContext:(id)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)existingBagDictionary;
-(NSString *)storeFrontIdentifier;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
@end

