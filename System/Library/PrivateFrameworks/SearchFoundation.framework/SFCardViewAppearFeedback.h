/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class SFCard, NSString;

@interface SFCardViewAppearFeedback : SFFeedback {

	unsigned _level;
	SFCard* _card;
	NSString* _fbr;

}

@property (nonatomic,retain) SFCard * card;               //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * fbr;                //@synthesize fbr=_fbr - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCard:(id)arg1 ;
-(void)setFbr:(NSString *)arg1 ;
-(void)setCard:(SFCard *)arg1 ;
-(NSString *)fbr;
-(SFCard *)card;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
@end

