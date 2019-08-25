/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[18];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned long long flexAttributesCount;
	renditionkeytoken testKey[18];
	unsigned long long chooseCount;
	unsigned long long subchooseCount;

}
-(unsigned long long)_attributeToBumpIndex;
-(BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(renditionkeytoken*)nextKey;
-(void)dealloc;
@end
