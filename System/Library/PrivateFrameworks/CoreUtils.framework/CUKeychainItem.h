/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary, NSArray, NSData;

@interface CUKeychainItem : NSObject {

	BOOL _invisible;
	BOOL _legacy;
	int _accessibleType;
	int _syncType;
	NSString* _accessGroup;
	NSDate* _dateCreated;
	NSDate* _dateModified;
	NSString* _identifier;
	NSDictionary* _metadata;
	NSArray* _removedMetadata;
	NSString* _name;
	NSData* _persistentRef;
	NSDictionary* _secrets;
	NSString* _type;
	NSString* _userDescription;
	NSString* _viewHint;

}

@property (nonatomic,copy) NSString * accessGroup;                      //@synthesize accessGroup=_accessGroup - In the implementation block
@property (assign,nonatomic) int accessibleType;                        //@synthesize accessibleType=_accessibleType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;               //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateModified;              //@synthesize dateModified=_dateModified - In the implementation block
@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL invisible;                            //@synthesize invisible=_invisible - In the implementation block
@property (assign,nonatomic) BOOL legacy;                               //@synthesize legacy=_legacy - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSArray * removedMetadata;                   //@synthesize removedMetadata=_removedMetadata - In the implementation block
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSData * persistentRef;                      //@synthesize persistentRef=_persistentRef - In the implementation block
@property (nonatomic,copy) NSDictionary * secrets;                      //@synthesize secrets=_secrets - In the implementation block
@property (assign,nonatomic) int syncType;                              //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * userDescription;                  //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,copy) NSString * viewHint;                         //@synthesize viewHint=_viewHint - In the implementation block
-(unsigned)updateWithRPIdentity:(id)arg1 error:(id*)arg2 ;
-(void)setSyncType:(int)arg1 ;
-(int)syncType;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(BOOL)isEqualToKeychainItem:(id)arg1 flags:(unsigned)arg2 ;
-(id)_attributesDictionaryWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(void)_mergeItem:(id)arg1 ;
-(BOOL)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(int)accessibleType;
-(BOOL)invisible;
-(NSArray *)removedMetadata;
-(void)setRemovedMetadata:(NSArray *)arg1 ;
-(NSData *)persistentRef;
-(void)setPersistentRef:(NSData *)arg1 ;
-(NSDate *)dateModified;
-(NSDate *)dateCreated;
-(void)setInvisible:(BOOL)arg1 ;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setAccessibleType:(int)arg1 ;
-(NSDictionary *)secrets;
-(void)setSecrets:(NSDictionary *)arg1 ;
-(NSString *)accessGroup;
-(NSString *)viewHint;
-(void)setViewHint:(NSString *)arg1 ;
-(NSString *)userDescription;
-(void)setUserDescription:(NSString *)arg1 ;
-(BOOL)legacy;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
@end

