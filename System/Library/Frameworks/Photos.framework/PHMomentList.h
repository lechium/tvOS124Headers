/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollectionList.h>

@class NSData, NSDate;

@interface PHMomentList : PHCollectionList {

	NSData* _reverseLocationData;
	BOOL _reverseLocationDataIsValid;
	BOOL _reverseLocationDataContainsLocation;
	short _granularityLevel;
	short _generationType;
	int _sortIndex;
	NSDate* _representativeDate;

}

@property (nonatomic,readonly) int sortIndex;                            //@synthesize sortIndex=_sortIndex - In the implementation block
@property (nonatomic,readonly) short generationType;                     //@synthesize generationType=_generationType - In the implementation block
@property (nonatomic,readonly) short granularityLevel;                   //@synthesize granularityLevel=_granularityLevel - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
+(id)managedEntityName;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)fetchType;
-(BOOL)hasLocalizedTitle;
-(short)generationType;
-(short)granularityLevel;
-(int)sortIndex;
-(BOOL)isMeaningful;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(void)_decodeTitlesIfNeeded;
-(BOOL)hasLocationInfo;
-(NSDate *)representativeDate;
-(id)localizedLocationNames;
-(long long)collectionListType;
-(BOOL)collectionHasFixedOrder;
-(id)description;
-(id)localizedTitle;
@end

