/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface RERelevanceValue : NSObject <NSCopying> {

	unsigned long long _hash;
	BOOL _isHistoric;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) BOOL isHistoric;               //@synthesize isHistoric=_isHistoric - In the implementation block
-(id)initWithValues:(id)arg1 ;
-(BOOL)isHistoric;
-(id)initWithValues:(id)arg1 isHistoric:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)values;
@end

