/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVPlayback/TVPlayback-Structs.h>
@class NSDate;

@interface TVPPlaybackImageLoadInfo : NSObject {

	id _identifier;
	double _requestedTime;
	NSDate* _requestedDate;
	/*^block*/id _timeBasedHandler;
	/*^block*/id _dateBasedHandler;
	CGSize _maxSize;
	SCD_Struct_TV4 _requestedCMTime;

}

@property (nonatomic,retain) id identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double requestedTime;                        //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,retain) NSDate * requestedDate;                      //@synthesize requestedDate=_requestedDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV4 requestedCMTime;              //@synthesize requestedCMTime=_requestedCMTime - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                              //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) id timeBasedHandler;                           //@synthesize timeBasedHandler=_timeBasedHandler - In the implementation block
@property (nonatomic,copy) id dateBasedHandler;                           //@synthesize dateBasedHandler=_dateBasedHandler - In the implementation block
-(double)requestedTime;
-(void)setRequestedTime:(double)arg1 ;
-(id)dateBasedHandler;
-(NSDate *)requestedDate;
-(id)timeBasedHandler;
-(void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(SCD_Struct_TV4)arg2 actualDate:(id)arg3 ;
-(void)setRequestedDate:(NSDate *)arg1 ;
-(SCD_Struct_TV4)requestedCMTime;
-(void)setRequestedCMTime:(SCD_Struct_TV4)arg1 ;
-(void)setTimeBasedHandler:(id)arg1 ;
-(void)setDateBasedHandler:(id)arg1 ;
-(id)identifier;
-(id)description;
-(void)setIdentifier:(id)arg1 ;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
@end

