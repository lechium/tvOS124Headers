/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSAuditToken, VSOptional, NSOperationQueue;

@interface VSIdentityProviderFetchOperation : VSAsyncOperation {

	BOOL _fetchFromStoreOnly;
	NSString* _identityProviderID;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSString * identityProviderID;                  //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (assign,nonatomic) BOOL fetchFromStoreOnly;                      //@synthesize fetchFromStoreOnly=_fetchFromStoreOnly - In the implementation block
@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSString *)identityProviderID;
-(id)initWithIdentityProviderID:(id)arg1 ;
-(void)setIdentityProviderID:(NSString *)arg1 ;
-(BOOL)fetchFromStoreOnly;
-(id)_fetchAllOperation;
-(void)setFetchFromStoreOnly:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(VSAuditToken *)auditToken;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
@end

