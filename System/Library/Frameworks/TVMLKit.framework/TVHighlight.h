/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TVTimeRange, NSURL;

@interface TVHighlight : NSObject {

	NSString* _localizedName;
	NSString* _highlightDescription;
	TVTimeRange* _timeRange;
	NSURL* _imageURL;
	TVTimeRange* _dateRange;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * highlightDescription;              //@synthesize highlightDescription=_highlightDescription - In the implementation block
@property (nonatomic,retain) TVTimeRange * timeRange;                      //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) TVTimeRange * dateRange;                      //@synthesize dateRange=_dateRange - In the implementation block
-(void)setTimeRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)timeRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(void)setDateRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)dateRange;
-(NSString *)highlightDescription;
-(void)setHighlightDescription:(NSString *)arg1 ;
-(NSString *)localizedName;
-(void)setImageURL:(NSURL *)arg1 ;
@end

