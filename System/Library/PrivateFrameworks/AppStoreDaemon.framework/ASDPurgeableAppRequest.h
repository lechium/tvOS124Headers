/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDPurgeableAppRequestOptions * options; 
+(long long)requestType;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
@end

