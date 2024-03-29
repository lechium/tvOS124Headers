/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface RMUniquedManagedObjectDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSMutableSet* _updatedProperties;

}

@property (nonatomic,retain) NSMutableSet * updatedProperties;                //@synthesize updatedProperties=_updatedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(void)deleted;
-(long long)changeType;
-(NSMutableSet *)updatedProperties;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)inserted;
-(void)updatedWithProperties:(id)arg1 ;
-(void)removePropertyWithName:(id)arg1 ;
-(void)setUpdatedProperties:(NSMutableSet *)arg1 ;
-(NSString *)uniqueIdentifier;
@end

