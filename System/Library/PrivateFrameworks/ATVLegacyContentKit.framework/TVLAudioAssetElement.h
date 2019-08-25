/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLXMLDocument, NSString, TVLImageElement, TVLXMLElement;

@interface TVLAudioAssetElement : TVLElement {

	TVLXMLDocument* _xmlDocument;
	BOOL _optimizeDownloadForHighLatency;
	NSString* _url;
	NSString* _title;
	NSString* _artist;
	NSString* _collection;
	TVLImageElement* _image;
	NSString* _rating;
	TVLXMLElement* _xml;

}

@property (nonatomic,copy) NSString * url;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * artist;                                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * collection;                              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * rating;                                  //@synthesize rating=_rating - In the implementation block
@property (assign,nonatomic) BOOL optimizeDownloadForHighLatency;              //@synthesize optimizeDownloadForHighLatency=_optimizeDownloadForHighLatency - In the implementation block
@property (nonatomic,readonly) TVLXMLElement * xml;                            //@synthesize xml=_xml - In the implementation block
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)collection;
-(void)setCollection:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(TVLXMLElement *)xml;
-(BOOL)optimizeDownloadForHighLatency;
-(void)setOptimizeDownloadForHighLatency:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)image;
-(NSString *)title;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
@end

