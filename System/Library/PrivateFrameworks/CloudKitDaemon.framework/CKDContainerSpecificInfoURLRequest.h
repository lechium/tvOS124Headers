/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	BOOL _requireUserIDs;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                         //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (assign,nonatomic) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(long long)serverType;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresSignature;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(long long)partitionType;
-(BOOL)requiresConfiguration;
-(BOOL)allowsAuthedAccount;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setRequireUserIDs:(BOOL)arg1 ;
-(id)url;
@end

