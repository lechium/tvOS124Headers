/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SCWatchlistDefaults : NSObject {

	NSArray* _defaultSymbols;

}

@property (nonatomic,copy,readonly) NSArray * defaultSymbols;              //@synthesize defaultSymbols=_defaultSymbols - In the implementation block
+(id)_defaultSymbolsByCountryCode;
+(id)defaultsForCurrentCountry;
+(id)_iOS10DefaultsForCurrentCountry;
+(id)_iOS7DefaultsForCurrentCountry;
+(id)defaultsFromCarrierBundle;
+(id)_legacyDefaultSymbolsByCountryCode;
+(id)defaultsWithDefaultSymbols:(id)arg1 ;
+(id)emptyDefaults;
+(id)defaultsHistoryForCurrentCountry;
-(id)initWithDefaultSymbols:(id)arg1 ;
-(id)defaultsByAppendingDefaults:(id)arg1 ;
-(NSArray *)defaultSymbols;
@end
