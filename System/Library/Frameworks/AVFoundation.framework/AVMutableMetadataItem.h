/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV5 time; 
@property (assign,nonatomic) SCD_Struct_AV5 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)keyPathsForValuesAffectingIdentifier;
+(id)metadataItem;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(SCD_Struct_AV5)time;
-(void)setTime:(SCD_Struct_AV5)arg1 ;
-(id)startDate;
-(void)setStartDate:(id)arg1 ;
-(void)setKeySpace:(id)arg1 ;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(NSString *)extendedLanguageTag;
-(NSString *)dataType;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDuration:(SCD_Struct_AV5)arg1 ;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(SCD_Struct_AV5)duration;
-(id)key;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)languageCode;
-(void)setKey:(id)arg1 ;
-(NSLocale *)locale;
@end

