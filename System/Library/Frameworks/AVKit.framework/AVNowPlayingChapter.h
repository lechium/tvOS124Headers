/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface AVNowPlayingChapter : NSObject {

	double _startTime;
	NSString* _title;
	UIImage* _image;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;               //@synthesize image=_image - In the implementation block
-(id)initWithStartTime:(double)arg1 title:(id)arg2 image:(id)arg3 ;
-(UIImage *)image;
-(NSString *)title;
-(double)startTime;
@end

