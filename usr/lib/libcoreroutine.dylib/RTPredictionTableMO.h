/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSSet;

@interface RTPredictionTableMO : NSManagedObject

@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * predictions; 
+(id)managedObjectWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)awakeFromInsert;
@end

