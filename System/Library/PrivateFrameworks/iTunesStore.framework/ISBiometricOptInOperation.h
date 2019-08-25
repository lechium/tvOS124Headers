/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISURLBag, NSString;

@interface ISBiometricOptInOperation : ISOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _promptUser;
	/*^block*/id _resultBlock;
	ISURLBag* _urlBag;
	NSString* _topicName;
	NSString* _userAgent;

}

@property (assign) BOOL promptUser; 
@property (copy) NSString * topicName;              //@synthesize topicName=_topicName - In the implementation block
@property (copy) NSString * userAgent;              //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) id resultBlock; 
-(void)_loadURLBag;
-(void)setPromptUser:(BOOL)arg1 ;
-(void)setTopicName:(NSString *)arg1 ;
-(BOOL)promptUser;
-(BOOL)_performOptInDialogOperationWithError:(id*)arg1 ;
-(BOOL)_performPasscodeDialogOperationWithError:(id*)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(id)_newSourceByStartingTimeoutTimer;
-(void)_performOptInDialogMetricsWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(NSString *)topicName;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)init;
-(void)run;
@end
