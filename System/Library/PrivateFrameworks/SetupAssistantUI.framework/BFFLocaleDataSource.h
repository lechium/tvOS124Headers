/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface BFFLocaleDataSource : NSObject {

	NSString* _language;
	NSMutableArray* _suggestedCountries;
	NSMutableArray* _moreCountries;

}

@property (nonatomic,retain) NSMutableArray * suggestedCountries;              //@synthesize suggestedCountries=_suggestedCountries - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreCountries;                   //@synthesize moreCountries=_moreCountries - In the implementation block
@property (nonatomic,copy) NSString * language;                                //@synthesize language=_language - In the implementation block
+(id)newWithLanguage:(id)arg1 ;
-(void)setSuggestedCountries:(NSMutableArray *)arg1 ;
-(void)setMoreCountries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestedCountries;
-(NSMutableArray *)moreCountries;
-(unsigned long long)numberOfRecommendedLocales;
-(unsigned long long)numberOfOtherLocales;
-(id)recommendedLocaleAtIndex:(unsigned long long)arg1 ;
-(id)otherLocaleAtIndex:(unsigned long long)arg1 ;
-(void)reloadData;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

