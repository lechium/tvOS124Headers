/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet;

@interface _DKSourceMO : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,copy) NSString * itemID; 
@property (nonatomic,copy) NSString * sourceID; 
@property (nonatomic,copy) NSNumber * userID; 
@property (nonatomic,retain) NSSet * product; 
+(id)fetchRequest;
@end

