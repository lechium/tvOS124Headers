/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, PSIDateFilter, NSArray;

@interface PSIGroupResultGroupSnapshot : NSObject {

	NSMutableArray* _tokens;
	NSMutableArray* _matchRanges;
	short _category;
	NSString* _contentString;
	NSString* _lookupIdentifier;
	PSIDateFilter* _dateFilter;
	unsigned long long _groupId;
	unsigned long long _owningGroupId;

}

@property (nonatomic,copy,readonly) NSString * contentString;                 //@synthesize contentString=_contentString - In the implementation block
@property (nonatomic,copy,readonly) NSString * lookupIdentifier;              //@synthesize lookupIdentifier=_lookupIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tokens;                       //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain,readonly) NSArray * matchRanges;                  //@synthesize matchRanges=_matchRanges - In the implementation block
@property (nonatomic,copy,readonly) PSIDateFilter * dateFilter;               //@synthesize dateFilter=_dateFilter - In the implementation block
@property (nonatomic,readonly) short category;                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long groupId;                    //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) unsigned long long owningGroupId;              //@synthesize owningGroupId=_owningGroupId - In the implementation block
-(PSIDateFilter *)dateFilter;
-(unsigned long long)groupId;
-(unsigned long long)owningGroupId;
-(NSString *)contentString;
-(NSString *)lookupIdentifier;
-(NSArray *)matchRanges;
-(id)initWithContentString:(id)arg1 token:(id)arg2 category:(short)arg3 lookupIdentifier:(id)arg4 dateFilter:(id)arg5 groupId:(unsigned long long)arg6 owningGroupId:(unsigned long long)arg7 ;
-(void)addMatchRange:(id)arg1 ;
-(void)addToken:(id)arg1 ;
-(void)dealloc;
-(NSArray *)tokens;
-(short)category;
@end

