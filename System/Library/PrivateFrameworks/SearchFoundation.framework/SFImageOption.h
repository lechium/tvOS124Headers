/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImageOption.h>
@class NSString, NSDictionary, NSData;


@protocol SFImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,copy) NSDictionary * options; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDefaultValue:(id)arg1;
-(NSString *)name;
-(void)setName:(id)arg1;
-(NSDictionary *)options;
-(void)setOptions:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)defaultValue;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFImageOption : NSObject <SFImageOption, NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _defaultValue;
	NSDictionary* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)defaultValue;
-(NSData *)jsonData;
@end

