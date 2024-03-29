/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVLReadWriteFeedResource.h>

@protocol TVLApplianceDelegate, TVLReadWriteFeedResource;
@class NSDictionary, TVLPreferenceFeedResource, NSMutableArray, TVLApplianceViewController, NSString, NSURL, TVLLegacyJSContext, NSArray;

@interface TVLAppliance : NSObject <TVLReadWriteFeedResource> {

	NSDictionary* _appDictionary;
	BOOL _allowiCloudAuth;
	long long _controllerTransactionCount;
	BOOL _navControllerSyncScheduled;
	TVLPreferenceFeedResource* _preferenceResource;
	NSDictionary* _rootDictionary;
	NSMutableArray* _stackTransactionBlocks;
	TVLApplianceViewController* _viewController;
	id<TVLApplianceDelegate> _delegate;
	long long _applianceType;
	NSString* _vendorIdentifier;
	NSString* _displayName;
	NSURL* _rootURL;
	NSURL* _javascriptURL;
	NSURL* _supportURL;
	TVLLegacyJSContext* _javaScriptContext;
	id<TVLReadWriteFeedResource> _sessionResource;
	NSDictionary* _launchOptions;

}

@property (assign,nonatomic,__weak) id<TVLApplianceDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long applianceType;                                     //@synthesize applianceType=_applianceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * vendorIdentifier;                          //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * rootURL;                                      //@synthesize rootURL=_rootURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * javascriptURL;                                //@synthesize javascriptURL=_javascriptURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * supportURL;                                   //@synthesize supportURL=_supportURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowRemoteInspectionOfJSContext; 
@property (nonatomic,retain) TVLLegacyJSContext * javaScriptContext;                      //@synthesize javaScriptContext=_javaScriptContext - In the implementation block
@property (nonatomic,readonly) BOOL allowiCloudAuth;                                      //@synthesize allowiCloudAuth=_allowiCloudAuth - In the implementation block
@property (nonatomic,readonly) id<TVLReadWriteFeedResource> sessionResource;              //@synthesize sessionResource=_sessionResource - In the implementation block
@property (nonatomic,readonly) NSDictionary * appDictionary; 
@property (nonatomic,copy) NSDictionary * launchOptions;                                  //@synthesize launchOptions=_launchOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * controllerStack; 
@property (nonatomic,readonly) TVLApplianceViewController * viewController;               //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultHTTPHeaders;
+(BOOL)isInfoPlistApplianceForDictionary:(id)arg1 ;
+(id)applianceForInfoDictionary:(id)arg1 ;
+(id)_systemVersion;
+(id)applianceForVendorBagDictionary:(id)arg1 ;
-(TVLLegacyJSContext *)javaScriptContext;
-(void)removeController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(NSDictionary *)launchOptions;
-(NSString *)vendorIdentifier;
-(void)_swapController:(id)arg1 forController:(id)arg2 ;
-(id)feedResourceNamed:(id)arg1 ;
-(void)setFeedResource:(id)arg1 named:(id)arg2 ;
-(void)setJavaScriptContext:(TVLLegacyJSContext *)arg1 ;
-(void)clearFeedResources;
-(id)generateRequestForURL:(id)arg1 headers:(id)arg2 method:(id)arg3 body:(id)arg4 ;
-(void)decorateRequestProperties:(id)arg1 ;
-(void)startApplicationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopApplication;
-(NSURL *)rootURL;
-(NSDictionary *)appDictionary;
-(void)setApplianceType:(long long)arg1 ;
-(void)performControllerTransaction:(/*^block*/id)arg1 ;
-(NSArray *)controllerStack;
-(BOOL)shouldAllowRemoteInspectionOfJSContext;
-(id<TVLReadWriteFeedResource>)sessionResource;
-(id)restorationPathForController:(id)arg1 ;
-(void)swapController:(id)arg1 ;
-(BOOL)allowiCloudAuth;
-(void)prettyPrintControllerStack;
-(NSURL *)supportURL;
-(NSURL *)javascriptURL;
-(id)initWithInfoDictionary:(id)arg1 ;
-(id)initWithVendorBagDictionary:(id)arg1 ;
-(id)_extractDisplayNameFromVendorBagDictionary:(id)arg1 ;
-(BOOL)_isValidForSystemVersionWithBag:(id)arg1 ;
-(void)playerWindowDidHide:(id)arg1 ;
-(void)controllerStackDidChange:(id)arg1 ;
-(void)runJavaScriptEntryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installJavaScriptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_removeJavaScript;
-(void)_finishControllerSync;
-(void)_setNeedsNavControllerSync;
-(void)startControllerTransaction;
-(void)endControllerTransaction;
-(void)popToRootController;
-(void)popController;
-(long long)applianceType;
-(void)setDelegate:(id<TVLApplianceDelegate>)arg1 ;
-(id<TVLApplianceDelegate>)delegate;
-(TVLApplianceViewController *)viewController;
-(void)_commonInit;
-(NSString *)displayName;
-(void)setLaunchOptions:(NSDictionary *)arg1 ;
@end

