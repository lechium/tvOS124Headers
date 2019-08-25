/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString, NSArray;

@interface MRScrapbookLayout : NSObject {

	CGRect rect;
	NSString* frame;
	NSString* mask;
	double zRotation;
	NSArray* subtract;
	double startTime;
	long long slideIndex;
	double aspectRatio;
	BOOL stretch;
	BOOL isText;
	BOOL isBreak;
	NSString* backgroundPaper;
	BOOL twoPart;
	BOOL move;
	CGRect paperRect;
	long long drawCardIndex;
	BOOL skip;
	long long moveIndex;

}

@property (nonatomic,retain) NSString * frame; 
@property (nonatomic,retain) NSString * mask; 
@property (nonatomic,retain) NSString * backgroundPaper; 
@property (nonatomic,retain) NSArray * subtract; 
-(NSArray *)subtract;
-(void)setSubtract:(NSArray *)arg1 ;
-(NSString *)backgroundPaper;
-(void)setBackgroundPaper:(NSString *)arg1 ;
-(void)setFrame:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)frame;
-(NSString *)mask;
-(void)setMask:(NSString *)arg1 ;
@end

