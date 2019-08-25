/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TVJSSearchResultBatch <JSExport>
@property (nonatomic,copy,readonly) NSArray * contentItems; 
@property (getter=isFinalBatch,nonatomic,readonly) BOOL finalBatch; 
@required
-(NSArray *)contentItems;
-(BOOL)isFinalBatch;

@end

