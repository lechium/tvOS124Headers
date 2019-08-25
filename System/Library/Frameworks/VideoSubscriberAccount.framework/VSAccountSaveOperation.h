/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSPersistentStorage, VSAccountChannels, NSOperation;

@interface VSAccountSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSPersistentStorage* _storage;
	VSAccountChannels* _unsavedChannels;
	NSOperation* _currentOperation;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                          //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                    //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSAccountChannels * unsavedChannels;              //@synthesize unsavedChannels=_unsavedChannels - In the implementation block
@property (nonatomic,retain) VSOptional * result;                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperation * currentOperation;                   //@synthesize currentOperation=_currentOperation - In the implementation block
-(VSPersistentStorage *)storage;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(NSArray *)unsavedAccounts;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
-(void)_startAccountChannelsSaveOperation;
-(VSAccountChannels *)unsavedChannels;
-(void)_startCredentialSaveOperation;
-(void)setUnsavedChannels:(VSAccountChannels *)arg1 ;
-(void)setCurrentOperation:(NSOperation *)arg1 ;
-(NSOperation *)currentOperation;
-(id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3 ;
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(void)executionDidBegin;
@end

