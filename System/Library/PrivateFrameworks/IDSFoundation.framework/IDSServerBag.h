/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IDSFoundation/IDSFoundation-Structs.h>
@class IMConnectionMonitor, NSURL, NSString, NSDictionary, NSMutableURLRequest, IDSRemoteURLConnection, NSObject, NSData, NSDate, NSNumber, NSArray;

@interface IDSServerBag : NSObject {

	BOOL _allowSelfSignedCertificates;
	BOOL _allowUnsignedBags;
	int _trustStatus;
	int _token;
	IMConnectionMonitor* _connectionMonitor;
	NSURL* _bagURL;
	NSString* _apsEnvironmentName;
	NSDictionary* _bag;
	NSDictionary* _cachedBag;
	NSMutableURLRequest* _urlRequest;
	IDSRemoteURLConnection* _remoteURLConnection;
	NSObject*<OS_dispatch_queue> _bagQueue;
	NSString* _cachedURLString;
	NSData* _certData;
	NSString* _cachedHash;
	NSDate* _loadDate;
	NSNumber* _cacheTime;
	unsigned long long _hasPairedDeviceState;
	NSData* _serverSignature;
	NSArray* _serverCerts;
	NSData* _serverGivenBag;

}

@property (retain) IMConnectionMonitor * _connectionMonitor;                             //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (retain) NSURL * bagURL;                                                       //@synthesize bagURL=_bagURL - In the implementation block
@property (retain) NSString * apsEnvironmentName;                                        //@synthesize apsEnvironmentName=_apsEnvironmentName - In the implementation block
@property (setter=_setBag:,retain) NSDictionary * _bag;                                  //@synthesize bag=_bag - In the implementation block
@property (setter=_setCachedBag:,retain) NSDictionary * _cachedBag;                      //@synthesize cachedBag=_cachedBag - In the implementation block
@property (retain) NSMutableURLRequest * _urlRequest;                                    //@synthesize urlRequest=_urlRequest - In the implementation block
@property (setter=_setCachedURLString:,retain) NSString * _cachedURLString;              //@synthesize cachedURLString=_cachedURLString - In the implementation block
@property (setter=_setCachedHash:,retain) NSString * _cachedHash;                        //@synthesize cachedHash=_cachedHash - In the implementation block
@property (retain) NSDate * _loadDate;                                                   //@synthesize loadDate=_loadDate - In the implementation block
@property (retain) NSNumber * _cacheTime;                                                //@synthesize cacheTime=_cacheTime - In the implementation block
@property (retain) IDSRemoteURLConnection * _remoteURLConnection;                        //@synthesize remoteURLConnection=_remoteURLConnection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _bagQueue;                               //@synthesize bagQueue=_bagQueue - In the implementation block
@property (setter=_setTrustStatus:) int _trustStatus;                                    //@synthesize trustStatus=_trustStatus - In the implementation block
@property (retain) NSData * _certData;                                                   //@synthesize certData=_certData - In the implementation block
@property (assign) BOOL allowSelfSignedCertificates;                                     //@synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates - In the implementation block
@property (assign) BOOL allowUnsignedBags;                                               //@synthesize allowUnsignedBags=_allowUnsignedBags - In the implementation block
@property (assign) int token;                                                            //@synthesize token=_token - In the implementation block
@property (assign) unsigned long long hasPairedDeviceState;                              //@synthesize hasPairedDeviceState=_hasPairedDeviceState - In the implementation block
@property (retain) NSData * serverSignature;                                             //@synthesize serverSignature=_serverSignature - In the implementation block
@property (retain) NSArray * serverCerts;                                                //@synthesize serverCerts=_serverCerts - In the implementation block
@property (retain) NSData * serverGivenBag;                                              //@synthesize serverGivenBag=_serverGivenBag - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) BOOL isInDebilitatedMode; 
@property (readonly) BOOL isServerAvailable; 
+(id)_bagCreationLock;
+(id)_sharedInstanceForClass:(Class)arg1 ;
+(id)defaultBag;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)sharedInstance;
+(id)_sharedInstance;
-(id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(BOOL)arg3 allowUnsignedBags:(BOOL)arg4 ;
-(id)_bagDefaultsDomain;
-(NSString *)apsEnvironmentName;
-(NSNumber *)_cacheTime;
-(NSDictionary *)_bag;
-(void)_setCachedBag:(id)arg1 ;
-(BOOL)trustRefFromCertificates:(id)arg1 trustRef:(_SecTrust*)arg2 ;
-(void)_setCachedURLString:(id)arg1 ;
-(void)_setBag:(id)arg1 ;
-(void)_setTrustStatus:(int)arg1 ;
-(void)__saveCacheToPrefs;
-(void)setServerSignature:(NSData *)arg1 ;
-(void)setServerCerts:(NSArray *)arg1 ;
-(void)setServerGivenBag:(NSData *)arg1 ;
-(NSDictionary *)_cachedBag;
-(void)_saveCacheToPrefs;
-(void)_setCachedHash:(id)arg1 ;
-(void)_loadFromCache;
-(void)_saveToCache;
-(BOOL)_allowInvalid;
-(int)_trustStatus;
-(BOOL)_loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2 ;
-(NSString *)_cachedURLString;
-(BOOL)isInDebilitatedMode;
-(void)_generateURLRequest;
-(void)_cancelCurrentLoad;
-(void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(BOOL)arg3 ;
-(void)_startBagLoad:(BOOL)arg1 ;
-(void)_bagExternallyReloaded;
-(void)forceBagLoad;
-(id)urlWithKey:(id)arg1 ;
-(IMConnectionMonitor *)_connectionMonitor;
-(void)set_connectionMonitor:(IMConnectionMonitor *)arg1 ;
-(NSURL *)bagURL;
-(void)setBagURL:(NSURL *)arg1 ;
-(void)setApsEnvironmentName:(NSString *)arg1 ;
-(NSMutableURLRequest *)_urlRequest;
-(void)set_urlRequest:(NSMutableURLRequest *)arg1 ;
-(IDSRemoteURLConnection *)_remoteURLConnection;
-(void)set_remoteURLConnection:(IDSRemoteURLConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)_bagQueue;
-(void)set_bagQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSData *)_certData;
-(void)set_certData:(NSData *)arg1 ;
-(NSString *)_cachedHash;
-(NSDate *)_loadDate;
-(void)set_loadDate:(NSDate *)arg1 ;
-(void)set_cacheTime:(NSNumber *)arg1 ;
-(BOOL)allowSelfSignedCertificates;
-(void)setAllowSelfSignedCertificates:(BOOL)arg1 ;
-(BOOL)allowUnsignedBags;
-(void)setAllowUnsignedBags:(BOOL)arg1 ;
-(unsigned long long)hasPairedDeviceState;
-(void)setHasPairedDeviceState:(unsigned long long)arg1 ;
-(NSData *)serverSignature;
-(NSArray *)serverCerts;
-(NSData *)serverGivenBag;
-(void)_clearCache;
-(void)startBagLoad;
-(BOOL)isServerAvailable;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(void)_invalidate;
-(BOOL)isLoading;
-(int)token;
-(void)setToken:(int)arg1 ;
@end

