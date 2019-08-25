/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <libobjc.A.dylib/SSAuthorizationRequestDelegate.h>

@class NSURL, NSData, NSError, NSMutableArray, SSAuthorizationRequest, MPHomeSharingML3DataProvider, NSString;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {

	NSURL* _keybagURL;
	unsigned long long _accountID;
	NSData* _accountTokenData;
	unsigned long long _downloaderAccountID;
	NSData* _downloaderAccountTokenData;
	unsigned long long _familyAccountID;
	NSError* _error;
	NSMutableArray* _requests;
	SSAuthorizationRequest* _activeRequest;
	BOOL _atLeastOneAuthorizationRequestSuccessful;
	MPHomeSharingML3DataProvider* _dataProvider;

}

@property (nonatomic,retain) MPHomeSharingML3DataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resolveError:(id)arg1 ;
-(id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 downloaderAccountID:(unsigned long long)arg4 downloaderAccountTokenData:(id)arg5 familyAccountID:(unsigned long long)arg6 ;
-(id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 ;
-(BOOL)_errorIsFairPlayError:(id)arg1 ;
-(void)_performMachineAuthorization;
-(void)_processNextAuthorizationRequest;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(void)setDataProvider:(MPHomeSharingML3DataProvider *)arg1 ;
-(MPHomeSharingML3DataProvider *)dataProvider;
@end
