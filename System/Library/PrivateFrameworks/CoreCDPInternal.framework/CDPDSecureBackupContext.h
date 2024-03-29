/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CDPDevice, CDPDCircleJoinResult;

@interface CDPDSecureBackupContext : NSObject {

	BOOL _silentRecovery;
	BOOL _usePreviouslyCachedSecret;
	NSString* _localSecret;
	unsigned long long _localSecretType;
	CDPDevice* _device;
	NSString* _recoverySecret;
	NSString* _recoveryKey;
	CDPDCircleJoinResult* _circleJoinResult;

}

@property (nonatomic,copy) NSString * localSecret;                                 //@synthesize localSecret=_localSecret - In the implementation block
@property (assign,nonatomic) unsigned long long localSecretType;                   //@synthesize localSecretType=_localSecretType - In the implementation block
@property (nonatomic,copy) CDPDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * recoverySecret;                              //@synthesize recoverySecret=_recoverySecret - In the implementation block
@property (assign,nonatomic) BOOL silentRecovery;                                  //@synthesize silentRecovery=_silentRecovery - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                                 //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (assign,nonatomic) BOOL usePreviouslyCachedSecret;                       //@synthesize usePreviouslyCachedSecret=_usePreviouslyCachedSecret - In the implementation block
@property (nonatomic,retain) CDPDCircleJoinResult * circleJoinResult;              //@synthesize circleJoinResult=_circleJoinResult - In the implementation block
-(unsigned long long)localSecretType;
-(void)setLocalSecret:(NSString *)arg1 ;
-(void)setLocalSecretType:(unsigned long long)arg1 ;
-(void)setRecoverySecret:(NSString *)arg1 ;
-(void)setUsePreviouslyCachedSecret:(BOOL)arg1 ;
-(NSString *)localSecret;
-(BOOL)usePreviouslyCachedSecret;
-(CDPDCircleJoinResult *)circleJoinResult;
-(NSString *)recoverySecret;
-(BOOL)silentRecovery;
-(void)setSilentRecovery:(BOOL)arg1 ;
-(void)setCircleJoinResult:(CDPDCircleJoinResult *)arg1 ;
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(NSString *)recoveryKey;
@end

