/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@class NSString, UIAlertAction;

@interface WFPasswordAlertController : UIAlertController {

	BOOL _joinable;
	BOOL _supportsWiFiPasswordSharing;
	NSString* _password;
	NSString* _sharedPassword;
	/*^block*/id _textHandler;
	/*^block*/id _visibilityHandler;
	/*^block*/id _completionHandler;
	UIAlertAction* _joinAction;

}

@property (nonatomic,copy) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * sharedPassword;                       //@synthesize sharedPassword=_sharedPassword - In the implementation block
@property (nonatomic,copy) id textHandler;                                  //@synthesize textHandler=_textHandler - In the implementation block
@property (nonatomic,copy) id visibilityHandler;                            //@synthesize visibilityHandler=_visibilityHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIAlertAction * joinAction;                    //@synthesize joinAction=_joinAction - In the implementation block
@property (assign,nonatomic) BOOL joinable;                                 //@synthesize joinable=_joinable - In the implementation block
@property (assign,nonatomic) BOOL supportsWiFiPasswordSharing;              //@synthesize supportsWiFiPasswordSharing=_supportsWiFiPasswordSharing - In the implementation block
+(id)passwordAlertControllerWithNetworkName:(id)arg1 details:(id)arg2 supportsWiFiPasswordSharing:(BOOL)arg3 textHandler:(/*^block*/id)arg4 visibilityHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)joinable;
-(void)setSharedPassword:(NSString *)arg1 ;
-(void)setJoinAction:(UIAlertAction *)arg1 ;
-(void)setTextHandler:(id)arg1 ;
-(void)setVisibilityHandler:(id)arg1 ;
-(id)textHandler;
-(id)visibilityHandler;
-(UIAlertAction *)joinAction;
-(BOOL)supportsWiFiPasswordSharing;
-(void)setJoinable:(BOOL)arg1 ;
-(NSString *)sharedPassword;
-(void)setSupportsWiFiPasswordSharing:(BOOL)arg1 ;
-(void)enterPassword:(id)arg1 joinAfterDelay:(double)arg2 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)completionHandler;
-(void)textDidChange:(id)arg1 ;
-(NSString *)password;
-(void)setCompletionHandler:(id)arg1 ;
@end

