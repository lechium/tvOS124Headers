/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TVSCSemanticObject : NSObject {

	NSString* _type;
	NSMutableDictionary* _metadata;

}

@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(id)linkedDataDictionary;
-(void)setMetadata:(id)arg1 forProperty:(id)arg2 ;
-(id)metadataForProperty:(id)arg1 ;
-(void)removeMetadataForProperty:(id)arg1 ;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 ;
@end

