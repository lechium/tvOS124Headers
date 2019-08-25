/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFDetailsProviderContext <WFProviderContext>
@property (nonatomic,readonly) NSArray * recommendations; 
@property (assign,nonatomic) BOOL autoJoinEnabled; 
@property (assign,nonatomic) BOOL autoLoginEnabled; 
@property (getter=isCurrent,nonatomic,readonly) BOOL current; 
@property (getter=isKnownNetwork,nonatomic,readonly) BOOL knownNetwork; 
@required
-(void)forget;
-(BOOL)isCurrent;
-(void)join;
-(void)setAutoJoinEnabled:(BOOL)arg1;
-(void)setAutoLoginEnabled:(BOOL)arg1;
-(void)renewLease;
-(NSArray *)recommendations;
-(BOOL)isKnownNetwork;
-(void)manage;
-(void)openRecommendationLink;
-(BOOL)autoJoinEnabled;
-(BOOL)autoLoginEnabled;

@end
