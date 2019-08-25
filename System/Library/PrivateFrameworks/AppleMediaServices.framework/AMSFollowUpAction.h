/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, AMSMetricsEvent, NSURL, NSObject, NSURLRequest;

@interface AMSFollowUpAction : NSObject {

	NSMutableDictionary* _userInfo;
	NSString* _identifier;
	NSString* _label;
	AMSMetricsEvent* _metricsEvent;
	NSURL* _url;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _actionQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> actionQueue;                //@synthesize actionQueue=_actionQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * logKey; 
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                          //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSString * preferredClient; 
@property (nonatomic,retain) NSURLRequest * request; 
@property (assign,nonatomic) BOOL requiresFollowUpUI; 
@property (nonatomic,retain) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo; 
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setPreferredClient:(NSString *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)_setUserInfoProperty:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(BOOL)requiresFollowUpUI;
-(NSString *)preferredClient;
-(void)setRequiresFollowUpUI:(BOOL)arg1 ;
-(id)generateAction;
-(id)performActionsWithContract:(id)arg1 account:(id)arg2 ;
-(id)postMetricsWithBagContract:(id)arg1 ;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)identifier;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURLRequest *)request;
-(id)initWithLabel:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
@end
