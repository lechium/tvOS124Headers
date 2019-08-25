/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface TXRAssetCatalogSet : NSObject {

	unsigned long long _interpretation;
	unsigned long long _origin;
	NSString* _name;
	BOOL _cubemap;
	NSMutableArray* _configs;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long interpretation;              //@synthesize interpretation=_interpretation - In the implementation block
@property (assign,nonatomic) unsigned long long origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL cubemap;                                 //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSArray * configs;                                      //@synthesize configs=_configs - In the implementation block
-(id)exportAtLocation:(id)arg1 error:(id*)arg2 ;
-(NSArray *)configs;
-(BOOL)addConfig:(id)arg1 error:(id*)arg2 ;
-(void)setInterpretation:(unsigned long long)arg1 ;
-(BOOL)cubemap;
-(unsigned long long)interpretation;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)origin;
-(void)setOrigin:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 ;
@end
