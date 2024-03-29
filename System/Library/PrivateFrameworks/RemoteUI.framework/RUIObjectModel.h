/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <libobjc.A.dylib/RUITableViewDelegate.h>
#import <libobjc.A.dylib/RUIPasscodeViewDelegate.h>
#import <libobjc.A.dylib/RUIPageDelegate.h>
#import <libobjc.A.dylib/RUIAlertViewDelegate.h>

@protocol RUIObjectModelDelegate;
@class NSString, NSURL, NSMutableArray, NSMutableDictionary, NSDictionary, NSTimer, RUIAlertView, RUIStyle, NSArray, RUIPage;

@interface RUIObjectModel : NSObject <RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate> {

	NSString* _name;
	NSURL* _sourceURL;
	NSURL* _scriptURL;
	NSString* _inlineScript;
	NSString* _validationFunction;
	NSMutableArray* _defaultPages;
	NSMutableDictionary* _namedPages;
	NSMutableArray* _displayedPages;
	int _currentPage;
	OpaqueJSContextRef _ctx;
	NSDictionary* _clientInfo;
	NSDictionary* _serverInfo;
	NSDictionary* _updateInfo;
	int _refreshDelay;
	NSString* _refreshURL;
	NSTimer* _refreshTimer;
	long long _nextButtonStyle;
	RUIAlertView* _primaryAlert;
	NSMutableDictionary* _namedAlerts;
	NSMutableDictionary* _httpHeaders;
	NSString* _authPasswordEquivalent;
	NSString* _authPasswordFieldID;
	BOOL _parseFinished;
	/*^block*/id _webViewDoneHandler;
	id<RUIObjectModelDelegate> _delegate;
	NSString* _identifier;
	RUIStyle* _style;
	NSString* _identifierMarkingStackRemovalAfterPush;
	NSDictionary* _alert;

}

@property (assign,nonatomic,__weak) id<RUIObjectModelDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPages; 
@property (nonatomic,readonly) NSArray * defaultPages;                                     //@synthesize defaultPages=_defaultPages - In the implementation block
@property (nonatomic,readonly) NSDictionary * namedPages;                                  //@synthesize namedPages=_namedPages - In the implementation block
@property (nonatomic,readonly) NSArray * allPages; 
@property (nonatomic,readonly) RUIPage * visiblePage; 
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                                              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSURL * scriptURL;                                              //@synthesize scriptURL=_scriptURL - In the implementation block
@property (nonatomic,copy) NSString * inlineScript;                                        //@synthesize inlineScript=_inlineScript - In the implementation block
@property (nonatomic,copy) NSString * validationFunction;                                  //@synthesize validationFunction=_validationFunction - In the implementation block
@property (nonatomic,copy) NSDictionary * clientInfo;                                      //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * serverInfo;                                      //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * updateInfo;                                      //@synthesize updateInfo=_updateInfo - In the implementation block
@property (assign,nonatomic) int refreshDelay;                                             //@synthesize refreshDelay=_refreshDelay - In the implementation block
@property (nonatomic,copy) NSString * refreshURL;                                          //@synthesize refreshURL=_refreshURL - In the implementation block
@property (assign,nonatomic) long long nextButtonStyle;                                    //@synthesize nextButtonStyle=_nextButtonStyle - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) RUIAlertView * primaryAlert; 
@property (nonatomic,copy) NSString * identifierMarkingStackRemovalAfterPush;              //@synthesize identifierMarkingStackRemovalAfterPush=_identifierMarkingStackRemovalAfterPush - In the implementation block
@property (nonatomic,readonly) NSArray * pages; 
@property (nonatomic,retain) NSDictionary * alert;                                         //@synthesize alert=_alert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_enableTestMode;
+(id)objectModelForXMLNamed:(id)arg1 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSDictionary *)clientInfo;
-(NSArray *)defaultPages;
-(NSDictionary *)namedPages;
-(void)setClientInfo:(NSDictionary *)arg1 ;
-(void)setRefreshURL:(NSString *)arg1 ;
-(NSString *)refreshURL;
-(void)setNextButtonStyle:(long long)arg1 ;
-(void)RUIPage:(id)arg1 toggledEditing:(BOOL)arg2 ;
-(void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2 ;
-(void)tableViewOMDidChange:(id)arg1 ;
-(id)subElementWithID:(id)arg1 ;
-(void)cleanupRefreshTimer;
-(unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1 ;
-(id)elementsWithName:(id)arg1 ;
-(NSString *)validationFunction;
-(void)setValidationFunction:(NSString *)arg1 ;
-(id)rowForFormField:(id)arg1 ;
-(NSDictionary *)updateInfo;
-(void)setUpdateInfo:(NSDictionary *)arg1 ;
-(void)openLink:(id)arg1 HTTPMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RUIAlertView *)primaryAlert;
-(void)setJSGlobalContext:(OpaqueJSContextRef)arg1 ;
-(void)_navigateToNextPageAnimated;
-(void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_populatePageNavItem:(id)arg1 withNextButton:(BOOL)arg2 ;
-(void)refreshTimeout;
-(id)_firstPageForPresentation;
-(void)presentPage:(id)arg1 inViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(BOOL)arg1 ;
-(void)_navigateBackWithPop:(BOOL)arg1 fromViewController:(id)arg2 ;
-(id)_parentNavigationController;
-(void)_unsafe_setPages:(id)arg1 ;
-(void)navigateToNextPageAnimated:(BOOL)arg1 ;
-(void)_displayNamedPage:(id)arg1 animated:(BOOL)arg2 ;
-(id)absoluteURLWithString:(id)arg1 ;
-(void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1 ;
-(void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1 ;
-(id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)hasConfirmationAttributes:(id)arg1 ;
-(BOOL)hasSecondConfirmationAttributes:(id)arg1 ;
-(void)_presentSecondConfirmationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentConfirmationWithAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2 ;
-(id)textInRowWithIdentifier:(id)arg1 ;
-(void)handleElementChange:(id)arg1 action:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleElementChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentConfirmationIfNeededForElement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldDisplayNamedElement:(id)arg1 page:(id)arg2 ;
-(void)activateElement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_pageContainingTableView:(id)arg1 ;
-(BOOL)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2 ;
-(void)tableViewOMSubmitForm:(id)arg1 ;
-(void)tableViewOM:(id)arg1 elementDidChange:(id)arg2 action:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)passcodeViewOM:(id)arg1 activatedElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)alertView:(id)arg1 pressedButton:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)parseDidFinish;
-(void)_displaySupplementalPage:(id)arg1 ;
-(void)didNavigateBackFromViewController:(id)arg1 ;
-(void)_populateRequest:(id)arg1 ;
-(void)refreshWithObjectModel:(id)arg1 ;
-(void)setPages:(NSArray *)arg1 ;
-(void)addAlertElement:(id)arg1 ;
-(void)configureTableView:(id)arg1 ;
-(void)configureRow:(id)arg1 ;
-(void)configureSection:(id)arg1 ;
-(Class)customHeaderClassForSection:(id)arg1 ;
-(Class)customFooterClassForSection:(id)arg1 ;
-(Class)customTableCellClassForTableViewRow:(id)arg1 ;
-(id)tableHeaderViewForAttributes:(id)arg1 ;
-(id)tableFooterViewForAttributes:(id)arg1 ;
-(id)relativeURLWithString:(id)arg1 ;
-(void)startNavigationBarSpinnerWithTitle:(id)arg1 ;
-(void)stopNavigationBarSpinner;
-(NSURL *)scriptURL;
-(void)setScriptURL:(NSURL *)arg1 ;
-(NSString *)inlineScript;
-(void)setInlineScript:(NSString *)arg1 ;
-(int)refreshDelay;
-(void)setRefreshDelay:(int)arg1 ;
-(long long)nextButtonStyle;
-(NSString *)identifierMarkingStackRemovalAfterPush;
-(void)setIdentifierMarkingStackRemovalAfterPush:(NSString *)arg1 ;
-(void)runScript;
-(BOOL)prepareScriptContext;
-(void)_logException:(OpaqueJSValueRef)arg1 ;
-(id)objectForJSValue:(OpaqueJSValueRef)arg1 ;
-(NSArray *)pages;
-(void)back:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(id)newNavigationControllerForPresentation;
-(NSDictionary *)serverInfo;
-(id)postbackData;
-(RUIPage *)visiblePage;
-(NSArray *)allPages;
-(void)setServerInfo:(NSDictionary *)arg1 ;
-(void)pageDidDisappear:(id)arg1 ;
-(NSDictionary *)alert;
-(void)setAlert:(NSDictionary *)arg1 ;
-(BOOL)validateWithFunction:(id)arg1 ;
-(void)presentInParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)displayedPages;
-(void)presentWithBlock:(/*^block*/id)arg1 ;
-(id)postbackDictionary;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setDelegate:(id<RUIObjectModelDelegate>)arg1 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)style;
-(id<RUIObjectModelDelegate>)delegate;
-(id)alertController;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_parentViewController;
-(BOOL)goBack:(BOOL)arg1 ;
-(BOOL)goBack;
@end

