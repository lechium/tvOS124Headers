/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMStopwatch : NSObject {

	NSString* _label;
	NSString* _comment;
	unsigned long long _startTime;
	unsigned long long _endTime;

}

@property (nonatomic,copy) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long endTime;                //@synthesize endTime=_endTime - In the implementation block
+(void)dumpBuffer:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 comment:(id)arg2 ;
+(id)illegalLabelCharacterSet;
+(id)stopwatchWithLabel:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 ;
+(void)initialize;
-(unsigned long long)endTime;
-(void)setEndTime:(unsigned long long)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(id)descriptionAsData;
-(void)stopWithComment:(id)arg1 ;
-(id)description;
-(void)stop;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
@end
