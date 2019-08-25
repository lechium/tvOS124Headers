/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray, NSDictionary;

@interface GEOAvailableExperimentBranch : NSObject {

	NSString* _label;
	NSString* _name;
	NSString* _experimentIdentifier;
	NSMutableArray* _assignments;
	NSArray* _clientConfig;

}

@property (setter=_setClientConfig:,getter=_clientConfig,nonatomic,retain) NSArray * clientConfig;                    //@synthesize clientConfig=_clientConfig - In the implementation block
@property (getter=_dictionaryRepresentation,nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * label;                                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * clientConfigValues; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSDictionary *)clientConfigValues;
-(id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3 ;
-(void)_addAssignment:(id)arg1 ;
-(id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_dictionaryRepresentation;
-(id)_clientConfig;
-(void)_setClientConfig:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isActive;
-(NSString *)label;
@end

