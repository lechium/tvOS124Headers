/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHDeleteChangeRequest.h>

@class NSString, NSManagedObjectID;

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest> {

	NSString* _uuid;
	NSManagedObjectID* _objectID;
	BOOL _clientEntitled;
	NSString* _clientName;
	int _clientProcessID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;              //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                    //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                      //@synthesize clientProcessID=_clientProcessID - In the implementation block
+(id)deleteRequestForObject:(id)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(id)initForNewObject;
-(NSManagedObjectID *)objectID;
-(NSString *)clientName;
-(id)init;
-(NSString *)uuid;
@end

