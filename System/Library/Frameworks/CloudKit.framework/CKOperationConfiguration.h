/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainer, NSString, NSDictionary;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _preferAnonymousRequests;
	BOOL _automaticallyRetryNetworkFailures;
	BOOL _allowsBackgroundNetworking;
	BOOL _shouldSkipZonePCSUpdate;
	BOOL _hasContainer;
	BOOL _hasAllowsCellularAccess;
	BOOL _hasLongLived;
	BOOL _hasTimeoutIntervalForRequest;
	BOOL _hasTimeoutIntervalForResource;
	BOOL _hasAutomaticallyRetryNetworkFailures;
	BOOL _hasDiscretionaryNetworkBehavior;
	BOOL _hasPreferAnonymousRequests;
	BOOL _hasAllowsBackgroundNetworking;
	BOOL _hasSourceApplicationBundleIdentifier;
	BOOL _hasSourceApplicationSecondaryIdentifier;
	BOOL _hasAdditionalRequestHTTPHeaders;
	BOOL _hasShouldSkipZonePCSUpdate;
	BOOL _hasQualityOfService;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSDictionary* _additionalRequestHTTPHeaders;

}

@property (assign,nonatomic) BOOL hasContainer;                                            //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellularAccess;                                 //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL hasLongLived;                                            //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForRequest;                            //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForResource;                           //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;                    //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionaryNetworkBehavior;                         //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasPreferAnonymousRequests;                              //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsBackgroundNetworking;                           //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationBundleIdentifier;                    //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;                 //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalRequestHTTPHeaders;                         //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSkipZonePCSUpdate;                              //@synthesize hasShouldSkipZonePCSUpdate=_hasShouldSkipZonePCSUpdate - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRetryNetworkFailures;                       //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;              //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasQualityOfService;                                     //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipZonePCSUpdate;                                 //@synthesize shouldSkipZonePCSUpdate=_shouldSkipZonePCSUpdate - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                              //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                            //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                             //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                            //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(BOOL)hasQualityOfService;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)hasContainer;
-(void)setLongLived:(BOOL)arg1 ;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(BOOL)hasAllowsCellularAccess;
-(BOOL)hasLongLived;
-(BOOL)hasTimeoutIntervalForRequest;
-(BOOL)hasTimeoutIntervalForResource;
-(BOOL)hasAutomaticallyRetryNetworkFailures;
-(BOOL)hasDiscretionaryNetworkBehavior;
-(BOOL)hasPreferAnonymousRequests;
-(BOOL)hasAllowsBackgroundNetworking;
-(BOOL)hasSourceApplicationBundleIdentifier;
-(BOOL)hasSourceApplicationSecondaryIdentifier;
-(BOOL)hasAdditionalRequestHTTPHeaders;
-(BOOL)hasShouldSkipZonePCSUpdate;
-(void)setShouldSkipZonePCSUpdate:(BOOL)arg1 ;
-(void)setHasContainer:(BOOL)arg1 ;
-(void)setHasAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHasLongLived:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForRequest:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForResource:(BOOL)arg1 ;
-(void)setHasAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setHasDiscretionaryNetworkBehavior:(BOOL)arg1 ;
-(void)setHasPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setHasShouldSkipZonePCSUpdate:(BOOL)arg1 ;
-(void)setHasAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setHasSourceApplicationBundleIdentifier:(BOOL)arg1 ;
-(void)setHasSourceApplicationSecondaryIdentifier:(BOOL)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(BOOL)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(double)timeoutIntervalForRequest;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(long long)qualityOfService;
-(BOOL)isLongLived;
-(void)setAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(BOOL)automaticallyRetryNetworkFailures;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(double)timeoutIntervalForResource;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(BOOL)shouldSkipZonePCSUpdate;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
@end

