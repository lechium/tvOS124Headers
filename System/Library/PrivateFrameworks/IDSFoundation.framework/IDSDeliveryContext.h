/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSError, NSData, NSArray, APSOutgoingMessageCheckpointTrace, NSString, NSDictionary;

@interface IDSDeliveryContext : NSObject {

	NSNumber* _responseCommand;
	NSNumber* _responseTimeStamp;
	long long _responseCode;
	NSError* _responseError;
	NSData* _responseToken;
	NSArray* _displayIDs;
	NSError* _deliveryError;
	long long _idsResponseCode;
	BOOL _lastCall;
	BOOL _lastCourierAck;
	APSOutgoingMessageCheckpointTrace* _apsCheckpointTrace;
	NSString* _deviceID;
	NSNumber* _currentAverageRTT;
	NSNumber* _isDeviceBlackedOut;
	NSNumber* _localMessageState;
	NSString* _wpConnectionErrorDomain;
	NSNumber* _wpConnectionErrorCode;
	NSDictionary* _wpConnectionErrorUserInfo;
	APSOutgoingMessageCheckpointTrace* _apsdCheckpointTrace;

}

@property (nonatomic,copy) NSNumber * responseCommand;                                           //@synthesize responseCommand=_responseCommand - In the implementation block
@property (nonatomic,copy) NSNumber * responseTimeStamp;                                         //@synthesize responseTimeStamp=_responseTimeStamp - In the implementation block
@property (assign,nonatomic) long long responseCode;                                             //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,copy) NSError * responseError;                                              //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,copy) NSData * responseToken;                                               //@synthesize responseToken=_responseToken - In the implementation block
@property (nonatomic,copy) NSError * deliveryError;                                              //@synthesize deliveryError=_deliveryError - In the implementation block
@property (nonatomic,copy) NSArray * displayIDs;                                                 //@synthesize displayIDs=_displayIDs - In the implementation block
@property (assign,nonatomic) long long idsResponseCode;                                          //@synthesize idsResponseCode=_idsResponseCode - In the implementation block
@property (assign,nonatomic) BOOL lastCall;                                                      //@synthesize lastCall=_lastCall - In the implementation block
@property (assign,nonatomic) BOOL lastCourierAck;                                                //@synthesize lastCourierAck=_lastCourierAck - In the implementation block
@property (nonatomic,copy) APSOutgoingMessageCheckpointTrace * apsdCheckpointTrace;              //@synthesize apsdCheckpointTrace=_apsdCheckpointTrace - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSNumber * currentAverageRTT;                                         //@synthesize currentAverageRTT=_currentAverageRTT - In the implementation block
@property (nonatomic,copy) NSNumber * isDeviceBlackedOut;                                        //@synthesize isDeviceBlackedOut=_isDeviceBlackedOut - In the implementation block
@property (nonatomic,copy) NSNumber * localMessageState;                                         //@synthesize localMessageState=_localMessageState - In the implementation block
@property (nonatomic,copy) NSString * wpConnectionErrorDomain;                                   //@synthesize wpConnectionErrorDomain=_wpConnectionErrorDomain - In the implementation block
@property (nonatomic,copy) NSNumber * wpConnectionErrorCode;                                     //@synthesize wpConnectionErrorCode=_wpConnectionErrorCode - In the implementation block
@property (nonatomic,copy) NSDictionary * wpConnectionErrorUserInfo;                             //@synthesize wpConnectionErrorUserInfo=_wpConnectionErrorUserInfo - In the implementation block
-(void)setDeliveryError:(NSError *)arg1 ;
-(NSError *)deliveryError;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(BOOL)arg3 ;
-(id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 ;
-(id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5 ;
-(NSNumber *)responseCommand;
-(void)setResponseCommand:(NSNumber *)arg1 ;
-(NSNumber *)responseTimeStamp;
-(void)setResponseTimeStamp:(NSNumber *)arg1 ;
-(void)setResponseCode:(long long)arg1 ;
-(NSData *)responseToken;
-(void)setResponseToken:(NSData *)arg1 ;
-(NSArray *)displayIDs;
-(void)setDisplayIDs:(NSArray *)arg1 ;
-(long long)idsResponseCode;
-(void)setIdsResponseCode:(long long)arg1 ;
-(BOOL)lastCall;
-(void)setLastCall:(BOOL)arg1 ;
-(BOOL)lastCourierAck;
-(void)setLastCourierAck:(BOOL)arg1 ;
-(APSOutgoingMessageCheckpointTrace *)apsdCheckpointTrace;
-(void)setApsdCheckpointTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(NSNumber *)currentAverageRTT;
-(void)setCurrentAverageRTT:(NSNumber *)arg1 ;
-(NSNumber *)isDeviceBlackedOut;
-(void)setIsDeviceBlackedOut:(NSNumber *)arg1 ;
-(NSNumber *)localMessageState;
-(void)setLocalMessageState:(NSNumber *)arg1 ;
-(NSString *)wpConnectionErrorDomain;
-(void)setWpConnectionErrorDomain:(NSString *)arg1 ;
-(NSNumber *)wpConnectionErrorCode;
-(void)setWpConnectionErrorCode:(NSNumber *)arg1 ;
-(NSDictionary *)wpConnectionErrorUserInfo;
-(void)setWpConnectionErrorUserInfo:(NSDictionary *)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(NSError *)responseError;
-(long long)responseCode;
-(NSString *)deviceID;
-(id)initWithError:(id)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
@end

