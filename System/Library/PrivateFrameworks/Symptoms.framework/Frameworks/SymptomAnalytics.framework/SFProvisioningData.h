/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSDate;

@interface SFProvisioningData : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * map; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
+(id)fetchRequest;
+(id)entityName;
@end
