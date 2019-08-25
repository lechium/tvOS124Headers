/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol FMKeychainItem <NSObject>
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * lastModifyDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSData * rawData; 
@required
-(NSDate *)creationDate;
-(NSDate *)lastModifyDate;
-(NSString *)password;
-(NSData *)rawData;

@end
