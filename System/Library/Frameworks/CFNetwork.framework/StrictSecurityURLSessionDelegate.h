/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface StrictSecurityURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	/*^block*/id _xctAssert;
	BOOL _redirected;
	BOOL _challengedForServerTrust;
	BOOL _cancelTrustChallenge;
	BOOL _expectSchemeUpgradeDueToDynamicHSTS;
	BOOL _setIgnoreHSTSInRedirect;

}

@property (copy) id xctAssert;                                            //@synthesize xctAssert=_xctAssert - In the implementation block
@property (assign) BOOL redirected;                                       //@synthesize redirected=_redirected - In the implementation block
@property (assign) BOOL challengedForServerTrust;                         //@synthesize challengedForServerTrust=_challengedForServerTrust - In the implementation block
@property (assign) BOOL cancelTrustChallenge;                             //@synthesize cancelTrustChallenge=_cancelTrustChallenge - In the implementation block
@property (assign) BOOL expectSchemeUpgradeDueToDynamicHSTS;              //@synthesize expectSchemeUpgradeDueToDynamicHSTS=_expectSchemeUpgradeDueToDynamicHSTS - In the implementation block
@property (assign) BOOL setIgnoreHSTSInRedirect;                          //@synthesize setIgnoreHSTSInRedirect=_setIgnoreHSTSInRedirect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXctAssert:(id)arg1 ;
-(id)initWithXCTAssertBlock:(/*^block*/id)arg1 ;
-(id)xctAssert;
-(BOOL)redirected;
-(void)setRedirected:(BOOL)arg1 ;
-(BOOL)challengedForServerTrust;
-(void)setChallengedForServerTrust:(BOOL)arg1 ;
-(BOOL)cancelTrustChallenge;
-(void)setCancelTrustChallenge:(BOOL)arg1 ;
-(BOOL)expectSchemeUpgradeDueToDynamicHSTS;
-(void)setExpectSchemeUpgradeDueToDynamicHSTS:(BOOL)arg1 ;
-(BOOL)setIgnoreHSTSInRedirect;
-(void)setSetIgnoreHSTSInRedirect:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

