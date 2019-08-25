/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSUUID, NSString, NSURL, NSDictionary, NSError, NSSet, NSDate, SFPeerDevice, _LSUserActivityWasContinuedInfo;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _payloads;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForPublicIndexing;
	BOOL _eligibleForReminders;
	BOOL _eligibleForPrediction;
	BOOL _eligibleToAdvertise;
	BOOL _eligibleToAlwaysAdvertise;
	BOOL _dirty;
	BOOL _payloadAvailable;
	BOOL _payloadRequested;
	NSUUID* _uuid;
	unsigned long long _type;
	NSString* _title;
	NSString* _activityType;
	NSString* _dynamicActivityType;
	NSString* _teamIdentifier;
	NSURL* _webpageURL;
	NSURL* _referrerURL;
	NSDictionary* _options;
	NSError* _encodedUserInfoError;
	NSSet* _requiredUserInfoKeys;
	NSDate* _when;
	NSDate* _lastInterestingTime;
	NSDictionary* _encodingOptions;
	NSString* _contentUserAction;
	NSSet* _keywords;
	NSDate* _expirationDate;
	NSString* _persistentIdentifier;
	NSError* _error;
	SFPeerDevice* _peerDevice;
	NSString* _bundleIdentifier;
	_LSUserActivityWasContinuedInfo* _wasContinuedInfo;

}

@property (copy) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * activityType;                                           //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSString * dynamicActivityType;                                    //@synthesize dynamicActivityType=_dynamicActivityType - In the implementation block
@property (copy) NSString * teamIdentifier;                                         //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (copy) NSURL * webpageURL;                                                //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSURL * referrerURL;                                               //@synthesize referrerURL=_referrerURL - In the implementation block
@property (copy) NSDictionary * options;                                            //@synthesize options=_options - In the implementation block
@property (copy) NSError * encodedUserInfoError;                                    //@synthesize encodedUserInfoError=_encodedUserInfoError - In the implementation block
@property (copy) NSSet * requiredUserInfoKeys;                                      //@synthesize requiredUserInfoKeys=_requiredUserInfoKeys - In the implementation block
@property (copy) NSDate * when;                                                     //@synthesize when=_when - In the implementation block
@property (copy) NSDate * lastInterestingTime;                                      //@synthesize lastInterestingTime=_lastInterestingTime - In the implementation block
@property (copy) NSDictionary * payloads; 
@property (assign) BOOL eligibleForHandoff;                                         //@synthesize eligibleForHandoff=_eligibleForHandoff - In the implementation block
@property (assign) BOOL eligibleForSearch;                                          //@synthesize eligibleForSearch=_eligibleForSearch - In the implementation block
@property (assign) BOOL eligibleForPublicIndexing;                                  //@synthesize eligibleForPublicIndexing=_eligibleForPublicIndexing - In the implementation block
@property (assign) BOOL eligibleForReminders;                                       //@synthesize eligibleForReminders=_eligibleForReminders - In the implementation block
@property (assign) BOOL eligibleForPrediction;                                      //@synthesize eligibleForPrediction=_eligibleForPrediction - In the implementation block
@property (readonly) BOOL eligibleToAdvertise;                                      //@synthesize eligibleToAdvertise=_eligibleToAdvertise - In the implementation block
@property (readonly) BOOL eligibleToAlwaysAdvertise;                                //@synthesize eligibleToAlwaysAdvertise=_eligibleToAlwaysAdvertise - In the implementation block
@property (copy) NSDictionary * encodingOptions;                                    //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (copy) NSString * contentUserAction;                                      //@synthesize contentUserAction=_contentUserAction - In the implementation block
@property (copy) NSSet * keywords;                                                  //@synthesize keywords=_keywords - In the implementation block
@property (copy) NSDate * expirationDate;                                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy) NSString * persistentIdentifier;                                   //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (getter=isDirty,readonly) BOOL dirty;                                     //@synthesize dirty=_dirty - In the implementation block
@property (getter=isPayloadAvailable) BOOL payloadAvailable;                        //@synthesize payloadAvailable=_payloadAvailable - In the implementation block
@property (getter=isPayloadRequested) BOOL payloadRequested;                        //@synthesize payloadRequested=_payloadRequested - In the implementation block
@property (retain) SFPeerDevice * peerDevice;                                       //@synthesize peerDevice=_peerDevice - In the implementation block
@property (copy) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) _LSUserActivityWasContinuedInfo * wasContinuedInfo;              //@synthesize wasContinuedInfo=_wasContinuedInfo - In the implementation block
+(id)encodedInfoToOldEncodedInfo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)contentUserAction;
-(void)setContentUserAction:(NSString *)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(void)setEligibleForPrediction:(BOOL)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
-(BOOL)isDirty;
-(id)payloadForIdentifier:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(id)statusString;
-(NSDictionary *)payloads;
-(NSString *)dynamicActivityType;
-(BOOL)eligibleForHandoff;
-(BOOL)eligibleForPublicIndexing;
-(BOOL)eligibleForReminders;
-(BOOL)eligibleForSearch;
-(void)setDynamicActivityType:(NSString *)arg1 ;
-(BOOL)setPayload:(id)arg1 identifier:(id)arg2 ;
-(void)setEligibleForReminders:(BOOL)arg1 ;
-(void)setEncodingOptions:(NSDictionary *)arg1 ;
-(void)setEncodedUserInfoError:(NSError *)arg1 ;
-(id)archiveUserActivityInfo;
-(void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(NSError *)encodedUserInfoError;
-(NSDictionary *)encodingOptions;
-(BOOL)requestPayloadWithCompletionHandlerEvenIfClean:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setPayloadAvailable:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithUserActivityInfo:(id)arg1 ;
-(id)initWithArchivedUserActivityInfo:(id)arg1 ;
-(id)copyUserActivityInfoWithUUID:(BOOL)arg1 ;
-(void)setPayloads:(NSDictionary *)arg1 ;
-(id)userActivityString;
-(id)secondaryUserActivityString;
-(id)optionalUserActivityData;
-(BOOL)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearPayload;
-(NSDate *)when;
-(void)setWhen:(NSDate *)arg1 ;
-(NSDate *)lastInterestingTime;
-(void)setLastInterestingTime:(NSDate *)arg1 ;
-(BOOL)eligibleForPrediction;
-(BOOL)eligibleToAdvertise;
-(BOOL)eligibleToAlwaysAdvertise;
-(BOOL)isPayloadAvailable;
-(BOOL)isPayloadRequested;
-(void)setPayloadRequested:(BOOL)arg1 ;
-(_LSUserActivityWasContinuedInfo *)wasContinuedInfo;
-(void)setWasContinuedInfo:(_LSUserActivityWasContinuedInfo *)arg1 ;
-(NSString *)teamIdentifier;
-(SFPeerDevice *)peerDevice;
-(id)logString;
-(void)setPeerDevice:(SFPeerDevice *)arg1 ;
-(id)payloadIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)options;
-(NSString *)activityType;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

