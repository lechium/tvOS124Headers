/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSTimeZone, CLSEIVenue, NSSet;

@interface CLSEIEvent : NSManagedObject

@property (assign,nonatomic) long long uuid; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long timeZoneOffset; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (nonatomic,retain) CLSEIVenue * venue; 
@property (nonatomic,copy) NSSet * artists; 
@property (nonatomic,copy) NSSet * categories; 
-(NSTimeZone *)timeZone;
@end
