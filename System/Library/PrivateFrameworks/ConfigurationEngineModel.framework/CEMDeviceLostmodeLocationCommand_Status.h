/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase {

	NSNumber* _statusLatitude;
	NSNumber* _statusLongitude;
	NSNumber* _statusHorizontalAccuracy;
	NSNumber* _statusVerticalAccuracy;
	NSNumber* _statusAltitude;
	NSNumber* _statusSpeed;
	NSNumber* _statusCourse;
	NSString* _statusTimestamp;

}

@property (nonatomic,copy) NSNumber * statusLatitude;                        //@synthesize statusLatitude=_statusLatitude - In the implementation block
@property (nonatomic,copy) NSNumber * statusLongitude;                       //@synthesize statusLongitude=_statusLongitude - In the implementation block
@property (nonatomic,copy) NSNumber * statusHorizontalAccuracy;              //@synthesize statusHorizontalAccuracy=_statusHorizontalAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * statusVerticalAccuracy;                //@synthesize statusVerticalAccuracy=_statusVerticalAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * statusAltitude;                        //@synthesize statusAltitude=_statusAltitude - In the implementation block
@property (nonatomic,copy) NSNumber * statusSpeed;                           //@synthesize statusSpeed=_statusSpeed - In the implementation block
@property (nonatomic,copy) NSNumber * statusCourse;                          //@synthesize statusCourse=_statusCourse - In the implementation block
@property (nonatomic,copy) NSString * statusTimestamp;                       //@synthesize statusTimestamp=_statusTimestamp - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8 ;
+(id)buildRequiredOnlyWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusLatitude:(NSNumber *)arg1 ;
-(void)setStatusLongitude:(NSNumber *)arg1 ;
-(void)setStatusHorizontalAccuracy:(NSNumber *)arg1 ;
-(void)setStatusVerticalAccuracy:(NSNumber *)arg1 ;
-(void)setStatusAltitude:(NSNumber *)arg1 ;
-(void)setStatusSpeed:(NSNumber *)arg1 ;
-(void)setStatusCourse:(NSNumber *)arg1 ;
-(void)setStatusTimestamp:(NSString *)arg1 ;
-(NSNumber *)statusLatitude;
-(NSNumber *)statusLongitude;
-(NSNumber *)statusHorizontalAccuracy;
-(NSNumber *)statusVerticalAccuracy;
-(NSNumber *)statusAltitude;
-(NSNumber *)statusSpeed;
-(NSNumber *)statusCourse;
-(NSString *)statusTimestamp;
@end

