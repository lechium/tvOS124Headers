/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ML3ContainerItemDiffMetadata : NSObject {

	long long _persistentID;
	long long _containerPersistentID;
	long long _itemPersistentID;
	long long _newPosition;
	long long _previousPosition;

}

@property (assign,nonatomic) long long persistentID;                       //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long containerPersistentID;              //@synthesize containerPersistentID=_containerPersistentID - In the implementation block
@property (assign,nonatomic) long long itemPersistentID;                   //@synthesize itemPersistentID=_itemPersistentID - In the implementation block
@property (assign,nonatomic) long long newPosition;                        //@synthesize newPosition=_newPosition - In the implementation block
@property (assign,nonatomic) long long previousPosition;                   //@synthesize previousPosition=_previousPosition - In the implementation block
+(id)diffMetadataWithPersistentID:(long long)arg1 ;
+(id)diffMetadataWithPersistentID:(long long)arg1 containerPersistentID:(long long)arg2 itemPersistentID:(long long)arg3 newPosition:(long long)arg4 previousPosition:(long long)arg5 ;
-(long long)newPosition;
-(long long)previousPosition;
-(long long)itemPersistentID;
-(void)setContainerPersistentID:(long long)arg1 ;
-(void)setItemPersistentID:(long long)arg1 ;
-(void)setNewPosition:(long long)arg1 ;
-(void)setPreviousPosition:(long long)arg1 ;
-(long long)containerPersistentID;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
@end

