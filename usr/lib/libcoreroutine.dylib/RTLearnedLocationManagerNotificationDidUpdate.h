/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTLearnedLocationManagerNotificationDidUpdate : RTNotification {

	double _intervalSinceLastUpdate;

}

@property (assign,nonatomic) double intervalSinceLastUpdate;              //@synthesize intervalSinceLastUpdate=_intervalSinceLastUpdate - In the implementation block
-(double)intervalSinceLastUpdate;
-(id)initWithIntervalSinceLastUpdate:(double)arg1 ;
-(void)setIntervalSinceLastUpdate:(double)arg1 ;
-(id)description;
@end
