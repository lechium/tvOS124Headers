/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PBSVPNSettings : NSObject

@property (nonatomic,copy,readonly) NSString * IPSecInterfaceUUID; 
@property (nonatomic,readonly) BOOL isProfileLoaded; 
@property (nonatomic,copy,readonly) NSDate * profileExpiryDate; 
@property (nonatomic,readonly) BOOL isConnected; 
+(id)sharedInstance;
-(BOOL)isConnected;
-(NSString *)IPSecInterfaceUUID;
-(BOOL)isProfileLoaded;
-(NSDate *)profileExpiryDate;
@end

