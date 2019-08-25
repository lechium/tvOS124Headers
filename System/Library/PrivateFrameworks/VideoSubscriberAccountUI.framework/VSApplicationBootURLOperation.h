/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURL, VSFailable, VSPreferences, NSString;

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate> {

	BOOL _isDeveloper;
	NSURL* _url;
	VSFailable* _urlOrError;
	VSPreferences* _preferences;

}

@property (nonatomic,retain) VSPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL isDeveloper;                         //@synthesize isDeveloper=_isDeveloper - In the implementation block
@property (nonatomic,retain) VSFailable * urlOrError;                  //@synthesize urlOrError=_urlOrError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isDeveloper;
-(id)initWithBootURL:(id)arg1 isDeveloper:(BOOL)arg2 ;
-(VSFailable *)urlOrError;
-(void)setUrlOrError:(VSFailable *)arg1 ;
-(id)generateTempFilePath;
-(BOOL)verifyExtendedValidationWithTrust:(SecTrustRef)arg1 ;
-(void)setIsDeveloper:(BOOL)arg1 ;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSPreferences *)preferences;
-(void)executionDidBegin;
@end
