/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSURL, NSDate;


@protocol AFClockItem <NSObject>
@property (nonatomic,readonly) NSUUID * itemID; 
@property (nonatomic,readonly) NSURL * itemURL; 
@property (nonatomic,readonly) BOOL isFiring; 
@property (nonatomic,copy,readonly) NSDate * firedDate; 
@property (nonatomic,copy,readonly) NSDate * dismissedDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@required
-(BOOL)isFiring;
-(NSDate *)firedDate;
-(NSDate *)dismissedDate;
-(NSURL *)itemURL;
-(NSDate *)lastModifiedDate;
-(NSUUID *)itemID;

@end
