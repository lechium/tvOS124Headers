/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingWithSubItems.h>
#import <libobjc.A.dylib/ASParsingFrontingBasicType.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>

@class NSMutableDictionary, NSDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {

	NSMutableDictionary* _items;
	NSDictionary* _subclassRuleSet;
	NSMutableDictionary* _placeHolder;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
-(id)description;
-(void)_setItems:(id)arg1 ;
@end
