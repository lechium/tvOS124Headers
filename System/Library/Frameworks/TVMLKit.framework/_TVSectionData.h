/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSArray;

@interface _TVSectionData : NSObject {

	NSArray* _items;
	NSArray* _cellSizes;
	unsigned long long _numColumns;
	double _height;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * cellSizes;                          //@synthesize cellSizes=_cellSizes - In the implementation block
@property (assign,nonatomic) unsigned long long numColumns;              //@synthesize numColumns=_numColumns - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                        //@synthesize insets=_insets - In the implementation block
-(NSArray *)cellSizes;
-(void)setCellSizes:(NSArray *)arg1 ;
-(unsigned long long)numColumns;
-(void)setNumColumns:(unsigned long long)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

