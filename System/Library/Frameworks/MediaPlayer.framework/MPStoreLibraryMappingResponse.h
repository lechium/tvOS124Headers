/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject {

	NSMutableDictionary* _storeIdentifierSetToLibraryIdentifierSet;
	long long _libraryAddedStatus;

}

@property (assign,nonatomic) long long libraryAddedStatus;              //@synthesize libraryAddedStatus=_libraryAddedStatus - In the implementation block
-(id)libraryIdentifierSetForIdentifierSet:(id)arg1 ;
-(void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2 ;
-(long long)libraryAddedStatus;
-(void)setLibraryAddedStatus:(long long)arg1 ;
@end

