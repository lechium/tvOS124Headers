/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSString, NSManagedObjectID, NSError;

@interface PHChangeRequestHelper : NSObject {

	BOOL _isMutated;
	BOOL _isNew;
	NSMutableDictionary* _mutations;
	NSMutableSet* _nilMutations;
	id _changeRequest;
	NSString* _uuid;
	NSString* _uuidSaveToken;
	NSManagedObjectID* _objectID;
	NSError* _placeholderRequestError;

}

@property (nonatomic,readonly) NSError * placeholderRequestError;              //@synthesize placeholderRequestError=_placeholderRequestError - In the implementation block
@property (assign,nonatomic,__weak) id changeRequest;                          //@synthesize changeRequest=_changeRequest - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * uuidSaveToken;                       //@synthesize uuidSaveToken=_uuidSaveToken - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                     //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutations;                //@synthesize mutations=_mutations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * nilMutations;                    //@synthesize nilMutations=_nilMutations - In the implementation block
@property (assign,getter=isNew,nonatomic) BOOL new; 
@property (assign,getter=isMutated,nonatomic) BOOL mutated; 
+(id)changeRequestForObject:(id)arg1 ;
+(id)changeRequestWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 clientSender:(id)arg6 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(id)initForNewObjectWithChangeRequest:(id)arg1 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3 ;
-(id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 clientEntitlements:(id)arg3 ;
-(id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2 ;
-(NSMutableDictionary *)mutations;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2 ;
-(BOOL)_validateOrGenerateUUIDWithClientEntitled:(BOOL)arg1 changeRequest:(id)arg2 ;
-(NSError *)placeholderRequestError;
-(BOOL)_generateUUIDIfNecessary:(id*)arg1 ;
-(NSString *)uuidSaveToken;
-(id)changeRequest;
-(NSMutableSet *)nilMutations;
-(void)setMutated:(BOOL)arg1 ;
-(void)setNew:(BOOL)arg1 ;
-(void)setChangeRequest:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(BOOL)isNew;
-(id)init;
-(id)description;
-(NSString *)uuid;
@end

