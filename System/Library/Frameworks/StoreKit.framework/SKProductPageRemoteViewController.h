/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKProductPageExtensionClientInterface.h>
#import <libobjc.A.dylib/ServiceProductPage.h>

@protocol SKProductPageRemoteViewControllerDelegate;
@class NSString;

@interface SKProductPageRemoteViewController : _UIRemoteViewController <SKProductPageExtensionClientInterface, ServiceProductPage> {

	id<SKProductPageRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKProductPageRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)loadDidFinish;
-(void)setAffiliateIdentifier:(id)arg1 ;
-(id)extensionProxy;
-(void)setCancelButtonTitle:(id)arg1 ;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(void)setRightBarButtonTitle:(id)arg1 ;
-(void)setShowsRightBarButton:(BOOL)arg1 ;
-(void)setPromptString:(id)arg1 ;
-(void)setAskToBuy:(BOOL)arg1 ;
-(void)setVisibleInClientWindow:(id)arg1 ;
-(void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2 ;
-(void)finishWithResult:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishImmediately;
-(void)loadProductWithPageDictionary:(id)arg1 ;
-(void)loadProductWithRequest:(id)arg1 ;
-(void)loadProductWithURL:(id)arg1 ;
-(void)setAdditionalBuyParameters:(id)arg1 ;
-(void)finishStarRatingPromptWithRating:(id)arg1 ;
-(void)setProductPageStyle:(id)arg1 ;
-(void)setScriptContextDictionary:(id)arg1 ;
-(void)setPreview:(id)arg1 ;
-(void)setDelegate:(id<SKProductPageRemoteViewControllerDelegate>)arg1 ;
-(id<SKProductPageRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setClientIdentifier:(id)arg1 ;
@end

