/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>

@class NSMutableSet, NSString;

@interface MCAsset : MCObject {

	NSMutableSet* mTexts;
	NSString* mPath;

}

@property (copy) NSString * path; 
@property (nonatomic,readonly) BOOL isInUse; 
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(BOOL)isInUse;
-(void)learnText:(id)arg1 ;
-(void)forgetText:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
@end
