/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSString;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation {

	/*^block*/id _fetchWebAuthTokenCompletionBlock;
	NSString* _APIToken;
	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                          //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                              //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id fetchWebAuthTokenCompletionBlock;              //@synthesize fetchWebAuthTokenCompletionBlock=_fetchWebAuthTokenCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleCompletionCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(id)fetchWebAuthTokenCompletionBlock;
-(void)setFetchWebAuthTokenCompletionBlock:(id)arg1 ;
-(id)initWithAPIToken:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(id)init;
@end

