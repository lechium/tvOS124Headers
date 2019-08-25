/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSArray;

@interface SAStockObject : SADomainObject

@property (nonatomic,copy) NSNumber * averageDailyVolume; 
@property (nonatomic,copy) NSNumber * change; 
@property (nonatomic,copy) NSNumber * changePercent; 
@property (nonatomic,copy) NSString * chartData; 
@property (nonatomic,copy) NSString * currency; 
@property (nonatomic,copy) NSString * displayStyle; 
@property (nonatomic,copy) NSNumber * dividendYield; 
@property (nonatomic,copy) NSNumber * earningsPerShare; 
@property (nonatomic,copy) NSString * exchange; 
@property (nonatomic,copy) NSNumber * fiftyTwoWeekHigh; 
@property (nonatomic,copy) NSNumber * fiftyTwoWeekLow; 
@property (nonatomic,copy) NSNumber * high; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSNumber * low; 
@property (nonatomic,copy) NSString * marketCap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * open; 
@property (nonatomic,copy) NSNumber * peRatio; 
@property (nonatomic,copy) NSNumber * prevClose; 
@property (nonatomic,copy) NSNumber * price; 
@property (nonatomic,copy) NSNumber * realTimeChange; 
@property (nonatomic,copy) NSNumber * realTimeChangePercent; 
@property (nonatomic,copy) NSNumber * realTimePrice; 
@property (nonatomic,copy) NSNumber * realTimeTS; 
@property (nonatomic,copy) NSArray * requests; 
@property (nonatomic,copy) NSNumber * status; 
@property (nonatomic,copy) NSArray * stockNews; 
@property (nonatomic,copy) NSString * symbol; 
@property (nonatomic,copy) NSNumber * timeStamp; 
@property (nonatomic,copy) NSNumber * volume; 
@property (nonatomic,copy) NSString * yearRange; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(void)setPrice:(NSNumber *)arg1 ;
-(NSNumber *)price;
-(id)groupIdentifier;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSString *)displayStyle;
-(void)setDisplayStyle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)averageDailyVolume;
-(void)setAverageDailyVolume:(NSNumber *)arg1 ;
-(NSNumber *)changePercent;
-(void)setChangePercent:(NSNumber *)arg1 ;
-(NSString *)chartData;
-(void)setChartData:(NSString *)arg1 ;
-(NSNumber *)dividendYield;
-(void)setDividendYield:(NSNumber *)arg1 ;
-(NSNumber *)earningsPerShare;
-(void)setEarningsPerShare:(NSNumber *)arg1 ;
-(NSString *)exchange;
-(void)setExchange:(NSString *)arg1 ;
-(NSNumber *)fiftyTwoWeekHigh;
-(void)setFiftyTwoWeekHigh:(NSNumber *)arg1 ;
-(NSNumber *)fiftyTwoWeekLow;
-(void)setFiftyTwoWeekLow:(NSNumber *)arg1 ;
-(NSNumber *)high;
-(void)setHigh:(NSNumber *)arg1 ;
-(NSNumber *)low;
-(void)setLow:(NSNumber *)arg1 ;
-(NSString *)marketCap;
-(void)setMarketCap:(NSString *)arg1 ;
-(NSNumber *)peRatio;
-(void)setPeRatio:(NSNumber *)arg1 ;
-(NSNumber *)prevClose;
-(void)setPrevClose:(NSNumber *)arg1 ;
-(NSNumber *)realTimeChange;
-(void)setRealTimeChange:(NSNumber *)arg1 ;
-(NSNumber *)realTimeChangePercent;
-(void)setRealTimeChangePercent:(NSNumber *)arg1 ;
-(NSNumber *)realTimePrice;
-(void)setRealTimePrice:(NSNumber *)arg1 ;
-(NSNumber *)realTimeTS;
-(void)setRealTimeTS:(NSNumber *)arg1 ;
-(NSArray *)stockNews;
-(void)setStockNews:(NSArray *)arg1 ;
-(NSString *)yearRange;
-(void)setYearRange:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(NSNumber *)change;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setChange:(NSNumber *)arg1 ;
-(void)setOpen:(NSNumber *)arg1 ;
-(NSNumber *)volume;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)timeStamp;
-(void)setTimeStamp:(NSNumber *)arg1 ;
-(NSNumber *)open;
-(NSNumber *)status;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
@end

