/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLSearchResultSection : NSObject {

	unsigned long long _resultTypes;
	unsigned long long _categoryMask;
	NSArray* _searchResults;

}

@property (nonatomic,readonly) unsigned long long resultTypes;               //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long categoryMask;              //@synthesize categoryMask=_categoryMask - In the implementation block
@property (nonatomic,readonly) NSArray * searchResults;                      //@synthesize searchResults=_searchResults - In the implementation block
-(unsigned long long)categoryMask;
-(id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3 ;
-(unsigned long long)resultTypes;
-(NSArray *)searchResults;
@end

