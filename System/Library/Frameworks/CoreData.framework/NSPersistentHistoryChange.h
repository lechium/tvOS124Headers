/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID; 
@property (copy,readonly) NSManagedObjectID * changedObjectID; 
@property (readonly) long long changeType; 
@property (copy,readonly) NSDictionary * tombstone; 
@property (readonly) NSPersistentHistoryTransaction * transaction; 
@property (copy,readonly) NSSet * updatedProperties; 
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSPersistentHistoryTransaction *)transaction;
-(long long)changeType;
-(NSManagedObjectID *)changedObjectID;
-(NSSet *)updatedProperties;
-(NSDictionary *)tombstone;
-(long long)changeID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

