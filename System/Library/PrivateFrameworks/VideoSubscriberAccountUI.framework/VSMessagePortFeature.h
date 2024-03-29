/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSJSMessagePortDelegate.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol VSMessagePortFeatureDelegate;
@class NSString, IKAppContext;

@interface VSMessagePortFeature : NSObject <VSJSMessagePortDelegate, IKDOMFeature> {

	NSString* _featureName;
	IKAppContext* _appContext;
	id<VSMessagePortFeatureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSMessagePortFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                            //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)messagePort:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)setDelegate:(id<VSMessagePortFeatureDelegate>)arg1 ;
-(id<VSMessagePortFeatureDelegate>)delegate;
-(IKAppContext *)appContext;
@end

