/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol VSSupportedAppsViewControllerDelegate;
@class VSOptional, VSAuditToken, NSOperationQueue, NSArray;

@interface VSSupportedAppsViewController : UIViewController {

	VSOptional* _identityProvider;
	VSAuditToken* _auditToken;
	id<VSSupportedAppsViewControllerDelegate> _delegate;
	NSOperationQueue* _privateQueue;
	NSArray* _apps;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                           //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) VSOptional * identityProvider;                                          //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<VSSupportedAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSOptional *)identityProvider;
-(void)setIdentityProvider:(VSOptional *)arg1 ;
-(void)_presentError:(id)arg1 ;
-(void)beginLoadingApps;
-(void)_doneButtonPresed:(id)arg1 ;
-(void)_didFinish;
-(void)_finishLoadingApps:(id)arg1 ;
-(void)setDelegate:(id<VSSupportedAppsViewControllerDelegate>)arg1 ;
-(id<VSSupportedAppsViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(VSAuditToken *)auditToken;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setApps:(NSArray *)arg1 ;
-(NSArray *)apps;
@end
