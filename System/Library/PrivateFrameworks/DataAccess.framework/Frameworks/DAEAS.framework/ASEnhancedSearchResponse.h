/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSMutableArray, NSArray;

@interface ASEnhancedSearchResponse : ASItem {

	int _expectedResultType;
	NSNumber* _status;
	NSMutableArray* _mResults;

}

@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
@property (nonatomic,readonly) NSArray * stores; 
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int expectedResultType;                 //@synthesize expectedResultType=_expectedResultType - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)stores;
-(int)expectedResultType;
-(void)setExpectedResultType:(int)arg1 ;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
-(void)addStoreResponse:(id)arg1 ;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end
