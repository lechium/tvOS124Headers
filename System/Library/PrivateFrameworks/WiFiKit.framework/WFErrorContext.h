/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFErrorProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView, WFNetworkListRecord;
@class NSError, UIViewController, NSString;

@interface WFErrorContext : NSObject <WFErrorProviderContext, WFContextPresenting> {

	BOOL _needsDismissal;
	UIViewController*<WFNetworkView> _provider;
	/*^block*/id _completionHandler;
	NSError* _error;
	id<WFNetworkListRecord> _network;

}

@property (nonatomic,retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<WFNetworkListRecord> network;                               //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long requestedFields; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal;                                         //@synthesize needsDismissal=_needsDismissal - In the implementation block
-(UIViewController*<WFNetworkView>)provider;
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(long long)requestedFields;
-(id<WFNetworkListRecord>)network;
-(void)setNetwork:(id<WFNetworkListRecord>)arg1 ;
-(id)initWithAssociationError:(id)arg1 network:(id)arg2 ;
-(BOOL)needsDismissal;
-(id)_userInfoForAssociationError:(id)arg1 networkName:(id)arg2 ;
-(NSString *)description;
-(void)cancel;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

