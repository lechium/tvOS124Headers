/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRSCardServing <CRSServing>
@required
-(BOOL)canSatisfyCardRequest:(id)arg1;
-(unsigned long long)servicePriorityForRequest:(id)arg1;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2;

@end
