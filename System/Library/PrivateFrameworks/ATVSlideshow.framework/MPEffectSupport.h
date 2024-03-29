/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPEffectSupport
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming; 
@required
-(long long)randomSeed;
-(void)setRandomSeed:(long long)arg1;
-(NSString *)effectID;
-(void)removeAllSlides;
-(NSArray *)slides;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(void)addSlides:(id)arg1;
-(void)removeSlidesAtIndices:(id)arg1;
-(NSArray *)texts;
-(NSString *)presetID;
-(void)setPresetID:(id)arg1;
-(void)removeAllTexts;
-(void)addText:(id)arg1;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
-(id)effectAttributes;
-(void)setEffectAttributes:(id)arg1;
-(id)effectAttributeForKey:(id)arg1;
-(id)secondarySlides;
-(void)setEffectID:(id)arg1;
-(void)removeAllSecondarySlides;
-(void)addSlide:(id)arg1;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2;
-(void)removeSecondarySlidesAtIndices:(id)arg1;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2;
-(void)removeTextsAtIndices:(id)arg1;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2;
-(void)addSecondarySlide:(id)arg1;
-(void)addSecondarySlides:(id)arg1;
-(void)addTexts:(id)arg1;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2;
-(NSObject*<MZEffectTiming>)effectTiming;

@end

