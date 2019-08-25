/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AAMobileMeOfferResponse : AAResponse

@property (nonatomic,readonly) NSNumber * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSString * classicTitle; 
@property (nonatomic,readonly) NSString * classicMessage; 
-(NSString *)classicTitle;
-(NSString *)classicMessage;
-(NSNumber *)identifier;
-(NSString *)title;
-(NSString *)message;
@end
