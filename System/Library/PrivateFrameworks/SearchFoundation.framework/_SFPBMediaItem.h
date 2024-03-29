/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaItem.h>
@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;


@protocol _SFPBMediaItem <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBText * subtitleText; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,retain) _SFPBImage * reviewGlyph; 
@property (nonatomic,retain) _SFPBImage * overlayImage; 
@property (nonatomic,copy) NSString * reviewText; 
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings; 
@property (nonatomic,copy) NSArray * buyOptions; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBPunchout *)punchout;
-(NSString *)reviewText;
-(void)setReviewText:(id)arg1;
-(void)setPunchout:(id)arg1;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(_SFPBImage *)reviewGlyph;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(void)addSubtitleCustomLineBreaking:(id)arg1;
-(void)addBuyOptions:(id)arg1;
-(NSArray *)subtitleCustomLineBreakings;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1;
-(void)setSubtitleCustomLineBreakings:(id)arg1;
-(void)setReviewGlyph:(id)arg1;
-(void)setBuyOptions:(id)arg1;
-(void)setContentAdvisoryImage:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setSubtitleText:(id)arg1;
-(_SFPBText *)subtitleText;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(NSData *)jsonData;
-(void)setOverlayImage:(id)arg1;
-(_SFPBImage *)overlayImage;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding> {

	NSString* _title;
	_SFPBText* _subtitleText;
	_SFPBImage* _thumbnail;
	_SFPBImage* _reviewGlyph;
	_SFPBImage* _overlayImage;
	NSString* _reviewText;
	_SFPBPunchout* _punchout;
	NSArray* _subtitleCustomLineBreakings;
	NSArray* _buyOptions;
	NSString* _contentAdvisory;
	_SFPBImage* _contentAdvisoryImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBText * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _SFPBImage * reviewGlyph;                         //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,retain) _SFPBImage * overlayImage;                        //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                              //@synthesize reviewText=_reviewText - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * punchout;                         //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings;              //@synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings - In the implementation block
@property (nonatomic,copy) NSArray * buyOptions;                               //@synthesize buyOptions=_buyOptions - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                         //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage;                //@synthesize contentAdvisoryImage=_contentAdvisoryImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_SFPBPunchout *)punchout;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(_SFPBImage *)reviewGlyph;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(void)addSubtitleCustomLineBreaking:(id)arg1 ;
-(void)addBuyOptions:(id)arg1 ;
-(NSArray *)subtitleCustomLineBreakings;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1 ;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitleCustomLineBreakings:(NSArray *)arg1 ;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(void)setSubtitleCustomLineBreaking:(id)arg1 ;
-(void)setBuyOptions:(NSArray *)arg1 ;
-(void)setContentAdvisoryImage:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setSubtitleText:(_SFPBText *)arg1 ;
-(_SFPBText *)subtitleText;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(NSData *)jsonData;
-(void)setOverlayImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)overlayImage;
@end

