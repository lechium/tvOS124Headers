/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFItem;

@interface HFTransformItem : HFItem <NSCopying> {

	HFItem* _sourceItem;
	/*^block*/id _optionsTransformBlock;
	/*^block*/id _resultsTransformBlock;

}

@property (nonatomic,retain) HFItem * sourceItem;                 //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,copy) id optionsTransformBlock;              //@synthesize optionsTransformBlock=_optionsTransformBlock - In the implementation block
@property (nonatomic,copy) id resultsTransformBlock;              //@synthesize resultsTransformBlock=_resultsTransformBlock - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(/*^block*/id)arg2 resultsTransformBlock:(/*^block*/id)arg3 ;
-(HFItem *)sourceItem;
-(id)initWithSourceItem:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(id)optionsTransformBlock;
-(id)resultsTransformBlock;
-(id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2 ;
-(void)setOptionsTransformBlock:(id)arg1 ;
-(void)setResultsTransformBlock:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

