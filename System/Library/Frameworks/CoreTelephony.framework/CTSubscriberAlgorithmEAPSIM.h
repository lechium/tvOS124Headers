/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CTSubscriberAlgorithm.h>

@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm {

	NSData* _rand;

}

@property (nonatomic,retain) NSData * rand;              //@synthesize rand=_rand - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)rand;
-(void)setRand:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

