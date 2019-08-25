/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber, UIImage;

@interface CRCameraReaderOutputInternal : NSObject {

	NSString* _type;
	NSArray* _vertices;
	NSString* _stringValue;
	NSNumber* _yearValue;
	NSNumber* _monthValue;
	NSNumber* _dayValue;
	UIImage* _imageValue;
	NSString* _formattedStringValue;

}

@property (retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (retain) NSArray * vertices;                           //@synthesize vertices=_vertices - In the implementation block
@property (retain) NSString * stringValue;                       //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) NSString * formattedStringValue;              //@synthesize formattedStringValue=_formattedStringValue - In the implementation block
@property (retain) NSNumber * yearValue;                         //@synthesize yearValue=_yearValue - In the implementation block
@property (retain) NSNumber * monthValue;                        //@synthesize monthValue=_monthValue - In the implementation block
@property (retain) NSNumber * dayValue;                          //@synthesize dayValue=_dayValue - In the implementation block
@property (retain) UIImage * imageValue;                         //@synthesize imageValue=_imageValue - In the implementation block
-(UIImage *)imageValue;
-(void)setVertices:(NSArray *)arg1 ;
-(NSArray *)vertices;
-(void)setFormattedStringValue:(NSString *)arg1 ;
-(NSNumber *)yearValue;
-(void)setYearValue:(NSNumber *)arg1 ;
-(NSNumber *)monthValue;
-(void)setMonthValue:(NSNumber *)arg1 ;
-(NSNumber *)dayValue;
-(void)setDayValue:(NSNumber *)arg1 ;
-(void)setImageValue:(UIImage *)arg1 ;
-(NSString *)formattedStringValue;
-(NSString *)stringValue;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
@end

