/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned long long pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSArray *)strings;
-(void)setStrings:(NSArray *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(NSArray *)rects;
-(void)setRects:(NSArray *)arg1 ;
-(CGRect)boundingBox;
-(NSArray *)rotationAngles;
-(void)setRotationAngles:(NSArray *)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

