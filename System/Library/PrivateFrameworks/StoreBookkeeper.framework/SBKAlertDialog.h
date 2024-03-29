/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBKAlertDialog : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	/*^block*/id _completionHandler;
	NSString* _acceptButtonTitle;

}

@property (copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (copy) NSString * acceptButtonTitle;              //@synthesize acceptButtonTitle=_acceptButtonTitle - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setAcceptButtonTitle:(NSString *)arg1 ;
-(BOOL)_runAsUIAlertView;
-(void)_runAsCFUserNotificationDisplayAlert;
-(NSString *)acceptButtonTitle;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

