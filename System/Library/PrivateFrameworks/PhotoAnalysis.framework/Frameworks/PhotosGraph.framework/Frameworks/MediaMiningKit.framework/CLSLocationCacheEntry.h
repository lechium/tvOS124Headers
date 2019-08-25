/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSLocationCacheEntry : NSManagedObject

@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double updateTimestamp; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * addressDictionaryString; 
@property (nonatomic,copy) NSString * postalAddress; 
@property (nonatomic,retain) NSSet * placemarks; 
+(id)entityName;
@end

