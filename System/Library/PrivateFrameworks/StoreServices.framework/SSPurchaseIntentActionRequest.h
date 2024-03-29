/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding> {

	NSString* _appBundleId;
	unsigned long long _action;

}

@property (nonatomic,copy) NSString * appBundleId;                   //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
@end

