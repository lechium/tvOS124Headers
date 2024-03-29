/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString;

@interface MRPictureFrameInfo : NSObject {

	CGRect rect;
	CGRect tableRect;
	BOOL onTable;
	NSString* aspectRatio;
	BOOL ignoreMatte;
	BOOL useLastFrame;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) CGRect tableRect; 
@property (assign,nonatomic) BOOL onTable; 
@property (nonatomic,copy) NSString * aspectRatio; 
@property (assign,nonatomic) BOOL ignoreMatte; 
@property (assign,nonatomic) BOOL useLastFrame; 
-(NSString *)aspectRatio;
-(void)setAspectRatio:(NSString *)arg1 ;
-(void)dealloc;
@end

