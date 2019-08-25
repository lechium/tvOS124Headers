/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IKCSSMediaQueryExpression : NSObject {

	long long _type;
	NSString* _key;
	NSString* _stringValue;
	NSString* _dimension;
	NSString* _mediaType;
	double _doubleValue;

}

@property (assign) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSString * dimension;                //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,retain) NSString * mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) double doubleValue;                            //@synthesize doubleValue=_doubleValue - In the implementation block
-(void)setDoubleValue:(double)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(id)valueAsString;
-(id)expressionAsString;
-(NSString *)mediaType;
-(BOOL)evaluate;
-(id)description;
-(NSString *)stringValue;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)doubleValue;
-(NSString *)key;
-(NSString *)dimension;
-(void)setDimension:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
@end

