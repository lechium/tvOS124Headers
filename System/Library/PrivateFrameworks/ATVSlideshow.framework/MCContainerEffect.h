/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCContainer.h>
#import <libobjc.A.dylib/MCActionSupport.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSSet, NSArray;

@interface MCContainerEffect : MCContainer <MCActionSupport> {

	NSMutableArray* mSlides;
	NSMutableArray* mTexts;
	NSMutableDictionary* mActions;
	NSMutableDictionary* mEffectAttributes;
	BOOL mIsLive;
	NSString* mEffectID;

}

@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (readonly) NSSet * slides; 
@property (readonly) NSArray * orderedSlides; 
@property (nonatomic,readonly) unsigned long long countOfSlides; 
@property (nonatomic,readonly) unsigned long long nextAvailableSlideIndex; 
@property (readonly) NSSet * texts; 
@property (readonly) NSArray * orderedTexts; 
@property (nonatomic,readonly) unsigned long long countOfTexts; 
@property (nonatomic,readonly) unsigned long long nextAvailableTextIndex; 
@property (copy) NSString * effectID; 
@property (copy) NSDictionary * effectAttributes; 
@property (assign,nonatomic) BOOL isLive; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeActionForKey:(id)arg1 ;
-(NSString *)effectID;
-(void)removeAllSlides;
-(NSSet *)slides;
-(id)addSlides:(long long)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(unsigned long long)countOfTexts;
-(NSSet *)texts;
-(void)removeAllTexts;
-(unsigned long long)countOfSlides;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)effectAttributes;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(id)effectAttributeForKey:(id)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(void)demolish;
-(unsigned long long)nextAvailableSlideIndex;
-(id)insertSlideForAsset:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertSlideAtIndex:(long long)arg1 ;
-(id)insertSlidesForAssets:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveSlidesAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)insertTextsForAttributedStrings:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)moveTextsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)addSlidesForAssets:(id)arg1 ;
-(id)addSlide;
-(id)addTextsForAttributedStrings:(id)arg1 ;
-(id)imprint;
-(unsigned long long)countOfActions;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(void)demolishActions;
-(id)imprintsForActions;
-(id)insertSlideForContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)nextAvailableTextIndex;
-(id)insertTextsForAssets:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(NSArray *)orderedSlides;
-(id)slideAtIndex:(unsigned long long)arg1 ;
-(id)addSlideForAsset:(id)arg1 ;
-(id)addSlideForContainer:(id)arg1 ;
-(NSArray *)orderedTexts;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)addTextForAttributedString:(id)arg1 ;
-(id)addTextForAsset:(id)arg1 andKey:(id)arg2 ;
-(id)addTextsForAssets:(id)arg1 andKey:(id)arg2 ;
-(id)insertTextForAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)insertTextForAsset:(id)arg1 andKey:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addEffectAttributes:(id)arg1 ;
-(NSDictionary *)actions;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(BOOL)isLive;
-(void)setIsLive:(BOOL)arg1 ;
@end

