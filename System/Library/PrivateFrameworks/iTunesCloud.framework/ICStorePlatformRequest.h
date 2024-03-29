/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, ICStoreRequestContext, NSDictionary;

@interface ICStorePlatformRequest : NSObject <NSCopying> {

	BOOL _returnsLocalEquivalencies;
	BOOL _shouldIgnoreCache;
	NSString* _clientIdentifier;
	NSString* _clientBundleIdentifier;
	NSString* _clientBundleVersion;
	NSArray* _itemIdentifiers;
	long long _batchSize;
	/*^block*/id _batchResultsHandler;
	NSString* _imageProfile;
	NSString* _keyProfile;
	long long _personalizationStyle;
	NSString* _platformIdentifier;
	NSString* _protocolVersion;
	double _retryDelay;
	double _timeoutInterval;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) NSDictionary * HTTPHeaders; 
@property (nonatomic,copy,readonly) NSArray * queryItems; 
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                   //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientBundleVersion;                      //@synthesize clientBundleVersion=_clientBundleVersion - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                           //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (assign,nonatomic) long long batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id batchResultsHandler;                              //@synthesize batchResultsHandler=_batchResultsHandler - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                             //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                               //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic) long long personalizationStyle;                    //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (nonatomic,copy) NSString * platformIdentifier;                       //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) double retryDelay;                                 //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,nonatomic) BOOL returnsLocalEquivalencies;                    //@synthesize returnsLocalEquivalencies=_returnsLocalEquivalencies - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                            //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                            //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(NSArray *)queryItems;
-(double)timeoutInterval;
-(NSString *)clientIdentifier;
-(NSDictionary *)HTTPHeaders;
-(NSString *)clientBundleIdentifier;
-(NSString *)keyProfile;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(id)copyWithItemIdentifiersInRange:(NSRange)arg1 ;
-(BOOL)returnsLocalEquivalencies;
-(NSString *)clientBundleVersion;
-(void)setClientBundleVersion:(NSString *)arg1 ;
-(id)batchResultsHandler;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)setKeyProfile:(NSString *)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setReturnsLocalEquivalencies:(BOOL)arg1 ;
-(double)retryDelay;
-(void)setRetryDelay:(double)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setPlatformIdentifier:(NSString *)arg1 ;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(BOOL)shouldIgnoreCache;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setBatchResultsHandler:(id)arg1 ;
-(NSString *)platformIdentifier;
-(long long)qualityOfService;
-(ICStoreRequestContext *)requestContext;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
@end

