/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLXMLDocument, NSString, TVLImageElement, NSURL, TVLXMLElement;

@interface TVLVideoAssetElement : TVLElement {

	TVLXMLDocument* _xmlDocument;
	BOOL _optimizeDownloadForHighLatency;
	float _upNextPresentationTimeSec;
	float _upNextPresentationDurationSec;
	NSString* _externalID;
	NSString* _serviceId;
	NSString* _url;
	NSString* _title;
	NSString* _assetDescription;
	NSString* _rating;
	TVLImageElement* _image;
	double _bookmarkTime;
	NSURL* _secondScreenURL;
	NSURL* _subtitleStylesURL;
	NSString* _cachingIdentifierBehavior;
	TVLXMLElement* _xml;

}

@property (nonatomic,copy) NSString * externalID;                              //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy) NSString * serviceId;                               //@synthesize serviceId=_serviceId - In the implementation block
@property (nonatomic,copy) NSString * url;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * assetDescription;                        //@synthesize assetDescription=_assetDescription - In the implementation block
@property (nonatomic,copy) NSString * rating;                                  //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                              //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,copy) NSURL * secondScreenURL;                            //@synthesize secondScreenURL=_secondScreenURL - In the implementation block
@property (nonatomic,copy) NSURL * subtitleStylesURL;                          //@synthesize subtitleStylesURL=_subtitleStylesURL - In the implementation block
@property (nonatomic,copy) NSString * cachingIdentifierBehavior;               //@synthesize cachingIdentifierBehavior=_cachingIdentifierBehavior - In the implementation block
@property (assign,nonatomic) float upNextPresentationTimeSec;                  //@synthesize upNextPresentationTimeSec=_upNextPresentationTimeSec - In the implementation block
@property (assign,nonatomic) float upNextPresentationDurationSec;              //@synthesize upNextPresentationDurationSec=_upNextPresentationDurationSec - In the implementation block
@property (assign,nonatomic) BOOL optimizeDownloadForHighLatency;              //@synthesize optimizeDownloadForHighLatency=_optimizeDownloadForHighLatency - In the implementation block
@property (nonatomic,readonly) TVLXMLElement * xml;                            //@synthesize xml=_xml - In the implementation block
+(id)_videoAssetElementForDictionary:(id)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(NSString *)serviceId;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)assetDescription;
-(void)setAssetDescription:(NSString *)arg1 ;
-(double)bookmarkTime;
-(void)setBookmarkTime:(double)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(TVLXMLElement *)xml;
-(BOOL)optimizeDownloadForHighLatency;
-(float)upNextPresentationTimeSec;
-(float)upNextPresentationDurationSec;
-(NSURL *)subtitleStylesURL;
-(void)setCachingIdentifierBehavior:(NSString *)arg1 ;
-(void)setUpNextPresentationTimeSec:(float)arg1 ;
-(void)setUpNextPresentationDurationSec:(float)arg1 ;
-(void)setOptimizeDownloadForHighLatency:(BOOL)arg1 ;
-(void)setSecondScreenURL:(NSURL *)arg1 ;
-(void)setSubtitleStylesURL:(NSURL *)arg1 ;
-(NSString *)cachingIdentifierBehavior;
-(NSURL *)secondScreenURL;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)image;
-(NSString *)title;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
@end

