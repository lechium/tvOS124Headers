/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSRelationshipDescription, NSManagedObjectID, NSSQLModel;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {

	NSRelationshipDescription* _relationship;
	NSManagedObjectID* _objectID;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel; 
-(void)executeRequestCore:(id*)arg1 ;
-(NSRelationshipDescription *)relationship;
-(id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 ;
-(NSSQLModel *)sqlModel;
-(NSManagedObjectID *)objectID;
-(void)dealloc;
@end

