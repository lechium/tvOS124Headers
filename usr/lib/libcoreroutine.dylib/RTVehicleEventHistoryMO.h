/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * locDate; 
@property (nonatomic,retain) NSNumber * locLatitude; 
@property (nonatomic,retain) NSNumber * locLongitude; 
@property (nonatomic,retain) NSNumber * locUncertainty; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

