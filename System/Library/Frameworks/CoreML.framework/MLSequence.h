/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MLSequence : NSObject {

	long long _type;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * featureValues; 
@property (nonatomic,readonly) NSArray * values;                     //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * stringValues; 
@property (nonatomic,readonly) NSArray * int64Values; 
+(id)sequenceWithStringArray:(id)arg1 ;
+(id)sequenceWithInt64Array:(id)arg1 ;
+(id)emptySequenceWithType:(long long)arg1 ;
+(id)sequenceFromArray:(id)arg1 error:(id*)arg2 ;
-(id)initWithArray:(id)arg1 type:(long long)arg2 ;
-(NSArray *)stringValues;
-(NSArray *)int64Values;
-(NSArray *)featureValues;
-(long long)type;
-(NSArray *)values;
@end

