/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOServerFormatToken.h>

@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;
@class NSString, NSArray;

@interface _TempToken : NSObject <GEOServerFormatToken> {

	unsigned _value1;
	unsigned _value2;
	long long _type;
	NSString* _token;
	NSArray* _value3s;
	NSString* _stringValue;
	id<GEOServerFormatTokenPriceValue> _priceValue;
	id<GEOTransitArtworkDataSource> _artworkValue;
	NSArray* _timeStampValues;

}

@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * token;                                           //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned value1;                                            //@synthesize value1=_value1 - In the implementation block
@property (assign,nonatomic) unsigned value2;                                            //@synthesize value2=_value2 - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                                     //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) id<GEOServerFormatTokenPriceValue> priceValue;              //@synthesize priceValue=_priceValue - In the implementation block
@property (nonatomic,retain) id<GEOTransitArtworkDataSource> artworkValue;               //@synthesize artworkValue=_artworkValue - In the implementation block
@property (nonatomic,retain) NSArray * timeStampValues;                                  //@synthesize timeStampValues=_timeStampValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * value3s;                                        //@synthesize value3s=_value3s - In the implementation block
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(void)setValue1:(unsigned)arg1 ;
-(void)setValue2:(unsigned)arg1 ;
-(void)setPriceValue:(id<GEOServerFormatTokenPriceValue>)arg1 ;
-(void)setArtworkValue:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setTimeStampValues:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

