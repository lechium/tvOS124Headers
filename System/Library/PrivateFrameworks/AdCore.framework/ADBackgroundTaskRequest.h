/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface ADBackgroundTaskRequest : NSObject {

	NSObject*<OS_xpc_object> _criteria;
	NSString* _requestIdentifier;

}

@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) BOOL requiresNetworkConnectivity; 
@property (assign,nonatomic) BOOL allowBattery; 
@property (assign,nonatomic) BOOL requireSleep; 
@property (assign,nonatomic) BOOL isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
-(NSString *)requestIdentifier;
-(id)initWithID:(id)arg1 ;
-(BOOL)isRepeating;
-(id)initWithCriteria:(id)arg1 andID:(id)arg2 ;
-(id)copyBackgroundTaskAgentCriteria;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(long long)backgroundTaskRetryCount;
-(BOOL)requiresNetworkConnectivity;
-(BOOL)requireSleep;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)setAllowBattery:(BOOL)arg1 ;
-(void)setRequireSleep:(BOOL)arg1 ;
-(void)setIsRepeating:(BOOL)arg1 ;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsString:(id)arg1 ;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsDate:(id)arg1 ;
-(void)setGracePeriod:(long long)arg1 ;
-(long long)gracePeriod;
-(BOOL)allowBattery;
-(id)description;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)priority;
-(long long)delay;
-(void)setDelay:(long long)arg1 ;
-(id)dictionaryRepresentation;
@end

