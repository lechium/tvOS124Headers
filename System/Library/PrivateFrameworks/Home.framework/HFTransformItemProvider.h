/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HFItemProvider, NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider {

	HFItemProvider* _sourceProvider;
	/*^block*/id _transformationBlock;
	NSMutableDictionary* _transformedItems;

}

@property (nonatomic,retain) HFItemProvider * sourceProvider;                     //@synthesize sourceProvider=_sourceProvider - In the implementation block
@property (nonatomic,copy) id transformationBlock;                                //@synthesize transformationBlock=_transformationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transformedItems;              //@synthesize transformedItems=_transformedItems - In the implementation block
-(id)invalidationReasons;
-(id)reloadItems;
-(id)initWithSourceProvider:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
-(HFItemProvider *)sourceProvider;
-(id)transformationBlock;
-(NSMutableDictionary *)transformedItems;
-(void)setSourceProvider:(HFItemProvider *)arg1 ;
-(void)setTransformationBlock:(id)arg1 ;
-(void)setTransformedItems:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
@end

