/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFProviderContext <NSObject>
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
@required
-(long long)requestedFields;
-(id<WFNetworkListRecord>)network;
-(void)cancel;

@end

