/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISURLBag, SSBiometricAuthenticationContext, ISDialog, NSURL, ISDialogButton, NSDictionary, NSString, ISTouchIDDialog;

@interface ISBiometricAuthorizationDialogOperation : ISOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISURLBag* _urlBag;
	SSBiometricAuthenticationContext* _context;
	ISDialog* _dialog;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;
	NSDictionary* _buyParams;
	NSDictionary* _metricsDictionary;
	NSString* _userAgent;
	ISDialog* _fallbackDialog;
	ISTouchIDDialog* _touchIDDialog;

}

@property (retain) ISDialog * fallbackDialog;                                                      //@synthesize fallbackDialog=_fallbackDialog - In the implementation block
@property (retain) ISTouchIDDialog * touchIDDialog;                                                //@synthesize touchIDDialog=_touchIDDialog - In the implementation block
@property (retain) SSBiometricAuthenticationContext * biometricAuthenticationContext;              //@synthesize context=_context - In the implementation block
@property (copy) NSDictionary * buyParams;                                                         //@synthesize buyParams=_buyParams - In the implementation block
@property (copy) NSDictionary * metricsDictionary;                                                 //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (copy) NSString * userAgent;                                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) ISDialog * dialog;                                                            //@synthesize dialog=_dialog - In the implementation block
@property (readonly) NSURL * redirectURL;                                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (readonly) ISDialogButton * selectedButton;                                              //@synthesize selectedButton=_selectedButton - In the implementation block
-(NSURL *)redirectURL;
-(void)_loadURLBag;
-(id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2 ;
-(void)setBiometricAuthenticationContext:(SSBiometricAuthenticationContext *)arg1 ;
-(void)setMetricsDictionary:(NSDictionary *)arg1 ;
-(ISDialogButton *)selectedButton;
-(SSBiometricAuthenticationContext *)biometricAuthenticationContext;
-(ISDialog *)fallbackDialog;
-(void)setFallbackDialog:(ISDialog *)arg1 ;
-(ISTouchIDDialog *)touchIDDialog;
-(void)setTouchIDDialog:(ISTouchIDDialog *)arg1 ;
-(void)_findSelectedButtonForButtons:(id)arg1 ;
-(void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(BOOL)arg2 ;
-(BOOL)_runAuthkitOperationWithError:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)_runSignatureOperationReturningError:(id*)arg1 ;
-(BOOL)_shouldFallbackToAuthKitForError:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSDictionary *)metricsDictionary;
-(NSString *)userAgent;
-(ISDialog *)dialog;
-(void)run;
-(NSDictionary *)buyParams;
-(void)setBuyParams:(NSDictionary *)arg1 ;
@end

