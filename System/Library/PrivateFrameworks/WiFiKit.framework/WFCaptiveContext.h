/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWebSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/WFProviderContext.h>

@protocol WFNetworkListRecord;
@class WFWebSheetViewController, NSTimer, NSString;

@interface WFCaptiveContext : NSObject <WFWebSheetViewControllerDelegate, WFProviderContext> {

	BOOL _readyForPresentation;
	id<WFNetworkListRecord> network;
	long long requestedFields;
	/*^block*/id _readyForPresentationHandler;
	/*^block*/id _completionHandler;
	WFWebSheetViewController* _webSheetViewController;
	NSTimer* _timer;

}

@property (nonatomic,retain) WFWebSheetViewController * webSheetViewController;              //@synthesize webSheetViewController=_webSheetViewController - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL readyForPresentation;                                      //@synthesize readyForPresentation=_readyForPresentation - In the implementation block
@property (nonatomic,copy) id readyForPresentationHandler;                                   //@synthesize readyForPresentationHandler=_readyForPresentationHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
-(long long)requestedFields;
-(id<WFNetworkListRecord>)network;
-(void)_presentationTimerFired:(id)arg1 ;
-(BOOL)readyForPresentation;
-(WFWebSheetViewController *)webSheetViewController;
-(void)_readyForPresentation:(id)arg1 ;
-(id)readyForPresentationHandler;
-(void)webSheetViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)webSheetViewControllerContentReadyForPresentation:(id)arg1 ;
-(void)setReadyForPresentationHandler:(id)arg1 ;
-(void)setWebSheetViewController:(WFWebSheetViewController *)arg1 ;
-(void)setReadyForPresentation:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(id)completionHandler;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setCompletionHandler:(id)arg1 ;
@end

