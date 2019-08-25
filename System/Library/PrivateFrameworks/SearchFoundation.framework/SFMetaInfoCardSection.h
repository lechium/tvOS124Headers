/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMetaInfoCardSection.h>
@class NSArray, NSString, SFColor, NSURL, SFImage, NSDictionary, NSData;


@protocol SFMetaInfoCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (assign,nonatomic) BOOL trending; 
@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,copy) NSURL * hostPageURL; 
@property (nonatomic,retain) SFImage * badge; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)trending;
-(NSURL *)hostPageURL;
-(void)setContentURL:(id)arg1;
-(NSURL *)contentURL;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setTrending:(BOOL)arg1;
-(void)setHostPageURL:(id)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setBackgroundColor:(id)arg1;
-(NSString *)type;
-(void)setType:(id)arg1;
-(SFColor *)backgroundColor;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBadge:(id)arg1;
-(SFImage *)badge;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSURL, SFImage, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFMetaInfoCardSection : SFCardSection <SFMetaInfoCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _trending;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSURL* _contentURL;
	NSURL* _hostPageURL;
	SFImage* _badge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (assign,nonatomic) BOOL trending;                                          //@synthesize trending=_trending - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                                       //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSURL * hostPageURL;                                      //@synthesize hostPageURL=_hostPageURL - In the implementation block
@property (nonatomic,retain) SFImage * badge;                                        //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)trending;
-(NSURL *)hostPageURL;
-(BOOL)hasTrending;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setTrending:(BOOL)arg1 ;
-(void)setHostPageURL:(NSURL *)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(SFColor *)backgroundColor;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBadge:(SFImage *)arg1 ;
-(SFImage *)badge;
-(NSData *)jsonData;
@end
